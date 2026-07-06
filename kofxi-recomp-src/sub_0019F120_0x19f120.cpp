#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F120
// Address: 0x19f120 - 0x19f180
void sub_0019F120_0x19f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F120_0x19f120");
#endif

    switch (ctx->pc) {
        case 0x19f130u: goto label_19f130;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f160u: goto label_19f160;
        case 0x19f168u: goto label_19f168;
        default: break;
    }

    ctx->pc = 0x19f120u;

    // 0x19f120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f128: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x19F128u;
    SET_GPR_U32(ctx, 31, 0x19F130u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x19F128u, 0x19F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F130u;
label_19f130:
    // 0x19f130: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19f130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19f134: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x19f138: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19f138u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19f13c: 0x1010  mfhi        $v0
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19f140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f144: 0xc048930  jal         func_1224C0
    ctx->pc = 0x19F144u;
    SET_GPR_U32(ctx, 31, 0x19F14Cu);
    ctx->pc = 0x19F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F144u;
    // 0x19f148: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x19F144u, 0x19F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F14Cu;
label_19f14c:
    // 0x19f14c: 0x3c03412e  lui         $v1, 0x412E
    ctx->pc = 0x19f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16686 << 16));
    // 0x19f150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f154: 0x34628480  ori         $v0, $v1, 0x8480
    ctx->pc = 0x19f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33920);
    // 0x19f158: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x19F158u;
    SET_GPR_U32(ctx, 31, 0x19F160u);
    ctx->pc = 0x19F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F158u;
    // 0x19f15c: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x19F158u, 0x19F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F160u;
label_19f160:
    // 0x19f160: 0xc048c12  jal         func_123048
    ctx->pc = 0x19F160u;
    SET_GPR_U32(ctx, 31, 0x19F168u);
    ctx->pc = 0x19F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F160u;
    // 0x19f164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x19F160u, 0x19F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F168u;
label_19f168:
    // 0x19f168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f16c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F174u;
    // 0x19f174: 0x0  nop
    ctx->pc = 0x19f174u;
    // NOP
    // 0x19f178: 0x0  nop
    ctx->pc = 0x19f178u;
    // NOP
    // 0x19f17c: 0x0  nop
    ctx->pc = 0x19f17cu;
    // NOP
    if (ctx->pc == 0x19f17cu) { ctx->pc = 0x19f180u; }
}

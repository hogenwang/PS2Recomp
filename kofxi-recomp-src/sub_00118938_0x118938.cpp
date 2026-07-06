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

// Function: sub_00118938
// Address: 0x118938 - 0x1189e0
void sub_00118938_0x118938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118938_0x118938");
#endif

    switch (ctx->pc) {
        case 0x118960u: goto label_118960;
        case 0x1189bcu: goto label_1189bc;
        default: break;
    }

    ctx->pc = 0x118938u;

    // 0x118938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11893c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118948: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11894c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11894cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x118954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118958: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x118958u;
    SET_GPR_U32(ctx, 31, 0x118960u);
    ctx->pc = 0x11895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118958u;
    // 0x11895c: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x118958u, 0x118960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118960u;
label_118960:
    // 0x118960: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118964: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x118964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x118968: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x118968u;
    {
        const bool branch_taken_0x118968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118968) {
            ctx->pc = 0x11896Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118968u;
            // 0x11896c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118970u;
            goto label_118970;
        }
    }
    ctx->pc = 0x118970u;
label_118970:
    // 0x118970: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x118970u;
    {
        const bool branch_taken_0x118970 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118970u;
        // 0x118974: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118970) {
            ctx->pc = 0x1189C8u;
            goto label_1189c8;
        }
    }
    ctx->pc = 0x118978u;
    // 0x118978: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x118978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x11897c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x11897cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x118980: 0x3012  mflo        $a2
    ctx->pc = 0x118980u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x118984: 0x1810  mfhi        $v1
    ctx->pc = 0x118984u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x118988: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x118988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11898c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x118990: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x118990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118994: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x118994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x118998: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x118998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x11899c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x11899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x1189a0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1189a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1189a4: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x1189a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x1189a8: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x1189a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1189ac: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x1189acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x1189b0: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x1189b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1189b4: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x1189B4u;
    SET_GPR_U32(ctx, 31, 0x1189BCu);
    ctx->pc = 0x1189B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189B4u;
    // 0x1189b8: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x1189B4u, 0x1189BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189BCu;
label_1189bc:
    // 0x1189bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1189bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1189c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1189c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1189c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1189c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1189c8:
    // 0x1189c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1189c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1189cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1189ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1189d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1189d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1189d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1189D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189E0u;
}

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

// Function: sub_0013C670
// Address: 0x13c670 - 0x13c6f0
void sub_0013C670_0x13c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C670_0x13c670");
#endif

    switch (ctx->pc) {
        case 0x13c684u: goto label_13c684;
        case 0x13c690u: goto label_13c690;
        case 0x13c6a8u: goto label_13c6a8;
        case 0x13c6d0u: goto label_13c6d0;
        default: break;
    }

    ctx->pc = 0x13c670u;

    // 0x13c670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c67c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13C67Cu;
    SET_GPR_U32(ctx, 31, 0x13C684u);
    ctx->pc = 0x13C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C67Cu;
    // 0x13c680: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x13C67Cu, 0x13C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C684u;
label_13c684:
    // 0x13c684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c688: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C688u;
    SET_GPR_U32(ctx, 31, 0x13C690u);
    ctx->pc = 0x13C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C688u;
    // 0x13c68c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E200u, 0x13C688u, 0x13C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C690u;
label_13c690:
    // 0x13c690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C690u;
    {
        const bool branch_taken_0x13c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c690) {
            ctx->pc = 0x13C6A0u;
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C698u;
    // 0x13c698: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13C698u;
    {
        const bool branch_taken_0x13c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C698u;
        // 0x13c69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c698) {
            ctx->pc = 0x13C6D4u;
            goto label_13c6d4;
        }
    }
    ctx->pc = 0x13C6A0u;
label_13c6a0:
    // 0x13c6a0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13C6A0u;
    SET_GPR_U32(ctx, 31, 0x13C6A8u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x13C6A0u, 0x13C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6A8u;
label_13c6a8:
    // 0x13c6a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x13c6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c6bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13c6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13c6c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13c6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13c6c8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13C6C8u;
    SET_GPR_U32(ctx, 31, 0x13C6D0u);
    ctx->pc = 0x13C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6C8u;
    // 0x13c6cc: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13C6C8u, 0x13C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6D0u;
label_13c6d0:
    // 0x13c6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c6d4:
    // 0x13c6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6DCu;
        // 0x13c6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C6E4u;
    // 0x13c6e4: 0x0  nop
    ctx->pc = 0x13c6e4u;
    // NOP
    // 0x13c6e8: 0x0  nop
    ctx->pc = 0x13c6e8u;
    // NOP
    // 0x13c6ec: 0x0  nop
    ctx->pc = 0x13c6ecu;
    // NOP
    if (ctx->pc == 0x13c6ecu) { ctx->pc = 0x13c6f0u; }
}

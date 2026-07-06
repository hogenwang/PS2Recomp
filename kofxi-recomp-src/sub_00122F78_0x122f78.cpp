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

// Function: sub_00122F78
// Address: 0x122f78 - 0x123018
void sub_00122F78_0x122f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F78_0x122f78");
#endif

    switch (ctx->pc) {
        case 0x122f90u: goto label_122f90;
        case 0x122fe0u: goto label_122fe0;
        default: break;
    }

    ctx->pc = 0x122f78u;

    // 0x122f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122f7c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x122f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x122f80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122f88: 0xc048998  jal         func_122660
    ctx->pc = 0x122F88u;
    SET_GPR_U32(ctx, 31, 0x122F90u);
    ctx->pc = 0x122F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F88u;
    // 0x122f8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122F88u, 0x122F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F90u;
label_122f90:
    // 0x122f90: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f98: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x122f98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x122f9c: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x122F9Cu;
    {
        const bool branch_taken_0x122f9c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F9Cu;
        // 0x122fa0: 0x2dcd0002  sltiu       $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f9c) {
            ctx->pc = 0x122FE0u;
            goto label_122fe0;
        }
    }
    ctx->pc = 0x122FA4u;
    // 0x122fa4: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x122FA4u;
    {
        const bool branch_taken_0x122fa4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x122FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FA4u;
        // 0x122fa8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fa4) {
            ctx->pc = 0x122FE4u;
            goto label_122fe4;
        }
    }
    ctx->pc = 0x122FACu;
    // 0x122fac: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x122facu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x122fb0: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x122FB0u;
    {
        const bool branch_taken_0x122fb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FB0u;
        // 0x122fb4: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fb0) {
            ctx->pc = 0x122FCCu;
            goto label_122fcc;
        }
    }
    ctx->pc = 0x122FB8u;
    // 0x122fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fbc: 0x5e00009  bltz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x122FBCu;
    {
        const bool branch_taken_0x122fbc = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x122FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FBCu;
        // 0x122fc0: 0x29ee001f  slti        $t6, $t7, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fbc) {
            ctx->pc = 0x122FE4u;
            goto label_122fe4;
        }
    }
    ctx->pc = 0x122FC4u;
    // 0x122fc4: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x122FC4u;
    {
        const bool branch_taken_0x122fc4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x122FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FC4u;
        // 0x122fc8: 0x240e003c  addiu       $t6, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fc4) {
            ctx->pc = 0x122FECu;
            goto label_122fec;
        }
    }
    ctx->pc = 0x122FCCu;
label_122fcc:
    // 0x122fcc: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x122fccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x122fd0: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x122fd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x122fd8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x122fd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x122fdc: 0x1cf100a  movz        $v0, $t6, $t7
    ctx->pc = 0x122fdcu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_122fe0:
    // 0x122fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_122fe4:
    // 0x122fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x122FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE4u;
        // 0x122fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122FECu;
label_122fec:
    // 0x122fec: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x122fecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x122ff0: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x122ff0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122ff4: 0x1cf7816  dsrlv       $t7, $t7, $t6
    ctx->pc = 0x122ff4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 14) & 0x3F));
    // 0x122ff8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x122ff8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x122ffc: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x122ffcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123000: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x123000u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x123004: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x123008: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x123008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12300c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x12300Cu;
    {
        const bool branch_taken_0x12300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12300Cu;
        // 0x123010: 0x1ae100b  movn        $v0, $t5, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12300c) {
            ctx->pc = 0x122FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122fe0;
        }
    }
    ctx->pc = 0x123014u;
    // 0x123014: 0x0  nop
    ctx->pc = 0x123014u;
    // NOP
    if (ctx->pc == 0x123014u) { ctx->pc = 0x123018u; }
}

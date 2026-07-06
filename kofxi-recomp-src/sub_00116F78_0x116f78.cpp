#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116F78
// Address: 0x116f78 - 0x117000
void sub_00116F78_0x116f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F78_0x116f78");
#endif

    switch (ctx->pc) {
        case 0x116f88u: goto label_116f88;
        case 0x116f98u: goto label_116f98;
        case 0x116fc0u: goto label_116fc0;
        case 0x116fd8u: goto label_116fd8;
        default: break;
    }

    ctx->pc = 0x116f78u;

    // 0x116f78: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x116f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x116f7c: 0xc  syscall     0
    ctx->pc = 0x116f7cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116f80: 0x3e00008  jr          $ra
    ctx->pc = 0x116F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116F88u;
label_116f88:
    // 0x116f88: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x116f88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x116f8c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x116F8Cu;
    {
        const bool branch_taken_0x116f8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F8Cu;
            // 0x116f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f8c) {
            ctx->pc = 0x116FB8u;
            goto label_116fb8;
        }
    }
    ctx->pc = 0x116F94u;
    // 0x116f94: 0x0  nop
    ctx->pc = 0x116f94u;
    // NOP
label_116f98:
    // 0x116f98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x116f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116f9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116fa0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x116fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x116fa4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x116fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x116fa8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x116fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x116fac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x116fb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116FB0u;
    {
        const bool branch_taken_0x116fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fb0) {
            ctx->pc = 0x116F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116f98;
        }
    }
    ctx->pc = 0x116FB8u;
label_116fb8:
    // 0x116fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x116FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FB8u;
            // 0x116fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116FC0u;
label_116fc0:
    // 0x116fc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x116fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116fc4: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x116FC4u;
    {
        const bool branch_taken_0x116fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x116FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FC4u;
            // 0x116fc8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fc4) {
            ctx->pc = 0x116FF4u;
            goto label_116ff4;
        }
    }
    ctx->pc = 0x116FCCu;
    // 0x116fcc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x116FCCu;
    {
        const bool branch_taken_0x116fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116fcc) {
            ctx->pc = 0x116FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116FCCu;
            // 0x116fd0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116FF8u;
            goto label_116ff8;
        }
    }
    ctx->pc = 0x116FD4u;
    // 0x116fd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_116fd8:
    // 0x116fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x116fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116fdc: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116FDCu;
    {
        const bool branch_taken_0x116fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x116FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FDCu;
            // 0x116fe0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fdc) {
            ctx->pc = 0x116FF4u;
            goto label_116ff4;
        }
    }
    ctx->pc = 0x116FE4u;
    // 0x116fe4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x116FE4u;
    {
        const bool branch_taken_0x116fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fe4) {
            ctx->pc = 0x116FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116FE4u;
            // 0x116fe8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116fd8;
        }
    }
    ctx->pc = 0x116FECu;
    // 0x116fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116FECu;
    {
        const bool branch_taken_0x116fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FECu;
            // 0x116ff0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fec) {
            ctx->pc = 0x116FF8u;
            goto label_116ff8;
        }
    }
    ctx->pc = 0x116FF4u;
label_116ff4:
    // 0x116ff4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x116ff4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_116ff8:
    // 0x116ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x116FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FF8u;
            // 0x116ffc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117000u;
    ctx->pc = 0x117000u;
}

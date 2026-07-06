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

// Function: sub_002D3EB0
// Address: 0x2d3eb0 - 0x2d4058
void sub_002D3EB0_0x2d3eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3EB0_0x2d3eb0");
#endif

    switch (ctx->pc) {
        case 0x2d3efcu: goto label_2d3efc;
        case 0x2d3f24u: goto label_2d3f24;
        case 0x2d3f48u: goto label_2d3f48;
        case 0x2d3fc0u: goto label_2d3fc0;
        case 0x2d4018u: goto label_2d4018;
        default: break;
    }

    ctx->pc = 0x2d3eb0u;

    // 0x2d3eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3eb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3ec0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d3ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3ec8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d3ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d3ecc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d3eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3ed0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d3ed4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2d3ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3ed8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3ED8u;
    {
        const bool branch_taken_0x2d3ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ed8) {
            ctx->pc = 0x2D3EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3ED8u;
            // 0x2d3edc: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F30u;
            goto label_2d3f30;
        }
    }
    ctx->pc = 0x2D3EE0u;
    // 0x2d3ee0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3ee4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d3ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ee8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d3ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d3eec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3EECu;
    {
        const bool branch_taken_0x2d3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3eec) {
            ctx->pc = 0x2D3EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3EECu;
            // 0x2d3ef0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F0Cu;
            goto label_2d3f0c;
        }
    }
    ctx->pc = 0x2D3EF4u;
    // 0x2d3ef4: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2D3EF4u;
    SET_GPR_U32(ctx, 31, 0x2D3EFCu);
    ctx->pc = 0x2D3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EF4u;
    // 0x2d3ef8: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2D3EF4u, 0x2D3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EFCu;
label_2d3efc:
    // 0x2d3efc: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D3EFCu;
    {
        const bool branch_taken_0x2d3efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3efc) {
            ctx->pc = 0x2D3F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3EFCu;
            // 0x2d3f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4040u;
            goto label_2d4040;
        }
    }
    ctx->pc = 0x2D3F04u;
    // 0x2d3f04: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d3f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3f08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d3f0c:
    // 0x2d3f0c: 0x2073023  subu        $a2, $s0, $a3
    ctx->pc = 0x2d3f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d3f10: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2d3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d3f14: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2d3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d3f18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d3f1c: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F24u);
    ctx->pc = 0x2D3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F1Cu;
    // 0x2d3f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D3F1Cu, 0x2D3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F24u;
label_2d3f24:
    // 0x2d3f24: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2d3f28: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d3f2c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d3f30:
    // 0x2d3f30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d3f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f34: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x2d3f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d3f38: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D3F38u;
    {
        const bool branch_taken_0x2d3f38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F38u;
        // 0x2d3f3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f38) {
            ctx->pc = 0x2D3F94u;
            goto label_2d3f94;
        }
    }
    ctx->pc = 0x2D3F40u;
    // 0x2d3f40: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d3f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d3f44: 0x0  nop
    ctx->pc = 0x2d3f44u;
    // NOP
label_2d3f48:
    // 0x2d3f48: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d3f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d3f4c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2d3f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d3f50: 0x67202d  daddu       $a0, $v1, $a3
    ctx->pc = 0x2d3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2d3f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d3f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f58: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2d3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2d3f5c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2d3f60: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2d3f60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d3f64: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d3f64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d3f68: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d3f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d3f6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F6Cu;
    {
        const bool branch_taken_0x2d3f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F6Cu;
        // 0x2d3f70: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f6c) {
            ctx->pc = 0x2D3F7Cu;
            goto label_2d3f7c;
        }
    }
    ctx->pc = 0x2D3F74u;
    // 0x2d3f74: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F74u;
    {
        const bool branch_taken_0x2d3f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f74) {
            ctx->pc = 0x2D3F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3F74u;
            // 0x2d3f78: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F84u;
            goto label_2d3f84;
        }
    }
    ctx->pc = 0x2D3F7Cu;
label_2d3f7c:
    // 0x2d3f7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d3f84:
    // 0x2d3f84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d3f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d3f88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d3f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3f8c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D3F8Cu;
    {
        const bool branch_taken_0x2d3f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f8c) {
            ctx->pc = 0x2D3F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3F8Cu;
            // 0x2d3f90: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3f48;
        }
    }
    ctx->pc = 0x2D3F94u;
label_2d3f94:
    // 0x2d3f94: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D3F94u;
    {
        const bool branch_taken_0x2d3f94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F94u;
        // 0x2d3f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f94) {
            ctx->pc = 0x2D403Cu;
            goto label_2d403c;
        }
    }
    ctx->pc = 0x2D3F9Cu;
    // 0x2d3f9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3fa0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d3fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3fa4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3FA4u;
    {
        const bool branch_taken_0x2d3fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3fa4) {
            ctx->pc = 0x2D3FE8u;
            goto label_2d3fe8;
        }
    }
    ctx->pc = 0x2D3FACu;
    // 0x2d3fac: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2d3facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d3fb0: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x2d3fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2d3fb4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2d3fb4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d3fb8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3FB8u;
    {
        const bool branch_taken_0x2d3fb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FB8u;
        // 0x2d3fbc: 0xfca20000  sd          $v0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fb8) {
            ctx->pc = 0x2D3FF0u;
            goto label_2d3ff0;
        }
    }
    ctx->pc = 0x2D3FC0u;
label_2d3fc0:
    // 0x2d3fc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3fc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d3fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d3fc8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d3fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3fcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3FCCu;
    {
        const bool branch_taken_0x2d3fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FCCu;
        // 0x2d3fd0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fcc) {
            ctx->pc = 0x2D3FE8u;
            goto label_2d3fe8;
        }
    }
    ctx->pc = 0x2D3FD4u;
    // 0x2d3fd4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2d3fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d3fd8: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x2d3fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2d3fdc: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2d3fdcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d3fe0: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D3FE0u;
    {
        const bool branch_taken_0x2d3fe0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FE0u;
        // 0x2d3fe4: 0xfca20000  sd          $v0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fe0) {
            ctx->pc = 0x2D3FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3fc0;
        }
    }
    ctx->pc = 0x2D3FE8u;
label_2d3fe8:
    // 0x2d3fe8: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3FE8u;
    {
        const bool branch_taken_0x2d3fe8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3fe8) {
            ctx->pc = 0x2D3FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3FE8u;
            // 0x2d3fec: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3FF8u;
            goto label_2d3ff8;
        }
    }
    ctx->pc = 0x2D3FF0u;
label_2d3ff0:
    // 0x2d3ff0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3FF0u;
    {
        const bool branch_taken_0x2d3ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FF0u;
        // 0x2d3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ff0) {
            ctx->pc = 0x2D403Cu;
            goto label_2d403c;
        }
    }
    ctx->pc = 0x2D3FF8u;
label_2d3ff8:
    // 0x2d3ff8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3ffc: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2d3ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4000: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d4000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d4004: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4004u;
    {
        const bool branch_taken_0x2d4004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4004) {
            ctx->pc = 0x2D4008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4004u;
            // 0x2d4008: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4024u;
            goto label_2d4024;
        }
    }
    ctx->pc = 0x2D400Cu;
    // 0x2d400c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4010: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2D4010u;
    SET_GPR_U32(ctx, 31, 0x2D4018u);
    ctx->pc = 0x2D4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4010u;
    // 0x2d4014: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2D4010u, 0x2D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4018u;
label_2d4018:
    // 0x2d4018: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4018u;
    {
        const bool branch_taken_0x2d4018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4018) {
            ctx->pc = 0x2D401Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4018u;
            // 0x2d401c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4040u;
            goto label_2d4040;
        }
    }
    ctx->pc = 0x2D4020u;
    // 0x2d4020: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d4020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d4024:
    // 0x2d4024: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2d4024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d4028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d402c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d402cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d4034: 0xfc65fff8  sd          $a1, -0x8($v1)
    ctx->pc = 0x2d4034u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U64(ctx, 5));
    // 0x2d4038: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d4038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d403c:
    // 0x2d403c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d403cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4040:
    // 0x2d4040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d4048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d404c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D404Cu;
        // 0x2d4050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4054u;
    // 0x2d4054: 0x0  nop
    ctx->pc = 0x2d4054u;
    // NOP
    if (ctx->pc == 0x2d4054u) { ctx->pc = 0x2d4058u; }
}

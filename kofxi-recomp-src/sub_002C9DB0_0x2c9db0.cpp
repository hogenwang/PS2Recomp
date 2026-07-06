#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9DB0
// Address: 0x2c9db0 - 0x2c9f90
void sub_002C9DB0_0x2c9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DB0_0x2c9db0");
#endif

    switch (ctx->pc) {
        case 0x2c9e10u: goto label_2c9e10;
        case 0x2c9e14u: goto label_2c9e14;
        case 0x2c9e18u: goto label_2c9e18;
        case 0x2c9e1cu: goto label_2c9e1c;
        case 0x2c9e48u: goto label_2c9e48;
        case 0x2c9e60u: goto label_2c9e60;
        case 0x2c9e80u: goto label_2c9e80;
        case 0x2c9eacu: goto label_2c9eac;
        case 0x2c9f00u: goto label_2c9f00;
        case 0x2c9f2cu: goto label_2c9f2c;
        case 0x2c9f54u: goto label_2c9f54;
        default: break;
    }

    ctx->pc = 0x2c9db0u;

label_2c9db0:
    // 0x2c9db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c9db4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2c9db8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c9dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dc0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c9dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c9dc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c9dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dc8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2c9dcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c9dd0: 0x24638548  addiu       $v1, $v1, -0x7AB8
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935880));
    // 0x2c9dd4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c9dd8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2c9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2c9ddc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c9de0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9de4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9de8: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C9DE8u;
    {
        const bool branch_taken_0x2c9de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DE8u;
            // 0x2c9dec: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9de8) {
            ctx->pc = 0x2C9E68u;
            goto label_2c9e68;
        }
    }
    ctx->pc = 0x2C9DF0u;
    // 0x2c9df0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c9df4: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2c9df8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c9dfc: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9DFCu;
    {
        const bool branch_taken_0x2c9dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C9E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DFCu;
            // 0x2c9e00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dfc) {
            ctx->pc = 0x2C9E5Cu;
            goto label_2c9e5c;
        }
    }
    ctx->pc = 0x2C9E04u;
    // 0x2c9e04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c9e08: 0x24130103  addiu       $s3, $zero, 0x103
    ctx->pc = 0x2c9e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2c9e0c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2c9e10:
    // 0x2c9e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c9e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c9e14:
    // 0x2c9e14: 0xc0b276c  jal         func_2C9DB0
label_2c9e18:
    if (ctx->pc == 0x2C9E18u) {
        ctx->pc = 0x2C9E18u;
            // 0x2c9e18: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x2C9E1Cu;
        goto label_2c9e1c;
    }
    ctx->pc = 0x2C9E14u;
    SET_GPR_U32(ctx, 31, 0x2C9E1Cu);
    ctx->pc = 0x2C9E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E14u;
            // 0x2c9e18: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9DB0u;
    goto label_2c9db0;
    ctx->pc = 0x2C9E1Cu;
label_2c9e1c:
    // 0x2c9e1c: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C9E1Cu;
    {
        const bool branch_taken_0x2c9e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e1c) {
            ctx->pc = 0x2C9E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E1Cu;
            // 0x2c9e20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9F74u;
            goto label_2c9f74;
        }
    }
    ctx->pc = 0x2C9E24u;
    // 0x2c9e24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9e28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9e30: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2c9e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9e34: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C9E34u;
    {
        const bool branch_taken_0x2c9e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E34u;
            // 0x2c9e38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e34) {
            ctx->pc = 0x2C9F28u;
            goto label_2c9f28;
        }
    }
    ctx->pc = 0x2C9E3Cu;
    // 0x2c9e3c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c9e40: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2c9e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c9e44: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2c9e48:
    // 0x2c9e48: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2c9e4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9e50: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9e54: 0x1493ffee  bne         $a0, $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9E54u;
    {
        const bool branch_taken_0x2c9e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E54u;
            // 0x2c9e58: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e54) {
            ctx->pc = 0x2C9E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9e10;
        }
    }
    ctx->pc = 0x2C9E5Cu;
label_2c9e5c:
    // 0x2c9e5c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c9e60:
    // 0x2c9e60: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2C9E60u;
    {
        const bool branch_taken_0x2c9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E60u;
            // 0x2c9e64: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e60) {
            ctx->pc = 0x2C9F30u;
            goto label_2c9f30;
        }
    }
    ctx->pc = 0x2C9E68u;
label_2c9e68:
    // 0x2c9e68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c9e6c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2c9e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2c9e70: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9E70u;
    {
        const bool branch_taken_0x2c9e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E70u;
            // 0x2c9e74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e70) {
            ctx->pc = 0x2C9ED0u;
            goto label_2c9ed0;
        }
    }
    ctx->pc = 0x2C9E78u;
    // 0x2c9e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9e80:
    // 0x2c9e80: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c9e84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9e88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9e90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9e94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c9e98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9e9c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2c9e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9ea0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C9EA0u;
    {
        const bool branch_taken_0x2c9ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EA0u;
            // 0x2c9ea4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ea0) {
            ctx->pc = 0x2C9F28u;
            goto label_2c9f28;
        }
    }
    ctx->pc = 0x2C9EA8u;
    // 0x2c9ea8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c9eac:
    // 0x2c9eac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c9eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c9eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c9eb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9eb8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2c9ebc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C9EBCu;
    {
        const bool branch_taken_0x2c9ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EBCu;
            // 0x2c9ec0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ebc) {
            ctx->pc = 0x2C9E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9e80;
        }
    }
    ctx->pc = 0x2C9EC4u;
    // 0x2c9ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9EC4u;
    {
        const bool branch_taken_0x2c9ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EC4u;
            // 0x2c9ec8: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ec4) {
            ctx->pc = 0x2C9ED8u;
            goto label_2c9ed8;
        }
    }
    ctx->pc = 0x2C9ECCu;
    // 0x2c9ecc: 0x0  nop
    ctx->pc = 0x2c9eccu;
    // NOP
label_2c9ed0:
    // 0x2c9ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ed4: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2c9ed8:
    // 0x2c9ed8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9edc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c9ee0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9ee4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2c9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c9ee8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c9eec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c9ef0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c9ef4: 0xa4282b  sltu        $a1, $a1, $a0
    ctx->pc = 0x2c9ef4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9ef8: 0x14a0001d  bnez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C9EF8u;
    {
        const bool branch_taken_0x2c9ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EF8u;
            // 0x2c9efc: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ef8) {
            ctx->pc = 0x2C9F70u;
            goto label_2c9f70;
        }
    }
    ctx->pc = 0x2C9F00u;
label_2c9f00:
    // 0x2c9f00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c9f04: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2c9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c9f08: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2c9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2c9f0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c9f10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9f14: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2c9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x2c9f18: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9F18u;
    {
        const bool branch_taken_0x2c9f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c9f18) {
            ctx->pc = 0x2C9F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F18u;
            // 0x2c9f1c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9F34u;
            goto label_2c9f34;
        }
    }
    ctx->pc = 0x2C9F20u;
    // 0x2c9f20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C9F20u;
    {
        const bool branch_taken_0x2c9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F20u;
            // 0x2c9f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f20) {
            ctx->pc = 0x2C9F70u;
            goto label_2c9f70;
        }
    }
    ctx->pc = 0x2C9F28u;
label_2c9f28:
    // 0x2c9f28: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c9f2c:
    if (ctx->pc == 0x2C9F2Cu) {
        ctx->pc = 0x2C9F2Cu;
            // 0x2c9f2c: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->pc = 0x2C9F30u;
        goto label_2c9f30;
    }
    ctx->pc = 0x2C9F28u;
    {
        const bool branch_taken_0x2c9f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F28u;
            // 0x2c9f2c: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f28) {
            ctx->pc = 0x2C9F70u;
            goto label_2c9f70;
        }
    }
    ctx->pc = 0x2C9F30u;
label_2c9f30:
    // 0x2c9f30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9f34:
    // 0x2c9f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c9f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f38: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x2c9f38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c9f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f40: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x2c9f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c9f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f48: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2c9f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c9f4c: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2C9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F54u);
    ctx->pc = 0x2C9F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F4Cu;
            // 0x2c9f50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (runtime->hasFunction(0x2CE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F54u; }
        if (ctx->pc != 0x2C9F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8E8_0x2ce8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F54u; }
        if (ctx->pc != 0x2C9F54u) { return; }
    }
    ctx->pc = 0x2C9F54u;
label_2c9f54:
    // 0x2c9f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9f58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2c9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f5c: 0x24020802  addiu       $v0, $zero, 0x802
    ctx->pc = 0x2c9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x2c9f60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9f64: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x2c9f64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9f68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9f6c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x2c9f6cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2c9f70:
    // 0x2c9f70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c9f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9f74:
    // 0x2c9f74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c9f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9f78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9f7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c9f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c9f80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c9f80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9f84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2c9f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c9f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F88u;
            // 0x2c9f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9F90u;
    ctx->pc = 0x2c9f90u;
}

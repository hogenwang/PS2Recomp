#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251A60
// Address: 0x251a60 - 0x251de8
void sub_00251A60_0x251a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251A60_0x251a60");
#endif

    switch (ctx->pc) {
        case 0x251af4u: goto label_251af4;
        case 0x251bd0u: goto label_251bd0;
        case 0x251c50u: goto label_251c50;
        case 0x251c8cu: goto label_251c8c;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cd0u: goto label_251cd0;
        case 0x251d70u: goto label_251d70;
        case 0x251d84u: goto label_251d84;
        default: break;
    }

    ctx->pc = 0x251a60u;

    // 0x251a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x251a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x251a64: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x251a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x251a68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x251a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x251a6c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x251a6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x251a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x251a74: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x251a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x251a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x251a7c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x251a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a80: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x251a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x251a84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x251a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x251a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251a90: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x251a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x251a94: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x251A94u;
    {
        const bool branch_taken_0x251a94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A94u;
            // 0x251a98: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a94) {
            ctx->pc = 0x251AB0u;
            goto label_251ab0;
        }
    }
    ctx->pc = 0x251A9Cu;
    // 0x251a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251aa0: 0x148200c6  bne         $a0, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x251AA0u;
    {
        const bool branch_taken_0x251aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x251AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AA0u;
            // 0x251aa4: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aa0) {
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251AA8u;
    // 0x251aa8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x251AA8u;
    {
        const bool branch_taken_0x251aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251aa8) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251AB0u;
label_251ab0:
    // 0x251ab0: 0x10800069  beqz        $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x251AB0u;
    {
        const bool branch_taken_0x251ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AB0u;
            // 0x251ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab0) {
            ctx->pc = 0x251C58u;
            goto label_251c58;
        }
    }
    ctx->pc = 0x251AB8u;
    // 0x251ab8: 0x148200c1  bne         $a0, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x251AB8u;
    {
        const bool branch_taken_0x251ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x251ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AB8u;
            // 0x251abc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab8) {
            ctx->pc = 0x251DC0u;
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251AC0u;
    // 0x251ac0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x251ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x251ac4: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x251ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x251ac8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x251AC8u;
    {
        const bool branch_taken_0x251ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AC8u;
            // 0x251acc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ac8) {
            ctx->pc = 0x251C3Cu;
            goto label_251c3c;
        }
    }
    ctx->pc = 0x251AD0u;
    // 0x251ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251ad4: 0x24426ce0  addiu       $v0, $v0, 0x6CE0
    ctx->pc = 0x251ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27872));
    // 0x251ad8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251adc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251ae0: 0x800008  jr          $a0
    ctx->pc = 0x251AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251AE8u: goto label_251ae8;
            case 0x251AFCu: goto label_251afc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BD8u: goto label_251bd8;
            case 0x251C3Cu: goto label_251c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251AE8u;
label_251ae8:
    // 0x251ae8: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x251aec: 0xc09477a  jal         func_251DE8
    ctx->pc = 0x251AECu;
    SET_GPR_U32(ctx, 31, 0x251AF4u);
    ctx->pc = 0x251AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251AECu;
            // 0x251af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251DE8u;
    if (runtime->hasFunction(0x251DE8u)) {
        auto targetFn = runtime->lookupFunction(0x251DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AF4u; }
        if (ctx->pc != 0x251AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251DE8_0x251de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AF4u; }
        if (ctx->pc != 0x251AF4u) { return; }
    }
    ctx->pc = 0x251AF4u;
label_251af4:
    // 0x251af4: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x251AF4u;
    {
        const bool branch_taken_0x251af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AF4u;
            // 0x251af8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251af4) {
            ctx->pc = 0x251DC4u;
            goto label_251dc4;
        }
    }
    ctx->pc = 0x251AFCu;
label_251afc:
    // 0x251afc: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x251AFCu;
    {
        const bool branch_taken_0x251afc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AFCu;
            // 0x251b00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251afc) {
            ctx->pc = 0x251C34u;
            goto label_251c34;
        }
    }
    ctx->pc = 0x251B04u;
    // 0x251b04: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251b08: 0x5462004d  bnel        $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x251B08u;
    {
        const bool branch_taken_0x251b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251b08) {
            ctx->pc = 0x251B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251B08u;
            // 0x251b0c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B10u;
    // 0x251b10: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x251b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251b14: 0x2684fffd  addiu       $a0, $s4, -0x3
    ctx->pc = 0x251b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x251b18: 0x2c820012  sltiu       $v0, $a0, 0x12
    ctx->pc = 0x251b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x251b1c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x251B1Cu;
    {
        const bool branch_taken_0x251b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B1Cu;
            // 0x251b20: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b1c) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B24u;
    // 0x251b24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x251b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x251b28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251b2c: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
    // 0x251b30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251b34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251b38: 0x800008  jr          $a0
    ctx->pc = 0x251B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251B40u: goto label_251b40;
            case 0x251B48u: goto label_251b48;
            case 0x251B50u: goto label_251b50;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B88u: goto label_251b88;
            case 0x251BA4u: goto label_251ba4;
            case 0x251C40u: goto label_251c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251B40u;
label_251b40:
    // 0x251b40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x251B40u;
    {
        const bool branch_taken_0x251b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B40u;
            // 0x251b44: 0xa2110039  sb          $s1, 0x39($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b40) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B48u;
label_251b48:
    // 0x251b48: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x251B48u;
    {
        const bool branch_taken_0x251b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B48u;
            // 0x251b4c: 0xa2110040  sb          $s1, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b48) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B50u;
label_251b50:
    // 0x251b50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251B50u;
    {
        const bool branch_taken_0x251b50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B50u;
            // 0x251b54: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b50) {
            ctx->pc = 0x251B64u;
            goto label_251b64;
        }
    }
    ctx->pc = 0x251B58u;
    // 0x251b58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x251b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x251b5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x251B5Cu;
    {
        const bool branch_taken_0x251b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B5Cu;
            // 0x251b60: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b5c) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B64u;
label_251b64:
    // 0x251b64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x251B64u;
    {
        const bool branch_taken_0x251b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B64u;
            // 0x251b68: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b64) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251B6Cu;
label_251b6c:
    // 0x251b6c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251B6Cu;
    {
        const bool branch_taken_0x251b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B6Cu;
            // 0x251b70: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b6c) {
            ctx->pc = 0x251B80u;
            goto label_251b80;
        }
    }
    ctx->pc = 0x251B74u;
    // 0x251b74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x251b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x251b78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x251B78u;
    {
        const bool branch_taken_0x251b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B78u;
            // 0x251b7c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b78) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B80u;
label_251b80:
    // 0x251b80: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x251B80u;
    {
        const bool branch_taken_0x251b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B80u;
            // 0x251b84: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b80) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251B88u;
label_251b88:
    // 0x251b88: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251B88u;
    {
        const bool branch_taken_0x251b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B88u;
            // 0x251b8c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b88) {
            ctx->pc = 0x251B9Cu;
            goto label_251b9c;
        }
    }
    ctx->pc = 0x251B90u;
    // 0x251b90: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x251b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x251b94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x251B94u;
    {
        const bool branch_taken_0x251b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B94u;
            // 0x251b98: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b94) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251B9Cu;
label_251b9c:
    // 0x251b9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x251B9Cu;
    {
        const bool branch_taken_0x251b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B9Cu;
            // 0x251ba0: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b9c) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251BA4u;
label_251ba4:
    // 0x251ba4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251BA4u;
    {
        const bool branch_taken_0x251ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BA4u;
            // 0x251ba8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ba4) {
            ctx->pc = 0x251BB8u;
            goto label_251bb8;
        }
    }
    ctx->pc = 0x251BACu;
    // 0x251bac: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x251bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x251bb0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x251BB0u;
    {
        const bool branch_taken_0x251bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BB0u;
            // 0x251bb4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bb0) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251BB8u;
label_251bb8:
    // 0x251bb8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x251BB8u;
    {
        const bool branch_taken_0x251bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BB8u;
            // 0x251bbc: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bb8) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251BC0u;
label_251bc0:
    // 0x251bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x251bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bc4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x251bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x251bc8: 0xc0947ea  jal         func_251FA8
    ctx->pc = 0x251BC8u;
    SET_GPR_U32(ctx, 31, 0x251BD0u);
    ctx->pc = 0x251BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251BC8u;
            // 0x251bcc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251FA8u;
    if (runtime->hasFunction(0x251FA8u)) {
        auto targetFn = runtime->lookupFunction(0x251FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251BD0u; }
        if (ctx->pc != 0x251BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251FA8_0x251fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251BD0u; }
        if (ctx->pc != 0x251BD0u) { return; }
    }
    ctx->pc = 0x251BD0u;
label_251bd0:
    // 0x251bd0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x251BD0u;
    {
        const bool branch_taken_0x251bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BD0u;
            // 0x251bd4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bd0) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251BD8u;
label_251bd8:
    // 0x251bd8: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x251BD8u;
    {
        const bool branch_taken_0x251bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BD8u;
            // 0x251bdc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bd8) {
            ctx->pc = 0x251C34u;
            goto label_251c34;
        }
    }
    ctx->pc = 0x251BE0u;
    // 0x251be0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x251be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251be4: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x251BE4u;
    {
        const bool branch_taken_0x251be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251be4) {
            ctx->pc = 0x251BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251BE4u;
            // 0x251be8: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251BECu;
    // 0x251bec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x251becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251bf0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x251bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251bf4: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x251BF4u;
    {
        const bool branch_taken_0x251bf4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x251BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BF4u;
            // 0x251bf8: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bf4) {
            ctx->pc = 0x251C34u;
            goto label_251c34;
        }
    }
    ctx->pc = 0x251BFCu;
    // 0x251bfc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x251BFCu;
    {
        const bool branch_taken_0x251bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251bfc) {
            ctx->pc = 0x251C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251BFCu;
            // 0x251c00: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251C18u;
            goto label_251c18;
        }
    }
    ctx->pc = 0x251C04u;
    // 0x251c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251c08: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251C08u;
    {
        const bool branch_taken_0x251c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c08) {
            ctx->pc = 0x251C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251C08u;
            // 0x251c0c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251C28u;
            goto label_251c28;
        }
    }
    ctx->pc = 0x251C10u;
    // 0x251c10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x251C10u;
    {
        const bool branch_taken_0x251c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C10u;
            // 0x251c14: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c10) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251C18u;
label_251c18:
    // 0x251c18: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x251c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_251c1c:
    // 0x251c1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251c20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x251C20u;
    {
        const bool branch_taken_0x251c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C20u;
            // 0x251c24: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c20) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251C28u;
label_251c28:
    // 0x251c28: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x251c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x251c2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251C2Cu;
    {
        const bool branch_taken_0x251c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C2Cu;
            // 0x251c30: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c2c) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251C34u;
label_251c34:
    // 0x251c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251C34u;
    {
        const bool branch_taken_0x251c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C34u;
            // 0x251c38: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c34) {
            ctx->pc = 0x251C40u;
            goto label_251c40;
        }
    }
    ctx->pc = 0x251C3Cu;
label_251c3c:
    // 0x251c3c: 0x2415006d  addiu       $s5, $zero, 0x6D
    ctx->pc = 0x251c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_251c40:
    // 0x251c40: 0x1240005f  beqz        $s2, . + 4 + (0x5F << 2)
    ctx->pc = 0x251C40u;
    {
        const bool branch_taken_0x251c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C40u;
            // 0x251c44: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c40) {
            ctx->pc = 0x251DC0u;
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251C48u;
    // 0x251c48: 0xc08a996  jal         func_22A658
    ctx->pc = 0x251C48u;
    SET_GPR_U32(ctx, 31, 0x251C50u);
    ctx->pc = 0x251C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251C48u;
            // 0x251c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C50u; }
        if (ctx->pc != 0x251C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C50u; }
        if (ctx->pc != 0x251C50u) { return; }
    }
    ctx->pc = 0x251C50u;
label_251c50:
    // 0x251c50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x251C50u;
    {
        const bool branch_taken_0x251c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C50u;
            // 0x251c54: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c50) {
            ctx->pc = 0x251DC0u;
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251C58u;
label_251c58:
    // 0x251c58: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x251c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x251c5c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x251c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x251c60: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C60u;
            // 0x251c64: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251DB8u;
            goto label_251db8;
        }
    }
    ctx->pc = 0x251C68u;
    // 0x251c68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251c6c: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x251c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x251c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251c74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251c78: 0x800008  jr          $a0
    ctx->pc = 0x251C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251C80u: goto label_251c80;
            case 0x251CC4u: goto label_251cc4;
            case 0x251D60u: goto label_251d60;
            case 0x251D78u: goto label_251d78;
            case 0x251DB8u: goto label_251db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251C80u;
label_251c80:
    // 0x251c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c84: 0xc08a922  jal         func_22A488
    ctx->pc = 0x251C84u;
    SET_GPR_U32(ctx, 31, 0x251C8Cu);
    ctx->pc = 0x251C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251C84u;
            // 0x251c88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C8Cu; }
        if (ctx->pc != 0x251C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C8Cu; }
        if (ctx->pc != 0x251C8Cu) { return; }
    }
    ctx->pc = 0x251C8Cu;
label_251c8c:
    // 0x251c8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c90: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x251C90u;
    {
        const bool branch_taken_0x251c90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C90u;
            // 0x251c94: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c90) {
            ctx->pc = 0x251D90u;
            goto label_251d90;
        }
    }
    ctx->pc = 0x251C98u;
    // 0x251c98: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x251c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x251c9c: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x251C9Cu;
    {
        const bool branch_taken_0x251c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c9c) {
            ctx->pc = 0x251CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251C9Cu;
            // 0x251ca0: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251CA4u;
    // 0x251ca4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x251ca8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x251ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251cac: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x251cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
    // 0x251cb0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x251cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x251cb4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x251CB4u;
    SET_GPR_U32(ctx, 31, 0x251CBCu);
    ctx->pc = 0x251CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251CB4u;
            // 0x251cb8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CBCu; }
        if (ctx->pc != 0x251CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CBCu; }
        if (ctx->pc != 0x251CBCu) { return; }
    }
    ctx->pc = 0x251CBCu;
label_251cbc:
    // 0x251cbc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x251CBCu;
    {
        const bool branch_taken_0x251cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CBCu;
            // 0x251cc0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cbc) {
            ctx->pc = 0x251DC0u;
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251CC4u;
label_251cc4:
    // 0x251cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251cc8: 0xc08a922  jal         func_22A488
    ctx->pc = 0x251CC8u;
    SET_GPR_U32(ctx, 31, 0x251CD0u);
    ctx->pc = 0x251CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251CC8u;
            // 0x251ccc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CD0u; }
        if (ctx->pc != 0x251CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CD0u; }
        if (ctx->pc != 0x251CD0u) { return; }
    }
    ctx->pc = 0x251CD0u;
label_251cd0:
    // 0x251cd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251cd4: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x251CD4u;
    {
        const bool branch_taken_0x251cd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CD4u;
            // 0x251cd8: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cd4) {
            ctx->pc = 0x251D90u;
            goto label_251d90;
        }
    }
    ctx->pc = 0x251CDCu;
    // 0x251cdc: 0x2684fffd  addiu       $a0, $s4, -0x3
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x251ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x251ce4: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x251ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x251ce8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x251CE8u;
    {
        const bool branch_taken_0x251ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CE8u;
            // 0x251cec: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ce8) {
            ctx->pc = 0x251D54u;
            goto label_251d54;
        }
    }
    ctx->pc = 0x251CF0u;
    // 0x251cf0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x251cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x251cf4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251cf8: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x251cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x251cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251d00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251d04: 0x800008  jr          $a0
    ctx->pc = 0x251D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D14u: goto label_251d14;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D24u: goto label_251d24;
            case 0x251D30u: goto label_251d30;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D48u: goto label_251d48;
            case 0x251D54u: goto label_251d54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251D0Cu;
label_251d0c:
    // 0x251d0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x251D0Cu;
    {
        const bool branch_taken_0x251d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D0Cu;
            // 0x251d10: 0x92110039  lbu         $s1, 0x39($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d0c) {
            ctx->pc = 0x251D54u;
            goto label_251d54;
        }
    }
    ctx->pc = 0x251D14u;
label_251d14:
    // 0x251d14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x251D14u;
    {
        const bool branch_taken_0x251d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D14u;
            // 0x251d18: 0x92110040  lbu         $s1, 0x40($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d14) {
            ctx->pc = 0x251D54u;
            goto label_251d54;
        }
    }
    ctx->pc = 0x251D1Cu;
label_251d1c:
    // 0x251d1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x251D1Cu;
    {
        const bool branch_taken_0x251d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D1Cu;
            // 0x251d20: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d1c) {
            ctx->pc = 0x251D54u;
            goto label_251d54;
        }
    }
    ctx->pc = 0x251D24u;
label_251d24:
    // 0x251d24: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x251d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x251d28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251D28u;
    {
        const bool branch_taken_0x251d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D28u;
            // 0x251d2c: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d28) {
            ctx->pc = 0x251D54u;
            goto label_251d54;
        }
    }
    ctx->pc = 0x251D30u;
label_251d30:
    // 0x251d30: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x251d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251D34u;
    {
        const bool branch_taken_0x251d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D34u;
            // 0x251d38: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d34) {
            ctx->pc = 0x251D50u;
            goto label_251d50;
        }
    }
    ctx->pc = 0x251D3Cu;
label_251d3c:
    // 0x251d3c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x251d40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251D40u;
    {
        const bool branch_taken_0x251d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D40u;
            // 0x251d44: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d40) {
            ctx->pc = 0x251D50u;
            goto label_251d50;
        }
    }
    ctx->pc = 0x251D48u;
label_251d48:
    // 0x251d48: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x251d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x251d4c: 0x289c3  sra         $s1, $v0, 7
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 7));
label_251d50:
    // 0x251d50: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x251d50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_251d54:
    // 0x251d54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x251d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251d58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x251D58u;
    {
        const bool branch_taken_0x251d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D58u;
            // 0x251d5c: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d58) {
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251D60u;
label_251d60:
    // 0x251d60: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x251d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x251d64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x251d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d68: 0xc094942  jal         func_252508
    ctx->pc = 0x251D68u;
    SET_GPR_U32(ctx, 31, 0x251D70u);
    ctx->pc = 0x251D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251D68u;
            // 0x251d6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252508u;
    if (runtime->hasFunction(0x252508u)) {
        auto targetFn = runtime->lookupFunction(0x252508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D70u; }
        if (ctx->pc != 0x251D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252508_0x252508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D70u; }
        if (ctx->pc != 0x251D70u) { return; }
    }
    ctx->pc = 0x251D70u;
label_251d70:
    // 0x251d70: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x251D70u;
    {
        const bool branch_taken_0x251d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D70u;
            // 0x251d74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d70) {
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251D78u;
label_251d78:
    // 0x251d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d7c: 0xc08a922  jal         func_22A488
    ctx->pc = 0x251D7Cu;
    SET_GPR_U32(ctx, 31, 0x251D84u);
    ctx->pc = 0x251D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251D7Cu;
            // 0x251d80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D84u; }
        if (ctx->pc != 0x251D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D84u; }
        if (ctx->pc != 0x251D84u) { return; }
    }
    ctx->pc = 0x251D84u;
label_251d84:
    // 0x251d84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x251D88u;
    {
        const bool branch_taken_0x251d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D88u;
            // 0x251d8c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d88) {
            ctx->pc = 0x251D98u;
            goto label_251d98;
        }
    }
    ctx->pc = 0x251D90u;
label_251d90:
    // 0x251d90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251D90u;
    {
        const bool branch_taken_0x251d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D90u;
            // 0x251d94: 0x24150069  addiu       $s5, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d90) {
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251D98u;
label_251d98:
    // 0x251d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x251d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x251d9c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251da0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x251da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x251da4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x251da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x251da8: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x251da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x251dac: 0x30710002  andi        $s1, $v1, 0x2
    ctx->pc = 0x251dacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x251db0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251DB0u;
    {
        const bool branch_taken_0x251db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DB0u;
            // 0x251db4: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251db0) {
            ctx->pc = 0x251DBCu;
            goto label_251dbc;
        }
    }
    ctx->pc = 0x251DB8u;
label_251db8:
    // 0x251db8: 0x2415006d  addiu       $s5, $zero, 0x6D
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_251dbc:
    // 0x251dbc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x251dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_251dc0:
    // 0x251dc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_251dc4:
    // 0x251dc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251dc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x251dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251dcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x251dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251dd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x251DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DDCu;
            // 0x251de0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251DE4u;
    // 0x251de4: 0x0  nop
    ctx->pc = 0x251de4u;
    // NOP
    ctx->pc = 0x251de8u;
}

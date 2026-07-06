#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282A80
// Address: 0x282a80 - 0x282cd0
void sub_00282A80_0x282a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282A80_0x282a80");
#endif

    switch (ctx->pc) {
        case 0x282bb8u: goto label_282bb8;
        case 0x282bccu: goto label_282bcc;
        case 0x282be0u: goto label_282be0;
        case 0x282bf4u: goto label_282bf4;
        case 0x282c08u: goto label_282c08;
        case 0x282c74u: goto label_282c74;
        case 0x282c88u: goto label_282c88;
        case 0x282ca8u: goto label_282ca8;
        default: break;
    }

    ctx->pc = 0x282a80u;

    // 0x282a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282a84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x282a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282a8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282a94: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A94u;
    {
        const bool branch_taken_0x282a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x282A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A94u;
            // 0x282a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a94) {
            ctx->pc = 0x282AA4u;
            goto label_282aa4;
        }
    }
    ctx->pc = 0x282A9Cu;
    // 0x282a9c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x282A9Cu;
    {
        const bool branch_taken_0x282a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A9Cu;
            // 0x282aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a9c) {
            ctx->pc = 0x282CB8u;
            goto label_282cb8;
        }
    }
    ctx->pc = 0x282AA4u;
label_282aa4:
    // 0x282aa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282aa8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x282aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x282aac: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x282AACu;
    {
        const bool branch_taken_0x282aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AACu;
            // 0x282ab0: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aac) {
            ctx->pc = 0x282C10u;
            goto label_282c10;
        }
    }
    ctx->pc = 0x282AB4u;
    // 0x282ab4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x282AB4u;
    {
        const bool branch_taken_0x282ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AB4u;
            // 0x282ab8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ab4) {
            ctx->pc = 0x282B1Cu;
            goto label_282b1c;
        }
    }
    ctx->pc = 0x282ABCu;
    // 0x282abc: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x282ABCu;
    {
        const bool branch_taken_0x282abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282ABCu;
            // 0x282ac0: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282abc) {
            ctx->pc = 0x282B9Cu;
            goto label_282b9c;
        }
    }
    ctx->pc = 0x282AC4u;
    // 0x282ac4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x282AC4u;
    {
        const bool branch_taken_0x282ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AC4u;
            // 0x282ac8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ac4) {
            ctx->pc = 0x282AECu;
            goto label_282aec;
        }
    }
    ctx->pc = 0x282ACCu;
    // 0x282acc: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x282ACCu;
    {
        const bool branch_taken_0x282acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282ACCu;
            // 0x282ad0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282acc) {
            ctx->pc = 0x282BD4u;
            goto label_282bd4;
        }
    }
    ctx->pc = 0x282AD4u;
    // 0x282ad4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x282AD4u;
    {
        const bool branch_taken_0x282ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AD4u;
            // 0x282ad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ad4) {
            ctx->pc = 0x282BE8u;
            goto label_282be8;
        }
    }
    ctx->pc = 0x282ADCu;
    // 0x282adc: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x282ADCu;
    {
        const bool branch_taken_0x282adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282ADCu;
            // 0x282ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282adc) {
            ctx->pc = 0x282BC0u;
            goto label_282bc0;
        }
    }
    ctx->pc = 0x282AE4u;
    // 0x282ae4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x282AE4u;
    {
        const bool branch_taken_0x282ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AE4u;
            // 0x282ae8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ae4) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282AECu;
label_282aec:
    // 0x282aec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282af0: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x282AF0u;
    {
        const bool branch_taken_0x282af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AF0u;
            // 0x282af4: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282af0) {
            ctx->pc = 0x282BFCu;
            goto label_282bfc;
        }
    }
    ctx->pc = 0x282AF8u;
    // 0x282af8: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x282AF8u;
    {
        const bool branch_taken_0x282af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AF8u;
            // 0x282afc: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282af8) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282B00u;
    // 0x282b00: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x282B00u;
    {
        const bool branch_taken_0x282b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B00u;
            // 0x282b04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b00) {
            ctx->pc = 0x282CB8u;
            goto label_282cb8;
        }
    }
    ctx->pc = 0x282B08u;
    // 0x282b08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282b0c: 0x14800060  bnez        $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x282B0Cu;
    {
        const bool branch_taken_0x282b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B0Cu;
            // 0x282b10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b0c) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282B14u;
    // 0x282b14: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x282B14u;
    {
        const bool branch_taken_0x282b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b14) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282B1Cu;
label_282b1c:
    // 0x282b1c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x282b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x282b20: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x282B20u;
    {
        const bool branch_taken_0x282b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B20u;
            // 0x282b24: 0x2862001c  slti        $v0, $v1, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b20) {
            ctx->pc = 0x282C40u;
            goto label_282c40;
        }
    }
    ctx->pc = 0x282B28u;
    // 0x282b28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x282B28u;
    {
        const bool branch_taken_0x282b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B28u;
            // 0x282b2c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b28) {
            ctx->pc = 0x282B64u;
            goto label_282b64;
        }
    }
    ctx->pc = 0x282B30u;
    // 0x282b30: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x282B30u;
    {
        const bool branch_taken_0x282b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B30u;
            // 0x282b34: 0x28620017  slti        $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b30) {
            ctx->pc = 0x282C30u;
            goto label_282c30;
        }
    }
    ctx->pc = 0x282B38u;
    // 0x282b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282B38u;
    {
        const bool branch_taken_0x282b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B38u;
            // 0x282b3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b38) {
            ctx->pc = 0x282B50u;
            goto label_282b50;
        }
    }
    ctx->pc = 0x282B40u;
    // 0x282b40: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x282B40u;
    {
        const bool branch_taken_0x282b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B40u;
            // 0x282b44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b40) {
            ctx->pc = 0x282C20u;
            goto label_282c20;
        }
    }
    ctx->pc = 0x282B48u;
    // 0x282b48: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x282B48u;
    {
        const bool branch_taken_0x282b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B48u;
            // 0x282b4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b48) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282B50u;
label_282b50:
    // 0x282b50: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x282b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x282b54: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x282B54u;
    {
        const bool branch_taken_0x282b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B54u;
            // 0x282b58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b54) {
            ctx->pc = 0x282C7Cu;
            goto label_282c7c;
        }
    }
    ctx->pc = 0x282B5Cu;
    // 0x282b5c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x282B5Cu;
    {
        const bool branch_taken_0x282b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B5Cu;
            // 0x282b60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b5c) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282B64u;
label_282b64:
    // 0x282b64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x282b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x282b68: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x282B68u;
    {
        const bool branch_taken_0x282b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B68u;
            // 0x282b6c: 0x2862001f  slti        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b68) {
            ctx->pc = 0x282C60u;
            goto label_282c60;
        }
    }
    ctx->pc = 0x282B70u;
    // 0x282b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282B70u;
    {
        const bool branch_taken_0x282b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B70u;
            // 0x282b74: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b70) {
            ctx->pc = 0x282B88u;
            goto label_282b88;
        }
    }
    ctx->pc = 0x282B78u;
    // 0x282b78: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x282B78u;
    {
        const bool branch_taken_0x282b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B78u;
            // 0x282b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b78) {
            ctx->pc = 0x282C50u;
            goto label_282c50;
        }
    }
    ctx->pc = 0x282B80u;
    // 0x282b80: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x282B80u;
    {
        const bool branch_taken_0x282b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B80u;
            // 0x282b84: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b80) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282B88u;
label_282b88:
    // 0x282b88: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x282b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x282b8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x282B8Cu;
    {
        const bool branch_taken_0x282b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B8Cu;
            // 0x282b90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b8c) {
            ctx->pc = 0x282BC0u;
            goto label_282bc0;
        }
    }
    ctx->pc = 0x282B94u;
    // 0x282b94: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x282B94u;
    {
        const bool branch_taken_0x282b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B94u;
            // 0x282b98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b94) {
            ctx->pc = 0x282CBCu;
            goto label_282cbc;
        }
    }
    ctx->pc = 0x282B9Cu;
label_282b9c:
    // 0x282b9c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282B9Cu;
    {
        const bool branch_taken_0x282b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B9Cu;
            // 0x282ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b9c) {
            ctx->pc = 0x282BB8u;
            goto label_282bb8;
        }
    }
    ctx->pc = 0x282BA4u;
    // 0x282ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x282bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x282bb0: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x282BB0u;
    SET_GPR_U32(ctx, 31, 0x282BB8u);
    ctx->pc = 0x282BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BB0u;
            // 0x282bb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BB8u; }
        if (ctx->pc != 0x282BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BB8u; }
        if (ctx->pc != 0x282BB8u) { return; }
    }
    ctx->pc = 0x282BB8u;
label_282bb8:
    // 0x282bb8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x282BB8u;
    {
        const bool branch_taken_0x282bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282BB8u;
            // 0x282bbc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bb8) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282BC0u;
label_282bc0:
    // 0x282bc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282bc4: 0xc0a004a  jal         func_280128
    ctx->pc = 0x282BC4u;
    SET_GPR_U32(ctx, 31, 0x282BCCu);
    ctx->pc = 0x282BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BC4u;
            // 0x282bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BCCu; }
        if (ctx->pc != 0x282BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BCCu; }
        if (ctx->pc != 0x282BCCu) { return; }
    }
    ctx->pc = 0x282BCCu;
label_282bcc:
    // 0x282bcc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x282BCCu;
    {
        const bool branch_taken_0x282bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282BCCu;
            // 0x282bd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bcc) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282BD4u;
label_282bd4:
    // 0x282bd4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282bd8: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x282BD8u;
    SET_GPR_U32(ctx, 31, 0x282BE0u);
    ctx->pc = 0x282BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BD8u;
            // 0x282bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BE0u; }
        if (ctx->pc != 0x282BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BE0u; }
        if (ctx->pc != 0x282BE0u) { return; }
    }
    ctx->pc = 0x282BE0u;
label_282be0:
    // 0x282be0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x282BE0u;
    {
        const bool branch_taken_0x282be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282BE0u;
            // 0x282be4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282be0) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282BE8u;
label_282be8:
    // 0x282be8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282bec: 0xc0a099e  jal         func_282678
    ctx->pc = 0x282BECu;
    SET_GPR_U32(ctx, 31, 0x282BF4u);
    ctx->pc = 0x282BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BECu;
            // 0x282bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (runtime->hasFunction(0x282678u)) {
        auto targetFn = runtime->lookupFunction(0x282678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BF4u; }
        if (ctx->pc != 0x282BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282678_0x282678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BF4u; }
        if (ctx->pc != 0x282BF4u) { return; }
    }
    ctx->pc = 0x282BF4u;
label_282bf4:
    // 0x282bf4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x282BF4u;
    {
        const bool branch_taken_0x282bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282BF4u;
            // 0x282bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bf4) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282BFCu;
label_282bfc:
    // 0x282bfc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c00: 0xc0a016a  jal         func_2805A8
    ctx->pc = 0x282C00u;
    SET_GPR_U32(ctx, 31, 0x282C08u);
    ctx->pc = 0x282C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C00u;
            // 0x282c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (runtime->hasFunction(0x2805A8u)) {
        auto targetFn = runtime->lookupFunction(0x2805A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C08u; }
        if (ctx->pc != 0x282C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002805A8_0x2805a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C08u; }
        if (ctx->pc != 0x282C08u) { return; }
    }
    ctx->pc = 0x282C08u;
label_282c08:
    // 0x282c08: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x282C08u;
    {
        const bool branch_taken_0x282c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C08u;
            // 0x282c0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c08) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282C10u;
label_282c10:
    // 0x282c10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x282C18u;
    {
        const bool branch_taken_0x282c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C18u;
            // 0x282c1c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c18) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C20u;
label_282c20:
    // 0x282c20: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x282C28u;
    {
        const bool branch_taken_0x282c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C28u;
            // 0x282c2c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c28) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C30u;
label_282c30:
    // 0x282c30: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282C38u;
    {
        const bool branch_taken_0x282c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C38u;
            // 0x282c3c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c38) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C40u;
label_282c40:
    // 0x282c40: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282C48u;
    {
        const bool branch_taken_0x282c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C48u;
            // 0x282c4c: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c48) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C50u;
label_282c50:
    // 0x282c50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282C58u;
    {
        const bool branch_taken_0x282c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C58u;
            // 0x282c5c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c58) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C60u;
label_282c60:
    // 0x282c60: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c68: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_282c6c:
    // 0x282c6c: 0xc09fdc0  jal         func_27F700
    ctx->pc = 0x282C6Cu;
    SET_GPR_U32(ctx, 31, 0x282C74u);
    ctx->pc = 0x282C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C6Cu;
            // 0x282c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F700u;
    if (runtime->hasFunction(0x27F700u)) {
        auto targetFn = runtime->lookupFunction(0x27F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C74u; }
        if (ctx->pc != 0x282C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F700_0x27f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C74u; }
        if (ctx->pc != 0x282C74u) { return; }
    }
    ctx->pc = 0x282C74u;
label_282c74:
    // 0x282c74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282C74u;
    {
        const bool branch_taken_0x282c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C74u;
            // 0x282c78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c74) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282C7Cu;
label_282c7c:
    // 0x282c7c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x282c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282c80: 0xc0a045a  jal         func_281168
    ctx->pc = 0x282C80u;
    SET_GPR_U32(ctx, 31, 0x282C88u);
    ctx->pc = 0x282C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C80u;
            // 0x282c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (runtime->hasFunction(0x281168u)) {
        auto targetFn = runtime->lookupFunction(0x281168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C88u; }
        if (ctx->pc != 0x282C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281168_0x281168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C88u; }
        if (ctx->pc != 0x282C88u) { return; }
    }
    ctx->pc = 0x282C88u;
label_282c88:
    // 0x282c88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x282C88u;
    {
        const bool branch_taken_0x282c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C88u;
            // 0x282c8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c88) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282C90u;
label_282c90:
    // 0x282c90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282C90u;
    {
        const bool branch_taken_0x282c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C90u;
            // 0x282c94: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c90) {
            ctx->pc = 0x282CB4u;
            goto label_282cb4;
        }
    }
    ctx->pc = 0x282C98u;
    // 0x282c98: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x282c9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x282c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ca0: 0xc049c48  jal         func_127120
    ctx->pc = 0x282CA0u;
    SET_GPR_U32(ctx, 31, 0x282CA8u);
    ctx->pc = 0x282CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282CA0u;
            // 0x282ca4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CA8u; }
        if (ctx->pc != 0x282CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CA8u; }
        if (ctx->pc != 0x282CA8u) { return; }
    }
    ctx->pc = 0x282CA8u;
label_282ca8:
    // 0x282ca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x282ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282cac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x282cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x282cb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x282cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_282cb4:
    // 0x282cb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x282cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282cb8:
    // 0x282cb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_282cbc:
    // 0x282cbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x282cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x282CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CC4u;
            // 0x282cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282CCCu;
    // 0x282ccc: 0x0  nop
    ctx->pc = 0x282cccu;
    // NOP
    ctx->pc = 0x282cd0u;
}

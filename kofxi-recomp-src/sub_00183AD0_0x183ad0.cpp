#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183AD0
// Address: 0x183ad0 - 0x183c00
void sub_00183AD0_0x183ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183AD0_0x183ad0");
#endif

    ctx->pc = 0x183ad0u;

    // 0x183ad0: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x183ad0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x183ad4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x183ad8: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x183AD8u;
    {
        const bool branch_taken_0x183ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183ad8) {
            ctx->pc = 0x183ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183AD8u;
            // 0x183adc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183AE0u;
    // 0x183ae0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x183ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x183ae4: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x183AE4u;
    {
        const bool branch_taken_0x183ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183ae4) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183AECu;
    // 0x183aec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x183aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x183af0: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x183AF0u;
    {
        const bool branch_taken_0x183af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183af0) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183AF8u;
    // 0x183af8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x183af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x183afc: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x183AFCu;
    {
        const bool branch_taken_0x183afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183afc) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B04u;
    // 0x183b04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x183b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183b08: 0x1064004a  beq         $v1, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x183B08u;
    {
        const bool branch_taken_0x183b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b08) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B10u;
    // 0x183b10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x183b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183b14: 0x10640047  beq         $v1, $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x183B14u;
    {
        const bool branch_taken_0x183b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b14) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B1Cu;
    // 0x183b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x183b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183b20: 0x10640044  beq         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x183B20u;
    {
        const bool branch_taken_0x183b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b20) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B28u;
    // 0x183b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x183b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183b2c: 0x10640041  beq         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x183B2Cu;
    {
        const bool branch_taken_0x183b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b2c) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B34u;
    // 0x183b34: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x183B34u;
    {
        const bool branch_taken_0x183b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b34) {
            ctx->pc = 0x183C34u;
            return;
        }
    }
    ctx->pc = 0x183B3Cu;
    // 0x183b3c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x183b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x183b40: 0x5064003d  beql        $v1, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x183B40u;
    {
        const bool branch_taken_0x183b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b40) {
            ctx->pc = 0x183B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183B40u;
            // 0x183b44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183B48u;
    // 0x183b48: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x183b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x183b4c: 0x10640036  beq         $v1, $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x183B4Cu;
    {
        const bool branch_taken_0x183b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b4c) {
            ctx->pc = 0x183C28u;
            return;
        }
    }
    ctx->pc = 0x183B54u;
    // 0x183b54: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x183b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x183b58: 0x10640033  beq         $v1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x183B58u;
    {
        const bool branch_taken_0x183b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b58) {
            ctx->pc = 0x183C28u;
            return;
        }
    }
    ctx->pc = 0x183B60u;
    // 0x183b60: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x183b64: 0x10640030  beq         $v1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x183B64u;
    {
        const bool branch_taken_0x183b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b64) {
            ctx->pc = 0x183C28u;
            return;
        }
    }
    ctx->pc = 0x183B6Cu;
    // 0x183b6c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x183b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x183b70: 0x50640031  beql        $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x183B70u;
    {
        const bool branch_taken_0x183b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b70) {
            ctx->pc = 0x183B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183B70u;
            // 0x183b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183B78u;
    // 0x183b78: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x183b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x183b7c: 0x10640027  beq         $v1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x183B7Cu;
    {
        const bool branch_taken_0x183b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b7c) {
            ctx->pc = 0x183C1Cu;
            return;
        }
    }
    ctx->pc = 0x183B84u;
    // 0x183b84: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x183b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x183b88: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x183B88u;
    {
        const bool branch_taken_0x183b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b88) {
            ctx->pc = 0x183C1Cu;
            return;
        }
    }
    ctx->pc = 0x183B90u;
    // 0x183b90: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x183b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x183b94: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x183B94u;
    {
        const bool branch_taken_0x183b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183b94) {
            ctx->pc = 0x183C1Cu;
            return;
        }
    }
    ctx->pc = 0x183B9Cu;
    // 0x183b9c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x183b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x183ba0: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x183BA0u;
    {
        const bool branch_taken_0x183ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183ba0) {
            ctx->pc = 0x183BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183BA0u;
            // 0x183ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183BA8u;
    // 0x183ba8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x183ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x183bac: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x183BACu;
    {
        const bool branch_taken_0x183bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bac) {
            ctx->pc = 0x183C10u;
            return;
        }
    }
    ctx->pc = 0x183BB4u;
    // 0x183bb4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x183bb8: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183BB8u;
    {
        const bool branch_taken_0x183bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bb8) {
            ctx->pc = 0x183C10u;
            return;
        }
    }
    ctx->pc = 0x183BC0u;
    // 0x183bc0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x183bc4: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x183BC4u;
    {
        const bool branch_taken_0x183bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bc4) {
            ctx->pc = 0x183C10u;
            return;
        }
    }
    ctx->pc = 0x183BCCu;
    // 0x183bcc: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x183bd0: 0x50640019  beql        $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x183BD0u;
    {
        const bool branch_taken_0x183bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bd0) {
            ctx->pc = 0x183BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183BD0u;
            // 0x183bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183BD8u;
    // 0x183bd8: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x183bdc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183BDCu;
    {
        const bool branch_taken_0x183bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bdc) {
            ctx->pc = 0x183C04u;
            return;
        }
    }
    ctx->pc = 0x183BE4u;
    // 0x183be4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x183be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x183be8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183BE8u;
    {
        const bool branch_taken_0x183be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183be8) {
            ctx->pc = 0x183C04u;
            return;
        }
    }
    ctx->pc = 0x183BF0u;
    // 0x183bf0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x183bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x183bf4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183BF4u;
    {
        const bool branch_taken_0x183bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183bf4) {
            ctx->pc = 0x183C04u;
            return;
        }
    }
    ctx->pc = 0x183BFCu;
    // 0x183bfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x183BFCu;
    {
        const bool branch_taken_0x183bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bfc) {
            ctx->pc = 0x183C38u;
            return;
        }
    }
    ctx->pc = 0x183C04u;
    ctx->pc = 0x183c00u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240BA0
// Address: 0x240ba0 - 0x240cb8
void sub_00240BA0_0x240ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240BA0_0x240ba0");
#endif

    switch (ctx->pc) {
        case 0x240ca4u: goto label_240ca4;
        default: break;
    }

    ctx->pc = 0x240ba0u;

    // 0x240ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240ba4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x240ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x240ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240bac: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x240bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x240bb0: 0x3402c023  ori         $v0, $zero, 0xC023
    ctx->pc = 0x240bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
    // 0x240bb4: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x240BB4u;
    {
        const bool branch_taken_0x240bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BB4u;
            // 0x240bb8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bb4) {
            ctx->pc = 0x240C30u;
            goto label_240c30;
        }
    }
    ctx->pc = 0x240BBCu;
    // 0x240bbc: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x240bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
    // 0x240bc0: 0x14820032  bne         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x240BC0u;
    {
        const bool branch_taken_0x240bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x240BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BC0u;
            // 0x240bc4: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bc0) {
            ctx->pc = 0x240C8Cu;
            goto label_240c8c;
        }
    }
    ctx->pc = 0x240BC8u;
    // 0x240bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240bcc: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x240BCCu;
    {
        const bool branch_taken_0x240bcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BCCu;
            // 0x240bd0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bcc) {
            ctx->pc = 0x240C18u;
            goto label_240c18;
        }
    }
    ctx->pc = 0x240BD4u;
    // 0x240bd4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x240bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x240bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BD8u;
            // 0x240bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x240BF0u;
            goto label_240bf0;
        }
    }
    ctx->pc = 0x240BE0u;
    // 0x240be0: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240BE0u;
    {
        const bool branch_taken_0x240be0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BE0u;
            // 0x240be4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240be0) {
            ctx->pc = 0x240C10u;
            goto label_240c10;
        }
    }
    ctx->pc = 0x240BE8u;
    // 0x240be8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x240BE8u;
    {
        const bool branch_taken_0x240be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BE8u;
            // 0x240bec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240be8) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240BF0u;
label_240bf0:
    // 0x240bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240bf4: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240BF4u;
    {
        const bool branch_taken_0x240bf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BF4u;
            // 0x240bf8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bf4) {
            ctx->pc = 0x240C20u;
            goto label_240c20;
        }
    }
    ctx->pc = 0x240BFCu;
    // 0x240bfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x240bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240c00: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x240C00u;
    {
        const bool branch_taken_0x240c00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C00u;
            // 0x240c04: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c00) {
            ctx->pc = 0x240C28u;
            goto label_240c28;
        }
    }
    ctx->pc = 0x240C08u;
    // 0x240c08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x240C08u;
    {
        const bool branch_taken_0x240c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C08u;
            // 0x240c0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c08) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240C10u;
label_240c10:
    // 0x240c10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x240C10u;
    {
        const bool branch_taken_0x240c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C10u;
            // 0x240c14: 0x24426270  addiu       $v0, $v0, 0x6270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c10) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C18u;
label_240c18:
    // 0x240c18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x240C18u;
    {
        const bool branch_taken_0x240c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C18u;
            // 0x240c1c: 0x24426280  addiu       $v0, $v0, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c18) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C20u;
label_240c20:
    // 0x240c20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x240C20u;
    {
        const bool branch_taken_0x240c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C20u;
            // 0x240c24: 0x24426290  addiu       $v0, $v0, 0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c20) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C28u;
label_240c28:
    // 0x240c28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x240C28u;
    {
        const bool branch_taken_0x240c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C28u;
            // 0x240c2c: 0x24426298  addiu       $v0, $v0, 0x6298 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c28) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C30u;
label_240c30:
    // 0x240c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240c34:
    // 0x240c34: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x240C34u;
    {
        const bool branch_taken_0x240c34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C34u;
            // 0x240c38: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c34) {
            ctx->pc = 0x240C78u;
            goto label_240c78;
        }
    }
    ctx->pc = 0x240C3Cu;
    // 0x240c3c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x240c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x240c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C40u;
    {
        const bool branch_taken_0x240c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C40u;
            // 0x240c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c40) {
            ctx->pc = 0x240C58u;
            goto label_240c58;
        }
    }
    ctx->pc = 0x240C48u;
    // 0x240c48: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240C48u;
    {
        const bool branch_taken_0x240c48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C48u;
            // 0x240c4c: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c48) {
            ctx->pc = 0x240C6Cu;
            goto label_240c6c;
        }
    }
    ctx->pc = 0x240C50u;
    // 0x240c50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240C50u;
    {
        const bool branch_taken_0x240c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C50u;
            // 0x240c54: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c50) {
            ctx->pc = 0x240C90u;
            goto label_240c90;
        }
    }
    ctx->pc = 0x240C58u;
label_240c58:
    // 0x240c58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240c5c: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240C5Cu;
    {
        const bool branch_taken_0x240c5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C5Cu;
            // 0x240c60: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c5c) {
            ctx->pc = 0x240C80u;
            goto label_240c80;
        }
    }
    ctx->pc = 0x240C64u;
    // 0x240c64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x240C64u;
    {
        const bool branch_taken_0x240c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C64u;
            // 0x240c68: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c64) {
            ctx->pc = 0x240C90u;
            goto label_240c90;
        }
    }
    ctx->pc = 0x240C6Cu;
label_240c6c:
    // 0x240c6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240c70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x240C70u;
    {
        const bool branch_taken_0x240c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C70u;
            // 0x240c74: 0x244262a0  addiu       $v0, $v0, 0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c70) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C78u;
label_240c78:
    // 0x240c78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x240C78u;
    {
        const bool branch_taken_0x240c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C78u;
            // 0x240c7c: 0x244262a8  addiu       $v0, $v0, 0x62A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c78) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C80u;
label_240c80:
    // 0x240c80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240c84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x240C84u;
    {
        const bool branch_taken_0x240c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C84u;
            // 0x240c88: 0x244262b0  addiu       $v0, $v0, 0x62B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c84) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C8Cu;
label_240c8c:
    // 0x240c8c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_240c90:
    // 0x240c90: 0x2610ad70  addiu       $s0, $s0, -0x5290
    ctx->pc = 0x240c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946160));
    // 0x240c94: 0x24c66230  addiu       $a2, $a2, 0x6230
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25136));
    // 0x240c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c9c: 0xc043e24  jal         func_10F890
    ctx->pc = 0x240C9Cu;
    SET_GPR_U32(ctx, 31, 0x240CA4u);
    ctx->pc = 0x240CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C9Cu;
            // 0x240ca0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA4u; }
        if (ctx->pc != 0x240CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA4u; }
        if (ctx->pc != 0x240CA4u) { return; }
    }
    ctx->pc = 0x240CA4u;
label_240ca4:
    // 0x240ca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240ca8:
    // 0x240ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x240CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CB0u;
            // 0x240cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240CB8u;
    ctx->pc = 0x240cb8u;
}

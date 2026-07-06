#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6CF8
// Address: 0x1a6cf8 - 0x1a6da0
void sub_001A6CF8_0x1a6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6CF8_0x1a6cf8");
#endif

    switch (ctx->pc) {
        case 0x1a6d20u: goto label_1a6d20;
        case 0x1a6d3cu: goto label_1a6d3c;
        default: break;
    }

    ctx->pc = 0x1a6cf8u;

    // 0x1a6cf8: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a6cfc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6CFCu;
    {
        const bool branch_taken_0x1a6cfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A6D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CFCu;
            // 0x1a6d00: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cfc) {
            ctx->pc = 0x1A6D14u;
            goto label_1a6d14;
        }
    }
    ctx->pc = 0x1A6D04u;
    // 0x1a6d04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a6d08: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a6d0c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6D0Cu;
    {
        const bool branch_taken_0x1a6d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D0Cu;
            // 0x1a6d10: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d0c) {
            ctx->pc = 0x1A6D20u;
            goto label_1a6d20;
        }
    }
    ctx->pc = 0x1A6D14u;
label_1a6d14:
    // 0x1a6d14: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D18u;
            // 0x1a6d1c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6D20u;
label_1a6d20:
    // 0x1a6d20: 0x2465e118  addiu       $a1, $v1, -0x1EE8
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959384));
    // 0x1a6d24: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1a6d28: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6D28u;
    {
        const bool branch_taken_0x1a6d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a6d28) {
            ctx->pc = 0x1A6D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D28u;
            // 0x1a6d2c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6D3Cu;
            goto label_1a6d3c;
        }
    }
    ctx->pc = 0x1A6D30u;
    // 0x1a6d30: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D34u;
            // 0x1a6d38: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6D3Cu;
label_1a6d3c:
    // 0x1a6d3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a6d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6D40u;
    {
        const bool branch_taken_0x1a6d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d40) {
            ctx->pc = 0x1A6D74u;
            goto label_1a6d74;
        }
    }
    ctx->pc = 0x1A6D48u;
    // 0x1a6d48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D4Cu;
    {
        const bool branch_taken_0x1a6d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D4Cu;
            // 0x1a6d50: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d4c) {
            ctx->pc = 0x1A6D5Cu;
            goto label_1a6d5c;
        }
    }
    ctx->pc = 0x1A6D54u;
    // 0x1a6d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6D54u;
    {
        const bool branch_taken_0x1a6d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D54u;
            // 0x1a6d58: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d54) {
            ctx->pc = 0x1A6D60u;
            goto label_1a6d60;
        }
    }
    ctx->pc = 0x1A6D5Cu;
label_1a6d5c:
    // 0x1a6d5c: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x1a6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_1a6d60:
    // 0x1a6d60: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D60u;
            // 0x1a6d64: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6D74u;
            goto label_1a6d74;
        }
    }
    ctx->pc = 0x1A6D68u;
    // 0x1a6d68: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6d6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a6d70: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1a6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1a6d74:
    // 0x1a6d74: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1a6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1a6d78: 0x2463e118  addiu       $v1, $v1, -0x1EE8
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959384));
    // 0x1a6d7c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1a6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1a6d80: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a6d84: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a6d88: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1a6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1a6d8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a6d90: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1a6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x1a6d94: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1a6d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D98u;
            // 0x1a6d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6DA0u;
    ctx->pc = 0x1a6da0u;
}

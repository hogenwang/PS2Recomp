#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9098
// Address: 0x2d9098 - 0x2d9150
void sub_002D9098_0x2d9098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9098_0x2d9098");
#endif

    switch (ctx->pc) {
        case 0x2d90d8u: goto label_2d90d8;
        case 0x2d9140u: goto label_2d9140;
        default: break;
    }

    ctx->pc = 0x2d9098u;

    // 0x2d9098: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D9098u;
    {
        const bool branch_taken_0x2d9098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9098) {
            ctx->pc = 0x2D909Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9098u;
            // 0x2d909c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9144u;
            goto label_2d9144;
        }
    }
    ctx->pc = 0x2D90A0u;
    // 0x2d90a0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2d90a4: 0x24638610  addiu       $v1, $v1, -0x79F0
    ctx->pc = 0x2d90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936080));
    // 0x2d90a8: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d90ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d90b0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D90B0u;
    {
        const bool branch_taken_0x2d90b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D90B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90B0u;
            // 0x2d90b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90b0) {
            ctx->pc = 0x2D9104u;
            goto label_2d9104;
        }
    }
    ctx->pc = 0x2D90B8u;
    // 0x2d90b8: 0x246b0004  addiu       $t3, $v1, 0x4
    ctx->pc = 0x2d90b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d90bc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2d90bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90c0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d90c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2d90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d90c8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D90C8u;
    {
        const bool branch_taken_0x2d90c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d90c8) {
            ctx->pc = 0x2D90CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90C8u;
            // 0x2d90cc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D90D8u;
            goto label_2d90d8;
        }
    }
    ctx->pc = 0x2D90D0u;
    // 0x2d90d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D90D0u;
    {
        const bool branch_taken_0x2d90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90D0u;
            // 0x2d90d4: 0x8c6d0008  lw          $t5, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90d0) {
            ctx->pc = 0x2D9104u;
            goto label_2d9104;
        }
    }
    ctx->pc = 0x2D90D8u;
label_2d90d8:
    // 0x2d90d8: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x2d90d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2d90dc: 0x14c102a  slt         $v0, $t2, $t4
    ctx->pc = 0x2d90dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2d90e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D90E0u;
    {
        const bool branch_taken_0x2d90e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90E0u;
            // 0x2d90e4: 0x1694021  addu        $t0, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90e0) {
            ctx->pc = 0x2D9104u;
            goto label_2d9104;
        }
    }
    ctx->pc = 0x2D90E8u;
    // 0x2d90e8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2d90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d90ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2d90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d90f0: 0x0  nop
    ctx->pc = 0x2d90f0u;
    // NOP
    // 0x2d90f4: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D90F4u;
    {
        const bool branch_taken_0x2d90f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d90f4) {
            ctx->pc = 0x2D90F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90F4u;
            // 0x2d90f8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D90D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d90d8;
        }
    }
    ctx->pc = 0x2D90FCu;
    // 0x2d90fc: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2d90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d9100: 0x8c4d0008  lw          $t5, 0x8($v0)
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d9104:
    // 0x2d9104: 0x5a0000e  bltz        $t5, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9104u;
    {
        const bool branch_taken_0x2d9104 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x2D9108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9104u;
            // 0x2d9108: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9104) {
            ctx->pc = 0x2D9140u;
            goto label_2d9140;
        }
    }
    ctx->pc = 0x2D910Cu;
    // 0x2d910c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d9110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d9114: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d9118: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x2d9118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d911c: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2d9120: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d9124: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2d9124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2d9128: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d9128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d912c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d9130: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d9130u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d9134: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9134u;
            // 0x2d9138: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D913Cu;
    // 0x2d913c: 0x0  nop
    ctx->pc = 0x2d913cu;
    // NOP
label_2d9140:
    // 0x2d9140: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d9140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d9144:
    // 0x2d9144: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d9144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2d9148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D914Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9148u;
            // 0x2d914c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9150u;
    ctx->pc = 0x2d9150u;
}

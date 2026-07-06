#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198080
// Address: 0x198080 - 0x198140
void sub_00198080_0x198080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198080_0x198080");
#endif

    switch (ctx->pc) {
        case 0x1980bcu: goto label_1980bc;
        default: break;
    }

    ctx->pc = 0x198080u;

    // 0x198080: 0x308d00ff  andi        $t5, $a0, 0xFF
    ctx->pc = 0x198080u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x198084: 0x30aa00ff  andi        $t2, $a1, 0xFF
    ctx->pc = 0x198084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x198088: 0x14d082a  slt         $at, $t2, $t5
    ctx->pc = 0x198088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x19808c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x19808Cu;
    {
        const bool branch_taken_0x19808c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19808Cu;
            // 0x198090: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19808c) {
            ctx->pc = 0x198128u;
            goto label_198128;
        }
    }
    ctx->pc = 0x198094u;
    // 0x198094: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x198094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x198098: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x198098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x19809c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x19809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1980a0: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1980a4: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1980a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1980a8: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1980ac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1980acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1980b0: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x1980b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1980b4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1980b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980b8: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1980b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1980bc:
    // 0x1980bc: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x1980bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1980c0: 0x15280003  bne         $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980C0u;
    {
        const bool branch_taken_0x1980c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x1980c0) {
            ctx->pc = 0x1980D0u;
            goto label_1980d0;
        }
    }
    ctx->pc = 0x1980C8u;
    // 0x1980c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1980C8u;
    {
        const bool branch_taken_0x1980c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980C8u;
            // 0x1980cc: 0x100602d  daddu       $t4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980c8) {
            ctx->pc = 0x198118u;
            goto label_198118;
        }
    }
    ctx->pc = 0x1980D0u;
label_1980d0:
    // 0x1980d0: 0x15220003  bne         $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980D0u;
    {
        const bool branch_taken_0x1980d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1980d0) {
            ctx->pc = 0x1980E0u;
            goto label_1980e0;
        }
    }
    ctx->pc = 0x1980D8u;
    // 0x1980d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1980D8u;
    {
        const bool branch_taken_0x1980d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980d8) {
            ctx->pc = 0x19812Cu;
            goto label_19812c;
        }
    }
    ctx->pc = 0x1980E0u;
label_1980e0:
    // 0x1980e0: 0x15270003  bne         $t1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980E0u;
    {
        const bool branch_taken_0x1980e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        if (branch_taken_0x1980e0) {
            ctx->pc = 0x1980F0u;
            goto label_1980f0;
        }
    }
    ctx->pc = 0x1980E8u;
    // 0x1980e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1980E8u;
    {
        const bool branch_taken_0x1980e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980E8u;
            // 0x1980ec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980e8) {
            ctx->pc = 0x19812Cu;
            goto label_19812c;
        }
    }
    ctx->pc = 0x1980F0u;
label_1980f0:
    // 0x1980f0: 0x55260003  bnel        $t1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980F0u;
    {
        const bool branch_taken_0x1980f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x1980f0) {
            ctx->pc = 0x1980F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1980F0u;
            // 0x1980f4: 0xc2e3c  dsll32      $a1, $t4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198100u;
            goto label_198100;
        }
    }
    ctx->pc = 0x1980F8u;
    // 0x1980f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1980F8u;
    {
        const bool branch_taken_0x1980f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980F8u;
            // 0x1980fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980f8) {
            ctx->pc = 0x19812Cu;
            goto label_19812c;
        }
    }
    ctx->pc = 0x198100u;
label_198100:
    // 0x198100: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x198100u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x198104: 0x10a80004  beq         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198104u;
    {
        const bool branch_taken_0x198104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x198104) {
            ctx->pc = 0x198118u;
            goto label_198118;
        }
    }
    ctx->pc = 0x19810Cu;
    // 0x19810c: 0x11240002  beq         $t1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198118u;
            goto label_198118;
        }
    }
    ctx->pc = 0x198114u;
    // 0x198114: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x198114u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_198118:
    // 0x198118: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x198118u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x19811c: 0x14d082a  slt         $at, $t2, $t5
    ctx->pc = 0x19811cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x198120: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
    ctx->pc = 0x198120u;
    {
        const bool branch_taken_0x198120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198120u;
            // 0x198124: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198120) {
            ctx->pc = 0x1980BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1980bc;
        }
    }
    ctx->pc = 0x198128u;
label_198128:
    // 0x198128: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x198128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_19812c:
    // 0x19812c: 0x3e00008  jr          $ra
    ctx->pc = 0x19812Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198134u;
    // 0x198134: 0x0  nop
    ctx->pc = 0x198134u;
    // NOP
    // 0x198138: 0x0  nop
    ctx->pc = 0x198138u;
    // NOP
    // 0x19813c: 0x0  nop
    ctx->pc = 0x19813cu;
    // NOP
    ctx->pc = 0x198140u;
}

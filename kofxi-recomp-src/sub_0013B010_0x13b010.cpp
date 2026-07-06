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

// Function: sub_0013B010
// Address: 0x13b010 - 0x13b150
void sub_0013B010_0x13b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B010_0x13b010");
#endif

    switch (ctx->pc) {
        case 0x13b028u: goto label_13b028;
        case 0x13b054u: goto label_13b054;
        case 0x13b0a0u: goto label_13b0a0;
        case 0x13b0a8u: goto label_13b0a8;
        case 0x13b118u: goto label_13b118;
        default: break;
    }

    ctx->pc = 0x13b010u;

    // 0x13b010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b014: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x13b018: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13b018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b01c: 0x2529dc90  addiu       $t1, $t1, -0x2370
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958224));
    // 0x13b020: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x13b020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x13b024: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_13b028:
    // 0x13b028: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x13b028u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b02c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13b030: 0x81220001  lb          $v0, 0x1($t1)
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x13b034: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x13b034u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b038: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x13b038u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b03c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x13b040: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B040u;
    {
        const bool branch_taken_0x13b040 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x13B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B040u;
        // 0x13b044: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b040) {
            ctx->pc = 0x13B028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b028;
        }
    }
    ctx->pc = 0x13B048u;
    // 0x13b048: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b04c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B04Cu;
    {
        const bool branch_taken_0x13b04c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B04Cu;
        // 0x13b050: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b04c) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13B054u;
label_13b054:
    // 0x13b054: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x13b054u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13b05c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b060: 0x0  nop
    ctx->pc = 0x13b060u;
    // NOP
    // 0x13b064: 0x0  nop
    ctx->pc = 0x13b064u;
    // NOP
    // 0x13b068: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B068u;
    {
        const bool branch_taken_0x13b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b068) {
            ctx->pc = 0x13B054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b054;
        }
    }
    ctx->pc = 0x13B070u;
label_13b070:
    // 0x13b070: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x13b074: 0x90c79780  lbu         $a3, -0x6880($a2)
    ctx->pc = 0x13b074u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294940544)));
    // 0x13b078: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x13b078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13b07c: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B07Cu;
    {
        const bool branch_taken_0x13b07c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x13B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B07Cu;
        // 0x13b080: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b07c) {
            ctx->pc = 0x13B08Cu;
            goto label_13b08c;
        }
    }
    ctx->pc = 0x13B084u;
    // 0x13b084: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13B084u;
    {
        const bool branch_taken_0x13b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b084) {
            ctx->pc = 0x13B140u;
            goto label_13b140;
        }
    }
    ctx->pc = 0x13B08Cu;
label_13b08c:
    // 0x13b08c: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x13b08cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x13b090: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x13b090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13b094: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x13b094u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b098: 0x254adb50  addiu       $t2, $t2, -0x24B0
    ctx->pc = 0x13b098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957904));
    // 0x13b09c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b0a0:
    // 0x13b0a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13b0a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0a4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x13b0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_13b0a8:
    // 0x13b0a8: 0x91260150  lbu         $a2, 0x150($t1)
    ctx->pc = 0x13b0a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 336)));
    // 0x13b0ac: 0x14c80008  bne         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B0ACu;
    {
        const bool branch_taken_0x13b0ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x13B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0ACu;
        // 0x13b0b0: 0x91270151  lbu         $a3, 0x151($t1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 337)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0ac) {
            ctx->pc = 0x13B0D0u;
            goto label_13b0d0;
        }
    }
    ctx->pc = 0x13B0B4u;
    // 0x13b0b4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x13b0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x13b0b8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B0B8u;
    {
        const bool branch_taken_0x13b0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b0b8) {
            ctx->pc = 0x13B0D0u;
            goto label_13b0d0;
        }
    }
    ctx->pc = 0x13B0C0u;
    // 0x13b0c0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13b0c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x13b0c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B0C8u;
    {
        const bool branch_taken_0x13b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0C8u;
        // 0x13b0cc: 0xa0850030  sb          $a1, 0x30($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0c8) {
            ctx->pc = 0x13B0E8u;
            goto label_13b0e8;
        }
    }
    ctx->pc = 0x13B0D0u;
label_13b0d0:
    // 0x13b0d0: 0x14c80005  bne         $a2, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B0D0u;
    {
        const bool branch_taken_0x13b0d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x13b0d0) {
            ctx->pc = 0x13B0E8u;
            goto label_13b0e8;
        }
    }
    ctx->pc = 0x13B0D8u;
    // 0x13b0d8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x13b0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x13b0dc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13b0e0: 0xa0850030  sb          $a1, 0x30($a0)
    ctx->pc = 0x13b0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x13b0e4: 0x0  nop
    ctx->pc = 0x13b0e4u;
    // NOP
label_13b0e8:
    // 0x13b0e8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x13b0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x13b0ec: 0x29640003  slti        $a0, $t3, 0x3
    ctx->pc = 0x13b0ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13b0f0: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13B0F0u;
    {
        const bool branch_taken_0x13b0f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0F0u;
        // 0x13b0f4: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0f0) {
            ctx->pc = 0x13B0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b0a8;
        }
    }
    ctx->pc = 0x13B0F8u;
    // 0x13b0f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x13b0f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x13b0fc: 0x29840004  slti        $a0, $t4, 0x4
    ctx->pc = 0x13b0fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13b100: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13B100u;
    {
        const bool branch_taken_0x13b100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B100u;
        // 0x13b104: 0x254a0248  addiu       $t2, $t2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b100) {
            ctx->pc = 0x13B0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b0a0;
        }
    }
    ctx->pc = 0x13B108u;
    // 0x13b108: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B108u;
    {
        const bool branch_taken_0x13b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b108) {
            ctx->pc = 0x13B140u;
            goto label_13b140;
        }
    }
    ctx->pc = 0x13B110u;
    // 0x13b110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b114: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x13b114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_13b118:
    // 0x13b118: 0x90c40024  lbu         $a0, 0x24($a2)
    ctx->pc = 0x13b118u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x13b11c: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13b120: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x13b120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13b124: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B124u;
    {
        const bool branch_taken_0x13b124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b124) {
            ctx->pc = 0x13B128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B124u;
            // 0x13b128: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B134u;
            goto label_13b134;
        }
    }
    ctx->pc = 0x13B12Cu;
    // 0x13b12c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B12Cu;
    {
        const bool branch_taken_0x13b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B12Cu;
        // 0x13b130: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b12c) {
            ctx->pc = 0x13B140u;
            goto label_13b140;
        }
    }
    ctx->pc = 0x13B134u;
label_13b134:
    // 0x13b134: 0x28a3000c  slti        $v1, $a1, 0xC
    ctx->pc = 0x13b134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x13b138: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13B138u;
    {
        const bool branch_taken_0x13b138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B138u;
        // 0x13b13c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b138) {
            ctx->pc = 0x13B118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B140u;
label_13b140:
    // 0x13b140: 0x3e00008  jr          $ra
    ctx->pc = 0x13B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B140u;
        // 0x13b144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B148u;
    // 0x13b148: 0x0  nop
    ctx->pc = 0x13b148u;
    // NOP
    // 0x13b14c: 0x0  nop
    ctx->pc = 0x13b14cu;
    // NOP
    if (ctx->pc == 0x13b14cu) { ctx->pc = 0x13b150u; }
}

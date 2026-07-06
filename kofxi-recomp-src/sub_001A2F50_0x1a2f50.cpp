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

// Function: sub_001A2F50
// Address: 0x1a2f50 - 0x1a30f0
void sub_001A2F50_0x1a2f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2F50_0x1a2f50");
#endif

    switch (ctx->pc) {
        case 0x1a30e4u: goto label_1a30e4;
        default: break;
    }

    ctx->pc = 0x1a2f50u;

    // 0x1a2f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a2f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2f5c: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x1a2f5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a2f60: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a2f64: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2f68: 0x2484ea00  addiu       $a0, $a0, -0x1600
    ctx->pc = 0x1a2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961664));
    // 0x1a2f6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a2f70: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1a2f70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2f74: 0x5080005c  beql        $a0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A2F74u;
    {
        const bool branch_taken_0x1a2f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f74) {
            ctx->pc = 0x1A2F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2F74u;
            // 0x1a2f78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A30E8u;
            goto label_1a30e8;
        }
    }
    ctx->pc = 0x1A2F7Cu;
    // 0x1a2f7c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a2f80: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x1a2f84: 0x2442b258  addiu       $v0, $v0, -0x4DA8
    ctx->pc = 0x1a2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947416));
    // 0x1a2f88: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a2f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a2f8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a2f90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a2f90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f94: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A2F94u;
    {
        const bool branch_taken_0x1a2f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f94) {
            ctx->pc = 0x1A2F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2F94u;
            // 0x1a2f98: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3034u;
            goto label_1a3034;
        }
    }
    ctx->pc = 0x1A2F9Cu;
    // 0x1a2f9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2fa0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A2FA0u;
    {
        const bool branch_taken_0x1a2fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2fa0) {
            ctx->pc = 0x1A3030u;
            goto label_1a3030;
        }
    }
    ctx->pc = 0x1A2FA8u;
    // 0x1a2fa8: 0x84640024  lh          $a0, 0x24($v1)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a2fac: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1a2facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a2fb0: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2FB0u;
    {
        const bool branch_taken_0x1a2fb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB0u;
        // 0x1a2fb4: 0xa4620024  sh          $v0, 0x24($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb0) {
            ctx->pc = 0x1A2FC8u;
            goto label_1a2fc8;
        }
    }
    ctx->pc = 0x1A2FB8u;
    // 0x1a2fb8: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0xa062000b  sb          $v0, 0xB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A2FD4u;
            goto label_1a2fd4;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0xa4600024  sh          $zero, 0x24($v1)
    ctx->pc = 0x1a2fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2fcc: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2fd0: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x1a2fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
label_1a2fd4:
    // 0x1a2fd4: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a2fd8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a2fdc: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A2FDCu;
    {
        const bool branch_taken_0x1a2fdc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FDCu;
        // 0x1a2fe0: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fdc) {
            ctx->pc = 0x1A301Cu;
            goto label_1a301c;
        }
    }
    ctx->pc = 0x1A2FE4u;
    // 0x1a2fe4: 0x84650012  lh          $a1, 0x12($v1)
    ctx->pc = 0x1a2fe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1a2fe8: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x1a2fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a2fec: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1a2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a2ff0: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x1a2ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2ff4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2ff8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2ffc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2FFCu;
    {
        const bool branch_taken_0x1a2ffc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FFCu;
        // 0x1a3000: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ffc) {
            ctx->pc = 0x1A3008u;
            goto label_1a3008;
        }
    }
    ctx->pc = 0x1A3004u;
    // 0x1a3004: 0xa4600012  sh          $zero, 0x12($v1)
    ctx->pc = 0x1a3004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
label_1a3008:
    // 0x1a3008: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1a3008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a300c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3010: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x1a3010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a3014: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1A3014u;
    {
        const bool branch_taken_0x1a3014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3014u;
        // 0x1a3018: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3014) {
            ctx->pc = 0x1A30D4u;
            goto label_1a30d4;
        }
    }
    ctx->pc = 0x1A301Cu;
label_1a301c:
    // 0x1a301c: 0xa460001c  sh          $zero, 0x1C($v1)
    ctx->pc = 0x1a301cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a3020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3024: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x1a3024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a3028: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A3028u;
    {
        const bool branch_taken_0x1a3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3028u;
        // 0x1a302c: 0xa060000c  sb          $zero, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3028) {
            ctx->pc = 0x1A30D4u;
            goto label_1a30d4;
        }
    }
    ctx->pc = 0x1A3030u;
label_1a3030:
    // 0x1a3030: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a3034:
    // 0x1a3034: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3034u;
    {
        const bool branch_taken_0x1a3034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3034) {
            ctx->pc = 0x1A3038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3034u;
            // 0x1a3038: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3060u;
            goto label_1a3060;
        }
    }
    ctx->pc = 0x1A303Cu;
    // 0x1a303c: 0x84640024  lh          $a0, 0x24($v1)
    ctx->pc = 0x1a303cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a3040: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1a3040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a3044: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3044u;
    {
        const bool branch_taken_0x1a3044 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3044u;
        // 0x1a3048: 0xa4620024  sh          $v0, 0x24($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3044) {
            ctx->pc = 0x1A305Cu;
            goto label_1a305c;
        }
    }
    ctx->pc = 0x1A304Cu;
    // 0x1a304c: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a304cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3054u;
    {
        const bool branch_taken_0x1a3054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3054u;
        // 0x1a3058: 0xa062000b  sb          $v0, 0xB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3054) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A305Cu;
label_1a305c:
    // 0x1a305c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_1a3060:
    // 0x1a3060: 0xa4600024  sh          $zero, 0x24($v1)
    ctx->pc = 0x1a3060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a3064: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a3064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3068: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x1a3068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
label_1a306c:
    // 0x1a306c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a3070: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3070u;
    {
        const bool branch_taken_0x1a3070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3070) {
            ctx->pc = 0x1A3074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3070u;
            // 0x1a3074: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A30C4u;
            goto label_1a30c4;
        }
    }
    ctx->pc = 0x1A3078u;
    // 0x1a3078: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a307c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a3080: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A3080u;
    {
        const bool branch_taken_0x1a3080 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3080u;
        // 0x1a3084: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3080) {
            ctx->pc = 0x1A30C0u;
            goto label_1a30c0;
        }
    }
    ctx->pc = 0x1A3088u;
    // 0x1a3088: 0x84650012  lh          $a1, 0x12($v1)
    ctx->pc = 0x1a3088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1a308c: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x1a308cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a3090: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a3094: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x1a3094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3098: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a309c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a309cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a30a0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A30A0u;
    {
        const bool branch_taken_0x1a30a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A0u;
        // 0x1a30a4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30a0) {
            ctx->pc = 0x1A30ACu;
            goto label_1a30ac;
        }
    }
    ctx->pc = 0x1A30A8u;
    // 0x1a30a8: 0xa4600012  sh          $zero, 0x12($v1)
    ctx->pc = 0x1a30a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
label_1a30ac:
    // 0x1a30ac: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a30b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a30b4: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x1a30b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a30b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A30B8u;
    {
        const bool branch_taken_0x1a30b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30B8u;
        // 0x1a30bc: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30b8) {
            ctx->pc = 0x1A30D4u;
            goto label_1a30d4;
        }
    }
    ctx->pc = 0x1A30C0u;
label_1a30c0:
    // 0x1a30c0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_1a30c4:
    // 0x1a30c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a30c8: 0xa460001c  sh          $zero, 0x1C($v1)
    ctx->pc = 0x1a30c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a30cc: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x1a30ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a30d0: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x1a30d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
label_1a30d4:
    // 0x1a30d4: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x1a30d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a30d8: 0x2466000b  addiu       $a2, $v1, 0xB
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x1a30dc: 0xc047682  jal         func_11DA08
    ctx->pc = 0x1A30DCu;
    SET_GPR_U32(ctx, 31, 0x1A30E4u);
    ctx->pc = 0x1A30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30DCu;
    // 0x1a30e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DA08u, 0x1A30DCu, 0x1A30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30E4u;
label_1a30e4:
    // 0x1a30e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a30e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a30e8:
    // 0x1a30e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A30E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E8u;
        // 0x1a30ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A30E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A30F0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAF68
// Address: 0x2caf68 - 0x2cb0a8
void sub_002CAF68_0x2caf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF68_0x2caf68");
#endif

    switch (ctx->pc) {
        case 0x2cafe4u: goto label_2cafe4;
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb064u: goto label_2cb064;
        case 0x2cb084u: goto label_2cb084;
        default: break;
    }

    ctx->pc = 0x2caf68u;

    // 0x2caf68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2caf6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2caf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2caf70: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2caf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2caf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2caf78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2caf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2caf80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2caf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf84: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2caf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2caf88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2caf88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf8c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2caf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2caf90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2caf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2caf94: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x2caf94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2caf98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CAF98u;
    {
        const bool branch_taken_0x2caf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF98u;
            // 0x2caf9c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf98) {
            ctx->pc = 0x2CAFC8u;
            goto label_2cafc8;
        }
    }
    ctx->pc = 0x2CAFA0u;
    // 0x2cafa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cafa4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2cafa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cafa8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CAFA8u;
    {
        const bool branch_taken_0x2cafa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFA8u;
            // 0x2cafac: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafa8) {
            ctx->pc = 0x2CB084u;
            goto label_2cb084;
        }
    }
    ctx->pc = 0x2CAFB0u;
    // 0x2cafb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2cafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cafb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAFB4u;
    {
        const bool branch_taken_0x2cafb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFB4u;
            // 0x2cafb8: 0x36740800  ori         $s4, $s3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafb4) {
            ctx->pc = 0x2CAFCCu;
            goto label_2cafcc;
        }
    }
    ctx->pc = 0x2CAFBCu;
    // 0x2cafbc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2CAFBCu;
    {
        const bool branch_taken_0x2cafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFBCu;
            // 0x2cafc0: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafbc) {
            ctx->pc = 0x2CB084u;
            goto label_2cb084;
        }
    }
    ctx->pc = 0x2CAFC4u;
    // 0x2cafc4: 0x0  nop
    ctx->pc = 0x2cafc4u;
    // NOP
label_2cafc8:
    // 0x2cafc8: 0x36740800  ori         $s4, $s3, 0x800
    ctx->pc = 0x2cafc8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2048);
label_2cafcc:
    // 0x2cafcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cafccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cafd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cafd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafd8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cafd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafdc: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAFDCu;
    SET_GPR_U32(ctx, 31, 0x2CAFE4u);
    ctx->pc = 0x2CAFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFDCu;
            // 0x2cafe0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFE4u; }
        if (ctx->pc != 0x2CAFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFE4u; }
        if (ctx->pc != 0x2CAFE4u) { return; }
    }
    ctx->pc = 0x2CAFE4u;
label_2cafe4:
    // 0x2cafe4: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CAFE4u;
    {
        const bool branch_taken_0x2cafe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cafe4) {
            ctx->pc = 0x2CAFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFE4u;
            // 0x2cafe8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB088u;
            goto label_2cb088;
        }
    }
    ctx->pc = 0x2CAFECu;
    // 0x2cafec: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2cafecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caff0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CAFF0u;
    {
        const bool branch_taken_0x2caff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caff0) {
            ctx->pc = 0x2CAFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFF0u;
            // 0x2caff4: 0x8e080004  lw          $t0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB070u;
            goto label_2cb070;
        }
    }
    ctx->pc = 0x2CAFF8u;
    // 0x2caff8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2caff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2caffc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2caffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cb000: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB000u;
    {
        const bool branch_taken_0x2cb000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb000) {
            ctx->pc = 0x2CB004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB000u;
            // 0x2cb004: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB030u;
            goto label_2cb030;
        }
    }
    ctx->pc = 0x2CB008u;
    // 0x2cb008: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2cb008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb00c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cb00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb010: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2cb010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cb014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb018: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB018u;
    SET_GPR_U32(ctx, 31, 0x2CB020u);
    ctx->pc = 0x2CB01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB018u;
            // 0x2cb01c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB020u; }
        if (ctx->pc != 0x2CB020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB020u; }
        if (ctx->pc != 0x2CB020u) { return; }
    }
    ctx->pc = 0x2CB020u;
label_2cb020:
    // 0x2cb020: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CB020u;
    {
        const bool branch_taken_0x2cb020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb020) {
            ctx->pc = 0x2CB024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB020u;
            // 0x2cb024: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB088u;
            goto label_2cb088;
        }
    }
    ctx->pc = 0x2CB028u;
    // 0x2cb028: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cb028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cb02c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb030:
    // 0x2cb030: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2cb030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb034: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x2cb034u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb040: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cb040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb044: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2cb044u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2cb048: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2cb048u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2cb04c: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x2cb04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x2cb050: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cb054:
    // 0x2cb054: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2cb054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2cb058: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cb058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb05c: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB05Cu;
    SET_GPR_U32(ctx, 31, 0x2CB064u);
    ctx->pc = 0x2CB060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB05Cu;
            // 0x2cb060: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB064u; }
        if (ctx->pc != 0x2CB064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB064u; }
        if (ctx->pc != 0x2CB064u) { return; }
    }
    ctx->pc = 0x2CB064u;
label_2cb064:
    // 0x2cb064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB064u;
    {
        const bool branch_taken_0x2cb064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB064u;
            // 0x2cb068: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb064) {
            ctx->pc = 0x2CB088u;
            goto label_2cb088;
        }
    }
    ctx->pc = 0x2CB06Cu;
    // 0x2cb06c: 0x0  nop
    ctx->pc = 0x2cb06cu;
    // NOP
label_2cb070:
    // 0x2cb070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb074: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2cb074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb078: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cb078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb07c: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB07Cu;
    SET_GPR_U32(ctx, 31, 0x2CB084u);
    ctx->pc = 0x2CB080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB07Cu;
            // 0x2cb080: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB084u; }
        if (ctx->pc != 0x2CB084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB084u; }
        if (ctx->pc != 0x2CB084u) { return; }
    }
    ctx->pc = 0x2CB084u;
label_2cb084:
    // 0x2cb084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb088:
    // 0x2cb088: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb08c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cb08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb090: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2cb090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb094: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2cb094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb098: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2cb098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB09Cu;
            // 0x2cb0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB0A4u;
    // 0x2cb0a4: 0x0  nop
    ctx->pc = 0x2cb0a4u;
    // NOP
    ctx->pc = 0x2cb0a8u;
}

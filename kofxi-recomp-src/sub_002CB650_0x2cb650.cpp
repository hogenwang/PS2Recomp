#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB650
// Address: 0x2cb650 - 0x2cbe48
void sub_002CB650_0x2cb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB650_0x2cb650");
#endif

    switch (ctx->pc) {
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb740u: goto label_2cb740;
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb764u: goto label_2cb764;
        case 0x2cb788u: goto label_2cb788;
        case 0x2cb810u: goto label_2cb810;
        case 0x2cb880u: goto label_2cb880;
        case 0x2cb88cu: goto label_2cb88c;
        case 0x2cb8a4u: goto label_2cb8a4;
        case 0x2cb8c8u: goto label_2cb8c8;
        case 0x2cb8f8u: goto label_2cb8f8;
        case 0x2cb940u: goto label_2cb940;
        case 0x2cb95cu: goto label_2cb95c;
        case 0x2cb978u: goto label_2cb978;
        case 0x2cb9b8u: goto label_2cb9b8;
        case 0x2cba38u: goto label_2cba38;
        case 0x2cba70u: goto label_2cba70;
        case 0x2cbaa0u: goto label_2cbaa0;
        case 0x2cbac8u: goto label_2cbac8;
        case 0x2cbb10u: goto label_2cbb10;
        case 0x2cbb7cu: goto label_2cbb7c;
        case 0x2cbb88u: goto label_2cbb88;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbcf0u: goto label_2cbcf0;
        case 0x2cbd30u: goto label_2cbd30;
        case 0x2cbd50u: goto label_2cbd50;
        case 0x2cbd60u: goto label_2cbd60;
        case 0x2cbd90u: goto label_2cbd90;
        case 0x2cbdc0u: goto label_2cbdc0;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe3cu: goto label_2cbe3c;
        default: break;
    }

    ctx->pc = 0x2cb650u;

    // 0x2cb650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb654: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2cb654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb65c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x2cb65cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cb660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb664: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2cb664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb668: 0x80b266e  j           func_2C99B8
    ctx->pc = 0x2CB668u;
    ctx->pc = 0x2CB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB668u;
            // 0x2cb66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CB670u;
label_2cb670:
    // 0x2cb670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb674: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb680: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb684: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb688: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cb68c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cb68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb69c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB69Cu;
    {
        const bool branch_taken_0x2cb69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB69Cu;
            // 0x2cb6a0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb69c) {
            ctx->pc = 0x2CB6E0u;
            goto label_2cb6e0;
        }
    }
    ctx->pc = 0x2CB6A4u;
    // 0x2cb6a4: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x2cb6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2cb6a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB6A8u;
    {
        const bool branch_taken_0x2cb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6A8u;
            // 0x2cb6ac: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6a8) {
            ctx->pc = 0x2CB6C8u;
            goto label_2cb6c8;
        }
    }
    ctx->pc = 0x2CB6B0u;
    // 0x2cb6b0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2cb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2cb6b4: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CB6B4u;
    {
        const bool branch_taken_0x2cb6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb6b4) {
            ctx->pc = 0x2CB6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6B4u;
            // 0x2cb6b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB724u;
            goto label_2cb724;
        }
    }
    ctx->pc = 0x2CB6BCu;
    // 0x2cb6bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CB6BCu;
    {
        const bool branch_taken_0x2cb6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6BCu;
            // 0x2cb6c0: 0x24130888  addiu       $s3, $zero, 0x888 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6bc) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB6C4u;
    // 0x2cb6c4: 0x0  nop
    ctx->pc = 0x2cb6c4u;
    // NOP
label_2cb6c8:
    // 0x2cb6c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB6C8u;
    {
        const bool branch_taken_0x2cb6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6C8u;
            // 0x2cb6cc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6c8) {
            ctx->pc = 0x2CB6E8u;
            goto label_2cb6e8;
        }
    }
    ctx->pc = 0x2CB6D0u;
    // 0x2cb6d0: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB6D0u;
    {
        const bool branch_taken_0x2cb6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb6d0) {
            ctx->pc = 0x2CB6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6D0u;
            // 0x2cb6d4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB708u;
            goto label_2cb708;
        }
    }
    ctx->pc = 0x2CB6D8u;
    // 0x2cb6d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB6D8u;
    {
        const bool branch_taken_0x2cb6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6D8u;
            // 0x2cb6dc: 0x24130888  addiu       $s3, $zero, 0x888 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6d8) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB6E0u;
label_2cb6e0:
    // 0x2cb6e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB6E0u;
    {
        const bool branch_taken_0x2cb6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6E0u;
            // 0x2cb6e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6e0) {
            ctx->pc = 0x2CB724u;
            goto label_2cb724;
        }
    }
    ctx->pc = 0x2CB6E8u;
label_2cb6e8:
    // 0x2cb6e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cb6ec: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2cb6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2cb6f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB6F0u;
    {
        const bool branch_taken_0x2cb6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6F0u;
            // 0x2cb6f4: 0x31082  srl         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6f0) {
            ctx->pc = 0x2CB724u;
            goto label_2cb724;
        }
    }
    ctx->pc = 0x2CB6F8u;
    // 0x2cb6f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cb6fc: 0x24130888  addiu       $s3, $zero, 0x888
    ctx->pc = 0x2cb6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
    // 0x2cb700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CB700u;
    {
        const bool branch_taken_0x2cb700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB700u;
            // 0x2cb704: 0x2452ef50  addiu       $s2, $v0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb700) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB708u;
label_2cb708:
    // 0x2cb708: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2cb708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cb70c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB70Cu;
    {
        const bool branch_taken_0x2cb70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB70Cu;
            // 0x2cb710: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb70c) {
            ctx->pc = 0x2CB720u;
            goto label_2cb720;
        }
    }
    ctx->pc = 0x2CB714u;
    // 0x2cb714: 0x24130888  addiu       $s3, $zero, 0x888
    ctx->pc = 0x2cb714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
    // 0x2cb718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB718u;
    {
        const bool branch_taken_0x2cb718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB718u;
            // 0x2cb71c: 0x2452ef60  addiu       $s2, $v0, -0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb718) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB720u;
label_2cb720:
    // 0x2cb720: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2cb720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_2cb724:
    // 0x2cb724: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2cb724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2cb728: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cb728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cb72c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2cb72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2cb730:
    // 0x2cb730: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB730u;
    {
        const bool branch_taken_0x2cb730 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB730u;
            // 0x2cb734: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb730) {
            ctx->pc = 0x2CB768u;
            goto label_2cb768;
        }
    }
    ctx->pc = 0x2CB738u;
    // 0x2cb738: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2CB738u;
    SET_GPR_U32(ctx, 31, 0x2CB740u);
    ctx->pc = 0x2CB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB738u;
            // 0x2cb73c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (runtime->hasFunction(0x2D8398u)) {
        auto targetFn = runtime->lookupFunction(0x2D8398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB740u; }
        if (ctx->pc != 0x2CB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8398_0x2d8398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB740u; }
        if (ctx->pc != 0x2CB740u) { return; }
    }
    ctx->pc = 0x2CB740u;
label_2cb740:
    // 0x2cb740: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb744: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CB744u;
    SET_GPR_U32(ctx, 31, 0x2CB74Cu);
    ctx->pc = 0x2CB748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB744u;
            // 0x2cb748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB74Cu; }
        if (ctx->pc != 0x2CB74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB74Cu; }
        if (ctx->pc != 0x2CB74Cu) { return; }
    }
    ctx->pc = 0x2CB74Cu;
label_2cb74c:
    // 0x2cb74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB74Cu;
    {
        const bool branch_taken_0x2cb74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB74Cu;
            // 0x2cb750: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb74c) {
            ctx->pc = 0x2CB764u;
            goto label_2cb764;
        }
    }
    ctx->pc = 0x2CB754u;
    // 0x2cb754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb75c: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CB75Cu;
    SET_GPR_U32(ctx, 31, 0x2CB764u);
    ctx->pc = 0x2CB760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB75Cu;
            // 0x2cb760: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB764u; }
        if (ctx->pc != 0x2CB764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB764u; }
        if (ctx->pc != 0x2CB764u) { return; }
    }
    ctx->pc = 0x2CB764u;
label_2cb764:
    // 0x2cb764: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cb764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb768:
    // 0x2cb768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb76c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb774: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cb774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB77Cu;
            // 0x2cb780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB784u;
    // 0x2cb784: 0x0  nop
    ctx->pc = 0x2cb784u;
    // NOP
label_2cb788:
    // 0x2cb788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb78c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb794: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cb798: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cb798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb79c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cb79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cb7a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cb7a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb7a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb7ac: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CB7ACu;
    {
        const bool branch_taken_0x2cb7ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7ACu;
            // 0x2cb7b0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7ac) {
            ctx->pc = 0x2CB814u;
            goto label_2cb814;
        }
    }
    ctx->pc = 0x2CB7B4u;
    // 0x2cb7b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2cb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb7b8: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CB7B8u;
    {
        const bool branch_taken_0x2cb7b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb7b8) {
            ctx->pc = 0x2CB814u;
            goto label_2cb814;
        }
    }
    ctx->pc = 0x2CB7C0u;
    // 0x2cb7c0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2cb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2cb7c4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB7C4u;
    {
        const bool branch_taken_0x2cb7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7C4u;
            // 0x2cb7c8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7c4) {
            ctx->pc = 0x2CB814u;
            goto label_2cb814;
        }
    }
    ctx->pc = 0x2CB7CCu;
    // 0x2cb7cc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB7CCu;
    {
        const bool branch_taken_0x2cb7cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7CCu;
            // 0x2cb7d0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7cc) {
            ctx->pc = 0x2CB7E8u;
            goto label_2cb7e8;
        }
    }
    ctx->pc = 0x2CB7D4u;
    // 0x2cb7d4: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB7D4u;
    {
        const bool branch_taken_0x2cb7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb7d4) {
            ctx->pc = 0x2CB7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7D4u;
            // 0x2cb7d8: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7F8u;
            goto label_2cb7f8;
        }
    }
    ctx->pc = 0x2CB7DCu;
    // 0x2cb7dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB7DCu;
    {
        const bool branch_taken_0x2cb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7DCu;
            // 0x2cb7e0: 0x8cf00004  lw          $s0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7dc) {
            ctx->pc = 0x2CB7FCu;
            goto label_2cb7fc;
        }
    }
    ctx->pc = 0x2CB7E4u;
    // 0x2cb7e4: 0x0  nop
    ctx->pc = 0x2cb7e4u;
    // NOP
label_2cb7e8:
    // 0x2cb7e8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2cb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cb7ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB7ECu;
    {
        const bool branch_taken_0x2cb7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7ECu;
            // 0x2cb7f0: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7ec) {
            ctx->pc = 0x2CB7FCu;
            goto label_2cb7fc;
        }
    }
    ctx->pc = 0x2CB7F4u;
    // 0x2cb7f4: 0x0  nop
    ctx->pc = 0x2cb7f4u;
    // NOP
label_2cb7f8:
    // 0x2cb7f8: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x2cb7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2cb7fc:
    // 0x2cb7fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2cb7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb800: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cb800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb804: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cb804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb808: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB808u;
    SET_GPR_U32(ctx, 31, 0x2CB810u);
    ctx->pc = 0x2CB80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB808u;
            // 0x2cb80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB810u; }
        if (ctx->pc != 0x2CB810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB810u; }
        if (ctx->pc != 0x2CB810u) { return; }
    }
    ctx->pc = 0x2CB810u;
label_2cb810:
    // 0x2cb810: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cb810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb814:
    // 0x2cb814: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CB814u;
    {
        const bool branch_taken_0x2cb814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB814u;
            // 0x2cb818: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb814) {
            ctx->pc = 0x2CB8A4u;
            goto label_2cb8a4;
        }
    }
    ctx->pc = 0x2CB81Cu;
    // 0x2cb81c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2cb81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb820: 0x12230013  beq         $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB820u;
    {
        const bool branch_taken_0x2cb820 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB820u;
            // 0x2cb824: 0x2452ef80  addiu       $s2, $v0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb820) {
            ctx->pc = 0x2CB870u;
            goto label_2cb870;
        }
    }
    ctx->pc = 0x2CB828u;
    // 0x2cb828: 0x2e220015  sltiu       $v0, $s1, 0x15
    ctx->pc = 0x2cb828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2cb82c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB82Cu;
    {
        const bool branch_taken_0x2cb82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB82Cu;
            // 0x2cb830: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb82c) {
            ctx->pc = 0x2CB850u;
            goto label_2cb850;
        }
    }
    ctx->pc = 0x2CB834u;
    // 0x2cb834: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cb834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cb838: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2cb83c: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB83Cu;
    {
        const bool branch_taken_0x2cb83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB83Cu;
            // 0x2cb840: 0x2452ef70  addiu       $s2, $v0, -0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb83c) {
            ctx->pc = 0x2CB870u;
            goto label_2cb870;
        }
    }
    ctx->pc = 0x2CB844u;
    // 0x2cb844: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CB844u;
    {
        const bool branch_taken_0x2cb844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB844u;
            // 0x2cb848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb844) {
            ctx->pc = 0x2CB870u;
            goto label_2cb870;
        }
    }
    ctx->pc = 0x2CB84Cu;
    // 0x2cb84c: 0x0  nop
    ctx->pc = 0x2cb84cu;
    // NOP
label_2cb850:
    // 0x2cb850: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2cb850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2cb854: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB854u;
    {
        const bool branch_taken_0x2cb854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB854u;
            // 0x2cb858: 0x2452ef50  addiu       $s2, $v0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb854) {
            ctx->pc = 0x2CB870u;
            goto label_2cb870;
        }
    }
    ctx->pc = 0x2CB85Cu;
    // 0x2cb85c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2cb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2cb860: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB860u;
    {
        const bool branch_taken_0x2cb860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb860) {
            ctx->pc = 0x2CB864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB860u;
            // 0x2cb864: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB870u;
            goto label_2cb870;
        }
    }
    ctx->pc = 0x2CB868u;
    // 0x2cb868: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cb868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cb86c: 0x2452ef60  addiu       $s2, $v0, -0x10A0
    ctx->pc = 0x2cb86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
label_2cb870:
    // 0x2cb870: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB870u;
    {
        const bool branch_taken_0x2cb870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB870u;
            // 0x2cb874: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb870) {
            ctx->pc = 0x2CB8A8u;
            goto label_2cb8a8;
        }
    }
    ctx->pc = 0x2CB878u;
    // 0x2cb878: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2CB878u;
    SET_GPR_U32(ctx, 31, 0x2CB880u);
    ctx->pc = 0x2CB87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB878u;
            // 0x2cb87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (runtime->hasFunction(0x2D8398u)) {
        auto targetFn = runtime->lookupFunction(0x2D8398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB880u; }
        if (ctx->pc != 0x2CB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8398_0x2d8398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB880u; }
        if (ctx->pc != 0x2CB880u) { return; }
    }
    ctx->pc = 0x2CB880u;
label_2cb880:
    // 0x2cb880: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2cb880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb884: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CB884u;
    SET_GPR_U32(ctx, 31, 0x2CB88Cu);
    ctx->pc = 0x2CB888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB884u;
            // 0x2cb888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB88Cu; }
        if (ctx->pc != 0x2CB88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB88Cu; }
        if (ctx->pc != 0x2CB88Cu) { return; }
    }
    ctx->pc = 0x2CB88Cu;
label_2cb88c:
    // 0x2cb88c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB88Cu;
    {
        const bool branch_taken_0x2cb88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB88Cu;
            // 0x2cb890: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb88c) {
            ctx->pc = 0x2CB8A4u;
            goto label_2cb8a4;
        }
    }
    ctx->pc = 0x2CB894u;
    // 0x2cb894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb89c: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CB89Cu;
    SET_GPR_U32(ctx, 31, 0x2CB8A4u);
    ctx->pc = 0x2CB8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB89Cu;
            // 0x2cb8a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8A4u; }
        if (ctx->pc != 0x2CB8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8A4u; }
        if (ctx->pc != 0x2CB8A4u) { return; }
    }
    ctx->pc = 0x2CB8A4u;
label_2cb8a4:
    // 0x2cb8a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb8a8:
    // 0x2cb8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb8ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb8b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb8b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb8b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb8b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cb8b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb8bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cb8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8C0u;
            // 0x2cb8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB8C8u;
label_2cb8c8:
    // 0x2cb8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb8cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb8d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cb8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8d8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2cb8dc: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2cb8e0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb8e4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cb8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb8ec: 0x80b389e  j           func_2CE278
    ctx->pc = 0x2CB8ECu;
    ctx->pc = 0x2CB8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8ECu;
            // 0x2cb8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE278u;
    {
        auto targetFn = runtime->lookupFunction(0x2CE278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2CB8F4u;
    // 0x2cb8f4: 0x0  nop
    ctx->pc = 0x2cb8f4u;
    // NOP
label_2cb8f8:
    // 0x2cb8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb8fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb904: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cb908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb90c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cb90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cb910: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cb910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb914: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB914u;
    {
        const bool branch_taken_0x2cb914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB914u;
            // 0x2cb918: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb914) {
            ctx->pc = 0x2CB928u;
            goto label_2cb928;
        }
    }
    ctx->pc = 0x2CB91Cu;
    // 0x2cb91c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2cb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb920: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB920u;
    {
        const bool branch_taken_0x2cb920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB920u;
            // 0x2cb924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb920) {
            ctx->pc = 0x2CB930u;
            goto label_2cb930;
        }
    }
    ctx->pc = 0x2CB928u;
label_2cb928:
    // 0x2cb928: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CB928u;
    {
        const bool branch_taken_0x2cb928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB928u;
            // 0x2cb92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb928) {
            ctx->pc = 0x2CB95Cu;
            goto label_2cb95c;
        }
    }
    ctx->pc = 0x2CB930u;
label_2cb930:
    // 0x2cb930: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x2cb930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cb934: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cb934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb938: 0xc0b350e  jal         func_2CD438
    ctx->pc = 0x2CB938u;
    SET_GPR_U32(ctx, 31, 0x2CB940u);
    ctx->pc = 0x2CB93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB938u;
            // 0x2cb93c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD438u;
    if (runtime->hasFunction(0x2CD438u)) {
        auto targetFn = runtime->lookupFunction(0x2CD438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB940u; }
        if (ctx->pc != 0x2CB940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD438_0x2cd438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB940u; }
        if (ctx->pc != 0x2CB940u) { return; }
    }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb948: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB948u;
    {
        const bool branch_taken_0x2cb948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB948u;
            // 0x2cb94c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb948) {
            ctx->pc = 0x2CB95Cu;
            goto label_2cb95c;
        }
    }
    ctx->pc = 0x2CB950u;
    // 0x2cb950: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cb950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb954: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB954u;
    SET_GPR_U32(ctx, 31, 0x2CB95Cu);
    ctx->pc = 0x2CB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB954u;
            // 0x2cb958: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB95Cu; }
        if (ctx->pc != 0x2CB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB95Cu; }
        if (ctx->pc != 0x2CB95Cu) { return; }
    }
    ctx->pc = 0x2CB95Cu;
label_2cb95c:
    // 0x2cb95c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb960: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cb964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb968: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cb968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb96c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB96Cu;
            // 0x2cb970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB974u;
    // 0x2cb974: 0x0  nop
    ctx->pc = 0x2cb974u;
    // NOP
label_2cb978:
    // 0x2cb978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb97c: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x2cb97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2cb980: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x2cb980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2cb984: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2cb984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb988: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2cb988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb98c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2cb98cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb990: 0x10e00040  beqz        $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CB990u;
    {
        const bool branch_taken_0x2cb990 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB990u;
            // 0x2cb994: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb990) {
            ctx->pc = 0x2CBA94u;
            goto label_2cba94;
        }
    }
    ctx->pc = 0x2CB998u;
    // 0x2cb998: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cb998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb99c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2cb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cb9a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cb9a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2cb9a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb9a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cb9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cb9ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB9ACu;
    {
        const bool branch_taken_0x2cb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9ACu;
            // 0x2cb9b0: 0x62480b  movn        $t1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9ac) {
            ctx->pc = 0x2CB9C0u;
            goto label_2cb9c0;
        }
    }
    ctx->pc = 0x2CB9B4u;
    // 0x2cb9b4: 0x0  nop
    ctx->pc = 0x2cb9b4u;
    // NOP
label_2cb9b8:
    // 0x2cb9b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cb9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cb9bc: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2cb9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_2cb9c0:
    // 0x2cb9c0: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x2cb9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cb9c4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB9C4u;
    {
        const bool branch_taken_0x2cb9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9C4u;
            // 0x2cb9c8: 0x2ce30005  sltiu       $v1, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9c4) {
            ctx->pc = 0x2CBA14u;
            goto label_2cba14;
        }
    }
    ctx->pc = 0x2CB9CCu;
    // 0x2cb9cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb9d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2cb9d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb9d4: 0x1449000f  bne         $v0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB9D4u;
    {
        const bool branch_taken_0x2cb9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2CB9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9D4u;
            // 0x2cb9d8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9d4) {
            ctx->pc = 0x2CBA14u;
            goto label_2cba14;
        }
    }
    ctx->pc = 0x2CB9DCu;
    // 0x2cb9dc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2cb9dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2cb9e0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2cb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cb9e4: 0x392300ff  xori        $v1, $t1, 0xFF
    ctx->pc = 0x2cb9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)255);
    // 0x2cb9e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cb9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cb9ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB9ECu;
    {
        const bool branch_taken_0x2cb9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9ECu;
            // 0x2cb9f0: 0x2c660001  sltiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9ec) {
            ctx->pc = 0x2CBA08u;
            goto label_2cba08;
        }
    }
    ctx->pc = 0x2CB9F4u;
    // 0x2cb9f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB9F4u;
    {
        const bool branch_taken_0x2cb9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9F4u;
            // 0x2cb9f8: 0x2ce30005  sltiu       $v1, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9f4) {
            ctx->pc = 0x2CBA14u;
            goto label_2cba14;
        }
    }
    ctx->pc = 0x2CB9FCu;
    // 0x2cb9fc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CB9FCu;
    {
        const bool branch_taken_0x2cb9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9FCu;
            // 0x2cba00: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9fc) {
            ctx->pc = 0x2CB9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb9b8;
        }
    }
    ctx->pc = 0x2CBA04u;
    // 0x2cba04: 0x0  nop
    ctx->pc = 0x2cba04u;
    // NOP
label_2cba08:
    // 0x2cba08: 0x50c0ffeb  beql        $a2, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2CBA08u;
    {
        const bool branch_taken_0x2cba08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba08) {
            ctx->pc = 0x2CBA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA08u;
            // 0x2cba0c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb9b8;
        }
    }
    ctx->pc = 0x2CBA10u;
    // 0x2cba10: 0x2ce30005  sltiu       $v1, $a3, 0x5
    ctx->pc = 0x2cba10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2cba14:
    // 0x2cba14: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CBA14u;
    {
        const bool branch_taken_0x2cba14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA14u;
            // 0x2cba18: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba14) {
            ctx->pc = 0x2CBA94u;
            goto label_2cba94;
        }
    }
    ctx->pc = 0x2CBA1Cu;
    // 0x2cba1c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cba20: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2CBA20u;
    {
        const bool branch_taken_0x2cba20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA20u;
            // 0x2cba24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba20) {
            ctx->pc = 0x2CBA60u;
            goto label_2cba60;
        }
    }
    ctx->pc = 0x2CBA28u;
    // 0x2cba28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2cba28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba2c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x2cba2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cba30: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2cba30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2cba34: 0x2447fff8  addiu       $a3, $v0, -0x8
    ctx->pc = 0x2cba34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2cba38:
    // 0x2cba38: 0x1461021  addu        $v0, $t2, $a2
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2cba3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cba40: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cba40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cba44: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x2cba44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2cba48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cba4c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x2cba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x2cba50: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x2cba50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x2cba54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cba58: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CBA58u;
    {
        const bool branch_taken_0x2cba58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA58u;
            // 0x2cba5c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba58) {
            ctx->pc = 0x2CBA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cba38;
        }
    }
    ctx->pc = 0x2CBA60u;
label_2cba60:
    // 0x2cba60: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x2cba60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cba64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CBA64u;
    {
        const bool branch_taken_0x2cba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA64u;
            // 0x2cba68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba64) {
            ctx->pc = 0x2CBA94u;
            goto label_2cba94;
        }
    }
    ctx->pc = 0x2CBA6Cu;
    // 0x2cba6c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cba70:
    // 0x2cba70: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cba74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cba74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cba78: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x2cba7c: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x2cba7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cba80: 0x0  nop
    ctx->pc = 0x2cba80u;
    // NOP
    // 0x2cba84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CBA84u;
    {
        const bool branch_taken_0x2cba84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA84u;
            // 0x2cba88: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba84) {
            ctx->pc = 0x2CBA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cba70;
        }
    }
    ctx->pc = 0x2CBA8Cu;
    // 0x2cba8c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2cba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2cba90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cba90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cba94:
    // 0x2cba94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA94u;
            // 0x2cba98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBA9Cu;
    // 0x2cba9c: 0x0  nop
    ctx->pc = 0x2cba9cu;
    // NOP
label_2cbaa0:
    // 0x2cbaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbaa4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2cbaa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cbaac: 0x10e00033  beqz        $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x2CBAACu;
    {
        const bool branch_taken_0x2cbaac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBAACu;
            // 0x2cbab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaac) {
            ctx->pc = 0x2CBB7Cu;
            goto label_2cbb7c;
        }
    }
    ctx->pc = 0x2CBAB4u;
    // 0x2cbab4: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x2cbab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cbab8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2cbab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cbabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbac0: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2cbac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbac4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cbac8:
    // 0x2cbac8: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x2cbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2cbacc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cbaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cbad0: 0x1271807  srav        $v1, $a3, $t1
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x2cbad4: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2cbad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2cbad8: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x2cbad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cbadc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CBADCu;
    {
        const bool branch_taken_0x2cbadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBADCu;
            // 0x2cbae0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbadc) {
            ctx->pc = 0x2CBAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbac8;
        }
    }
    ctx->pc = 0x2CBAE4u;
    // 0x2cbae4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2cbae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbae8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2cbae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cbaec: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2cbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2cbaf0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2cbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cbaf4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2cbaf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cbaf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbafc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cbafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbb00: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbb04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBB04u;
    {
        const bool branch_taken_0x2cbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB04u;
            // 0x2cbb08: 0x62500b  movn        $t2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb04) {
            ctx->pc = 0x2CBB18u;
            goto label_2cbb18;
        }
    }
    ctx->pc = 0x2CBB0Cu;
    // 0x2cbb0c: 0x0  nop
    ctx->pc = 0x2cbb0cu;
    // NOP
label_2cbb10:
    // 0x2cbb10: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2cbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2cbb14: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2cbb18:
    // 0x2cbb18: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2cbb18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbb1c: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x2cbb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbb20: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBB20u;
    {
        const bool branch_taken_0x2cbb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB20u;
            // 0x2cbb24: 0x250bffff  addiu       $t3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb20) {
            ctx->pc = 0x2CBB70u;
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBB28u;
    // 0x2cbb28: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cbb28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbb2c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cbb2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbb30: 0x144a0010  bne         $v0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBB30u;
    {
        const bool branch_taken_0x2cbb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2CBB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB30u;
            // 0x2cbb34: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb30) {
            ctx->pc = 0x2CBB74u;
            goto label_2cbb74;
        }
    }
    ctx->pc = 0x2CBB38u;
    // 0x2cbb38: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x2cbb38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2cbb3c: 0x394300ff  xori        $v1, $t2, 0xFF
    ctx->pc = 0x2cbb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)255);
    // 0x2cbb40: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbb44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBB44u;
    {
        const bool branch_taken_0x2cbb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB44u;
            // 0x2cbb48: 0x2c640001  sltiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb44) {
            ctx->pc = 0x2CBB60u;
            goto label_2cbb60;
        }
    }
    ctx->pc = 0x2CBB4Cu;
    // 0x2cbb4c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBB4Cu;
    {
        const bool branch_taken_0x2cbb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb4c) {
            ctx->pc = 0x2CBB74u;
            goto label_2cbb74;
        }
    }
    ctx->pc = 0x2CBB54u;
    // 0x2cbb54: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CBB54u;
    {
        const bool branch_taken_0x2cbb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB54u;
            // 0x2cbb58: 0x25270001  addiu       $a3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb54) {
            ctx->pc = 0x2CBB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbb10;
        }
    }
    ctx->pc = 0x2CBB5Cu;
    // 0x2cbb5c: 0x0  nop
    ctx->pc = 0x2cbb5cu;
    // NOP
label_2cbb60:
    // 0x2cbb60: 0x5080ffeb  beql        $a0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2CBB60u;
    {
        const bool branch_taken_0x2cbb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb60) {
            ctx->pc = 0x2CBB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB60u;
            // 0x2cbb64: 0x25270001  addiu       $a3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbb10;
        }
    }
    ctx->pc = 0x2CBB68u;
    // 0x2cbb68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBB68u;
    {
        const bool branch_taken_0x2cbb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb68) {
            ctx->pc = 0x2CBB74u;
            goto label_2cbb74;
        }
    }
    ctx->pc = 0x2CBB70u;
label_2cbb70:
    // 0x2cbb70: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbb74:
    // 0x2cbb74: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CBB74u;
    SET_GPR_U32(ctx, 31, 0x2CBB7Cu);
    ctx->pc = 0x2CBB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB74u;
            // 0x2cbb78: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB7Cu; }
        if (ctx->pc != 0x2CBB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB7Cu; }
        if (ctx->pc != 0x2CBB7Cu) { return; }
    }
    ctx->pc = 0x2CBB7Cu;
label_2cbb7c:
    // 0x2cbb7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbb80: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB80u;
            // 0x2cbb84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBB88u;
label_2cbb88:
    // 0x2cbb88: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2cbb88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cbb8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbb90: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x2cbb90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cbb94: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x2cbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2cbb98: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2cbb9c: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CBB9Cu;
    {
        const bool branch_taken_0x2cbb9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB9Cu;
            // 0x2cbba0: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb9c) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CBBA4u;
    // 0x2cbba4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cbba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbba8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cbbac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cbbacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbb0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbbb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBBB4u;
    {
        const bool branch_taken_0x2cbbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBB4u;
            // 0x2cbbb8: 0x62480b  movn        $t1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbb4) {
            ctx->pc = 0x2CBBC4u;
            goto label_2cbbc4;
        }
    }
    ctx->pc = 0x2CBBBCu;
    // 0x2cbbbc: 0x0  nop
    ctx->pc = 0x2cbbbcu;
    // NOP
label_2cbbc0:
    // 0x2cbbc0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2cbbc4:
    // 0x2cbbc4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2cbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbbc8: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cbbcc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2cbbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbbd0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CBBD0u;
    {
        const bool branch_taken_0x2cbbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBD0u;
            // 0x2cbbd4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbd0) {
            ctx->pc = 0x2CBC10u;
            goto label_2cbc10;
        }
    }
    ctx->pc = 0x2CBBD8u;
    // 0x2cbbd8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cbbd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cbbdc: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CBBDCu;
    {
        const bool branch_taken_0x2cbbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2CBBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBDCu;
            // 0x2cbbe0: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbdc) {
            ctx->pc = 0x2CBC10u;
            goto label_2cbc10;
        }
    }
    ctx->pc = 0x2CBBE4u;
    // 0x2cbbe4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2cbbe8: 0x392300ff  xori        $v1, $t1, 0xFF
    ctx->pc = 0x2cbbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)255);
    // 0x2cbbec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbbf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBBF0u;
    {
        const bool branch_taken_0x2cbbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBF0u;
            // 0x2cbbf4: 0x2c660001  sltiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbf0) {
            ctx->pc = 0x2CBC08u;
            goto label_2cbc08;
        }
    }
    ctx->pc = 0x2CBBF8u;
    // 0x2cbbf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBBF8u;
    {
        const bool branch_taken_0x2cbbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbbf8) {
            ctx->pc = 0x2CBC10u;
            goto label_2cbc10;
        }
    }
    ctx->pc = 0x2CBC00u;
    // 0x2cbc00: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CBC00u;
    {
        const bool branch_taken_0x2cbc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC00u;
            // 0x2cbc04: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc00) {
            ctx->pc = 0x2CBBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbbc0;
        }
    }
    ctx->pc = 0x2CBC08u;
label_2cbc08:
    // 0x2cbc08: 0x50c0ffed  beql        $a2, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CBC08u;
    {
        const bool branch_taken_0x2cbc08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc08) {
            ctx->pc = 0x2CBC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC08u;
            // 0x2cbc0c: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbbc0;
        }
    }
    ctx->pc = 0x2CBC10u;
label_2cbc10:
    // 0x2cbc10: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x2cbc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2cbc14: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x2cbc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2cbc18: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2cbc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cbc1c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2cbc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cbc20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc24:
    // 0x2cbc24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC24u;
            // 0x2cbc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBC2Cu;
    // 0x2cbc2c: 0x0  nop
    ctx->pc = 0x2cbc2cu;
    // NOP
label_2cbc30:
    // 0x2cbc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbc34: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBC34u;
    {
        const bool branch_taken_0x2cbc34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC34u;
            // 0x2cbc38: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc34) {
            ctx->pc = 0x2CBC48u;
            goto label_2cbc48;
        }
    }
    ctx->pc = 0x2CBC3Cu;
    // 0x2cbc3c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2cbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbc40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBC40u;
    {
        const bool branch_taken_0x2cbc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc40) {
            ctx->pc = 0x2CBC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC40u;
            // 0x2cbc44: 0x8ceb0004  lw          $t3, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBC50u;
            goto label_2cbc50;
        }
    }
    ctx->pc = 0x2CBC48u;
label_2cbc48:
    // 0x2cbc48: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2CBC48u;
    {
        const bool branch_taken_0x2cbc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC48u;
            // 0x2cbc4c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc48) {
            ctx->pc = 0x2CBCE4u;
            goto label_2cbce4;
        }
    }
    ctx->pc = 0x2CBC50u;
label_2cbc50:
    // 0x2cbc50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cbc50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc54: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2cbc58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2cbc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cbc5c: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2cbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2cbc60: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2cbc60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc64: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cbc64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbc68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbc6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBC6Cu;
    {
        const bool branch_taken_0x2cbc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC6Cu;
            // 0x2cbc70: 0x62600b  movn        $t4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc6c) {
            ctx->pc = 0x2CBC80u;
            goto label_2cbc80;
        }
    }
    ctx->pc = 0x2CBC74u;
    // 0x2cbc74: 0x0  nop
    ctx->pc = 0x2cbc74u;
    // NOP
label_2cbc78:
    // 0x2cbc78: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2cbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2cbc7c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2cbc80:
    // 0x2cbc80: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2cbc80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbc84: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x2cbc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbc88: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBC88u;
    {
        const bool branch_taken_0x2cbc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC88u;
            // 0x2cbc8c: 0x250bffff  addiu       $t3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc88) {
            ctx->pc = 0x2CBCD8u;
            goto label_2cbcd8;
        }
    }
    ctx->pc = 0x2CBC90u;
    // 0x2cbc90: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cbc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbc94: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cbc94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbc98: 0x144c0010  bne         $v0, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBC98u;
    {
        const bool branch_taken_0x2cbc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x2CBC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC98u;
            // 0x2cbc9c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc98) {
            ctx->pc = 0x2CBCDCu;
            goto label_2cbcdc;
        }
    }
    ctx->pc = 0x2CBCA0u;
    // 0x2cbca0: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x2cbca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2cbca4: 0x398300ff  xori        $v1, $t4, 0xFF
    ctx->pc = 0x2cbca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)255);
    // 0x2cbca8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cbca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cbcac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBCACu;
    {
        const bool branch_taken_0x2cbcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCACu;
            // 0x2cbcb0: 0x2c690001  sltiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcac) {
            ctx->pc = 0x2CBCC8u;
            goto label_2cbcc8;
        }
    }
    ctx->pc = 0x2CBCB4u;
    // 0x2cbcb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBCB4u;
    {
        const bool branch_taken_0x2cbcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcb4) {
            ctx->pc = 0x2CBCDCu;
            goto label_2cbcdc;
        }
    }
    ctx->pc = 0x2CBCBCu;
    // 0x2cbcbc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CBCBCu;
    {
        const bool branch_taken_0x2cbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCBCu;
            // 0x2cbcc0: 0x25470001  addiu       $a3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcbc) {
            ctx->pc = 0x2CBC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbc78;
        }
    }
    ctx->pc = 0x2CBCC4u;
    // 0x2cbcc4: 0x0  nop
    ctx->pc = 0x2cbcc4u;
    // NOP
label_2cbcc8:
    // 0x2cbcc8: 0x5120ffeb  beql        $t1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2CBCC8u;
    {
        const bool branch_taken_0x2cbcc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcc8) {
            ctx->pc = 0x2CBCCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCC8u;
            // 0x2cbccc: 0x25470001  addiu       $a3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbc78;
        }
    }
    ctx->pc = 0x2CBCD0u;
    // 0x2cbcd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBCD0u;
    {
        const bool branch_taken_0x2cbcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcd0) {
            ctx->pc = 0x2CBCDCu;
            goto label_2cbcdc;
        }
    }
    ctx->pc = 0x2CBCD8u;
label_2cbcd8:
    // 0x2cbcd8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cbcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbcdc:
    // 0x2cbcdc: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CBCDCu;
    SET_GPR_U32(ctx, 31, 0x2CBCE4u);
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCE4u; }
        if (ctx->pc != 0x2CBCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCE4u; }
        if (ctx->pc != 0x2CBCE4u) { return; }
    }
    ctx->pc = 0x2CBCE4u;
label_2cbce4:
    // 0x2cbce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCE8u;
            // 0x2cbcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBCF0u;
label_2cbcf0:
    // 0x2cbcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbcf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbcfc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cbcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cbd00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2cbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cbd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd08: 0x80b2e5e  j           func_2CB978
    ctx->pc = 0x2CBD08u;
    ctx->pc = 0x2CBD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD08u;
            // 0x2cbd0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB978u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2cb978;
    ctx->pc = 0x2CBD10u;
    // 0x2cbd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbd14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbd1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cbd20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cbd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd28: 0x80b2c2a  j           func_2CB0A8
    ctx->pc = 0x2CBD28u;
    ctx->pc = 0x2CBD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD28u;
            // 0x2cbd2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB0A8u;
    if (runtime->hasFunction(0x2CB0A8u)) {
        auto targetFn = runtime->lookupFunction(0x2CB0A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CB0A8_0x2cb0a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CBD30u;
label_2cbd30:
    // 0x2cbd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbd34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbd3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cbd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cbd40: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2cbd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cbd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd48: 0x80b2ca2  j           func_2CB288
    ctx->pc = 0x2CBD48u;
    ctx->pc = 0x2CBD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD48u;
            // 0x2cbd4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB288u;
    if (runtime->hasFunction(0x2CB288u)) {
        auto targetFn = runtime->lookupFunction(0x2CB288u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CB288_0x2cb288(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CBD50u;
label_2cbd50:
    // 0x2cbd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD58u;
            // 0x2cbd5c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBD60u;
label_2cbd60:
    // 0x2cbd60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cbd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd68: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2cbd6c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBD6Cu;
    {
        const bool branch_taken_0x2cbd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CBD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD6Cu;
            // 0x2cbd70: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd6c) {
            ctx->pc = 0x2CBD84u;
            goto label_2cbd84;
        }
    }
    ctx->pc = 0x2CBD74u;
    // 0x2cbd74: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2cbd78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd7c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cbd7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cbd80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2cbd80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2cbd84:
    // 0x2cbd84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBD8Cu;
    // 0x2cbd8c: 0x0  nop
    ctx->pc = 0x2cbd8cu;
    // NOP
label_2cbd90:
    // 0x2cbd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbd94: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2cbd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD98u;
    {
        const bool branch_taken_0x2cbd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD98u;
            // 0x2cbd9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd98) {
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBDA0u;
    // 0x2cbda0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cbda4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBDA4u;
    {
        const bool branch_taken_0x2cbda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDA4u;
            // 0x2cbda8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbda4) {
            ctx->pc = 0x2CBDC0u;
            goto label_2cbdc0;
        }
    }
    ctx->pc = 0x2CBDACu;
label_2cbdac:
    // 0x2cbdac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbdb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDB4u;
            // 0x2cbdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBDBCu;
    // 0x2cbdbc: 0x0  nop
    ctx->pc = 0x2cbdbcu;
    // NOP
label_2cbdc0:
    // 0x2cbdc0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cbdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbdc4: 0x80b266e  j           func_2C99B8
    ctx->pc = 0x2CBDC4u;
    ctx->pc = 0x2CBDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDC4u;
            // 0x2cbdc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CBDCCu;
    // 0x2cbdcc: 0x0  nop
    ctx->pc = 0x2cbdccu;
    // NOP
label_2cbdd0:
    // 0x2cbdd0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cbdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbdd8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2cbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2cbddc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBDDCu;
    {
        const bool branch_taken_0x2cbddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CBDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDDCu;
            // 0x2cbde0: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbddc) {
            ctx->pc = 0x2CBDF8u;
            goto label_2cbdf8;
        }
    }
    ctx->pc = 0x2CBDE4u;
    // 0x2cbde4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2cbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2cbde8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cbdecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cbdf0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2cbdf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cbdf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2cbdf8:
    // 0x2cbdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBE00u;
label_2cbe00:
    // 0x2cbe00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbe04: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2cbe04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbe0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbe0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CBE10u;
    {
        const bool branch_taken_0x2cbe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE10u;
            // 0x2cbe14: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe10) {
            ctx->pc = 0x2CBE3Cu;
            goto label_2cbe3c;
        }
    }
    ctx->pc = 0x2CBE18u;
    // 0x2cbe18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cbe1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBE1Cu;
    {
        const bool branch_taken_0x2cbe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE1Cu;
            // 0x2cbe20: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe1c) {
            ctx->pc = 0x2CBE30u;
            goto label_2cbe30;
        }
    }
    ctx->pc = 0x2CBE24u;
    // 0x2cbe24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBE24u;
    {
        const bool branch_taken_0x2cbe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE24u;
            // 0x2cbe28: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe24) {
            ctx->pc = 0x2CBE34u;
            goto label_2cbe34;
        }
    }
    ctx->pc = 0x2CBE2Cu;
    // 0x2cbe2c: 0x0  nop
    ctx->pc = 0x2cbe2cu;
    // NOP
label_2cbe30:
    // 0x2cbe30: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x2cbe30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_2cbe34:
    // 0x2cbe34: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CBE34u;
    SET_GPR_U32(ctx, 31, 0x2CBE3Cu);
    ctx->pc = 0x2CBE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE34u;
            // 0x2cbe38: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (runtime->hasFunction(0x2C99B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C99B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE3Cu; }
        if (ctx->pc != 0x2CBE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C99B8_0x2c99b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE3Cu; }
        if (ctx->pc != 0x2CBE3Cu) { return; }
    }
    ctx->pc = 0x2CBE3Cu;
label_2cbe3c:
    // 0x2cbe3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbe40: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE40u;
            // 0x2cbe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBE48u;
    ctx->pc = 0x2cbe48u;
}

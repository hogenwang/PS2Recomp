#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127FE0
// Address: 0x127fe0 - 0x128170
void sub_00127FE0_0x127fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127FE0_0x127fe0");
#endif

    switch (ctx->pc) {
        case 0x128020u: goto label_128020;
        case 0x128098u: goto label_128098;
        case 0x1280bcu: goto label_1280bc;
        case 0x128134u: goto label_128134;
        default: break;
    }

    ctx->pc = 0x127fe0u;

    // 0x127fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127fec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127ff0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ff4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127ff8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127ffc: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x127ffcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x128000: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x128000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x128004: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x128004u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128008: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x128008u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12800c: 0x28f8821  addu        $s1, $s4, $t7
    ctx->pc = 0x12800cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x128010: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x128010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x128014: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128018: 0xc049dd6  jal         func_127758
    ctx->pc = 0x128018u;
    SET_GPR_U32(ctx, 31, 0x128020u);
    ctx->pc = 0x12801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128018u;
            // 0x12801c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127758u;
    if (runtime->hasFunction(0x127758u)) {
        auto targetFn = runtime->lookupFunction(0x127758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128020u; }
        if (ctx->pc != 0x128020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127758_0x127758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128020u; }
        if (ctx->pc != 0x128020u) { return; }
    }
    ctx->pc = 0x128020u;
label_128020:
    // 0x128020: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x128020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x128024: 0x284e000b  slti        $t6, $v0, 0xB
    ctx->pc = 0x128024u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x128028: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x128028u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12802c: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x12802Cu;
    {
        const bool branch_taken_0x12802c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x128030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12802Cu;
            // 0x128030: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12802c) {
            ctx->pc = 0x1280BCu;
            goto label_1280bc;
        }
    }
    ctx->pc = 0x128034u;
    // 0x128034: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x128038: 0x3c0e3ff0  lui         $t6, 0x3FF0
    ctx->pc = 0x128038u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16368 << 16));
    // 0x12803c: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x12803cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x128040: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x128040u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x128044: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x128044u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x128048: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x128048u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12804c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12804cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x128050: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x128050u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x128054: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128058: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x128058u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12805c: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x12805Cu;
    {
        const bool branch_taken_0x12805c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x128060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12805Cu;
            // 0x128060: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12805c) {
            ctx->pc = 0x128068u;
            goto label_128068;
        }
    }
    ctx->pc = 0x128064u;
    // 0x128064: 0x8e2cfffc  lw          $t4, -0x4($s1)
    ctx->pc = 0x128064u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_128068:
    // 0x128068: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x128068u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12806c: 0x244f0015  addiu       $t7, $v0, 0x15
    ctx->pc = 0x12806cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x128070: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x128070u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x128074: 0x1f37804  sllv        $t7, $s3, $t7
    ctx->pc = 0x128074u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x128078: 0x1cc7006  srlv        $t6, $t4, $t6
    ctx->pc = 0x128078u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x12807c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128080: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x128080u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x128084: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x128084u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x128088: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128088u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12808c: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x12808cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x128090: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x128090u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x128094: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x128094u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
label_128098:
    // 0x128098: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12809c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12809cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1280a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1280a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1280a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1280a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1280a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1280a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1280ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1280b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1280b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1280b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1280B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1280B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280B4u;
            // 0x1280b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1280BCu;
label_1280bc:
    // 0x1280bc: 0x291782b  sltu        $t7, $s4, $s1
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1280c0: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1280C0u;
    {
        const bool branch_taken_0x1280c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280C0u;
            // 0x1280c4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280c0) {
            ctx->pc = 0x1280D0u;
            goto label_1280d0;
        }
    }
    ctx->pc = 0x1280C8u;
    // 0x1280c8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1280c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1280cc: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1280d0:
    // 0x1280d0: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
    // 0x1280d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1280D4u;
    {
        const bool branch_taken_0x1280d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280D4u;
            // 0x1280d8: 0x27823  negu        $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280d4) {
            ctx->pc = 0x12813Cu;
            goto label_12813c;
        }
    }
    ctx->pc = 0x1280DCu;
    // 0x1280dc: 0x537004  sllv        $t6, $s3, $v0
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1280e0: 0x1ec7806  srlv        $t7, $t4, $t7
    ctx->pc = 0x1280e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 15) & 0x1F));
    // 0x1280e4: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x1280e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1280e8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1280e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1280ec: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1280ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1280f0: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x1280f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x1280f4: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x1280f4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1280f8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1280f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1280fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1280fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128100: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x128100u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x128104: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x128104u;
    {
        const bool branch_taken_0x128104 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x128108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128104u;
            // 0x128108: 0x24e9025  or          $s2, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128104) {
            ctx->pc = 0x128110u;
            goto label_128110;
        }
    }
    ctx->pc = 0x12810Cu;
    // 0x12810c: 0x8e33fffc  lw          $s3, -0x4($s1)
    ctx->pc = 0x12810cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_128110:
    // 0x128110: 0x27823  negu        $t7, $v0
    ctx->pc = 0x128110u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x128114: 0x4c7004  sllv        $t6, $t4, $v0
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x128118: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x128118u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x12811c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12811cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128120: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x128120u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x128124: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x128124u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x128128: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x128128u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12812c: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x128130: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x128130u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
label_128134:
    // 0x128134: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x128134u;
    {
        const bool branch_taken_0x128134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128134u;
            // 0x128138: 0x24e9025  or          $s2, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128134) {
            ctx->pc = 0x128098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128098;
        }
    }
    ctx->pc = 0x12813Cu;
label_12813c:
    // 0x12813c: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x12813cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x128140: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x128140u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x128144: 0x26f7825  or          $t7, $s3, $t7
    ctx->pc = 0x128144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) | GPR_U64(ctx, 15));
    // 0x128148: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x128148u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12814c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12814cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128150: 0xc703c  dsll32      $t6, $t4, 0
    ctx->pc = 0x128150u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << (32 + 0));
    // 0x128154: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x128154u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
    // 0x128158: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x128158u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12815c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12815cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128160: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128160u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128164: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x128164u;
    {
        const bool branch_taken_0x128164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128164u;
            // 0x128168: 0x24f9024  and         $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128164) {
            ctx->pc = 0x128134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128134;
        }
    }
    ctx->pc = 0x12816Cu;
    // 0x12816c: 0x0  nop
    ctx->pc = 0x12816cu;
    // NOP
    ctx->pc = 0x128170u;
}

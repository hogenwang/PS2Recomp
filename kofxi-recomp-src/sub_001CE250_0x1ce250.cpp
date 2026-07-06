#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE250
// Address: 0x1ce250 - 0x1ce350
void sub_001CE250_0x1ce250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE250_0x1ce250");
#endif

    switch (ctx->pc) {
        case 0x1ce2a8u: goto label_1ce2a8;
        case 0x1ce2d8u: goto label_1ce2d8;
        case 0x1ce314u: goto label_1ce314;
        default: break;
    }

    ctx->pc = 0x1ce250u;

    // 0x1ce250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce254: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1ce254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ce258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce25c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ce25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce264: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ce264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce268: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce26c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ce26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce274: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1ce274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ce278: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CE278u;
    {
        const bool branch_taken_0x1ce278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE278u;
            // 0x1ce27c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce278) {
            ctx->pc = 0x1CE2A8u;
            goto label_1ce2a8;
        }
    }
    ctx->pc = 0x1CE280u;
    // 0x1ce280: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce28c: 0x2484bf08  addiu       $a0, $a0, -0x40F8
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950664));
    // 0x1ce290: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce294: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce29c: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1CE29Cu;
    ctx->pc = 0x1CE2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE29Cu;
            // 0x1ce2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (runtime->hasFunction(0x1CDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CE2A4u;
    // 0x1ce2a4: 0x0  nop
    ctx->pc = 0x1ce2a4u;
    // NOP
label_1ce2a8:
    // 0x1ce2a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CE2A8u;
    {
        const bool branch_taken_0x1ce2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2A8u;
            // 0x1ce2ac: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2a8) {
            ctx->pc = 0x1CE2D8u;
            goto label_1ce2d8;
        }
    }
    ctx->pc = 0x1CE2B0u;
    // 0x1ce2b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce2bc: 0x2484bf30  addiu       $a0, $a0, -0x40D0
    ctx->pc = 0x1ce2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950704));
    // 0x1ce2c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce2c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2cc: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1CE2CCu;
    ctx->pc = 0x1CE2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2CCu;
            // 0x1ce2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (runtime->hasFunction(0x1CDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CE2D4u;
    // 0x1ce2d4: 0x0  nop
    ctx->pc = 0x1ce2d4u;
    // NOP
label_1ce2d8:
    // 0x1ce2d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ce2dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ce2e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce2e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ce2e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ce2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ce2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ce2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce2f0: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1ce2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1ce2f4: 0x26107d60  addiu       $s0, $s0, 0x7D60
    ctx->pc = 0x1ce2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32096));
    // 0x1ce2f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ce2fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce300: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE300u;
    {
        const bool branch_taken_0x1ce300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce300) {
            ctx->pc = 0x1CE304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE300u;
            // 0x1ce304: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE318u;
            goto label_1ce318;
        }
    }
    ctx->pc = 0x1CE308u;
    // 0x1ce308: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce30c: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1CE30Cu;
    SET_GPR_U32(ctx, 31, 0x1CE314u);
    ctx->pc = 0x1CE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE30Cu;
            // 0x1ce310: 0x2484bf58  addiu       $a0, $a0, -0x40A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (runtime->hasFunction(0x1CDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE314u; }
        if (ctx->pc != 0x1CE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD20_0x1cdd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE314u; }
        if (ctx->pc != 0x1CE314u) { return; }
    }
    ctx->pc = 0x1CE314u;
label_1ce314:
    // 0x1ce314: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1ce314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1ce318:
    // 0x1ce318: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE318u;
    {
        const bool branch_taken_0x1ce318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE318u;
            // 0x1ce31c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce318) {
            ctx->pc = 0x1CE328u;
            goto label_1ce328;
        }
    }
    ctx->pc = 0x1CE320u;
    // 0x1ce320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE320u;
    {
        const bool branch_taken_0x1ce320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE320u;
            // 0x1ce324: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce320) {
            ctx->pc = 0x1CE334u;
            goto label_1ce334;
        }
    }
    ctx->pc = 0x1CE328u;
label_1ce328:
    // 0x1ce328: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ce32c: 0x2442be88  addiu       $v0, $v0, -0x4178
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950536));
    // 0x1ce330: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ce330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1ce334:
    // 0x1ce334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce33c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce33cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce340: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce348: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE348u;
            // 0x1ce34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE350u;
    ctx->pc = 0x1ce350u;
}

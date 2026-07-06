#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD038
// Address: 0x1cd038 - 0x1cd1b0
void sub_001CD038_0x1cd038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD038_0x1cd038");
#endif

    switch (ctx->pc) {
        case 0x1cd080u: goto label_1cd080;
        case 0x1cd090u: goto label_1cd090;
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd19cu: goto label_1cd19c;
        default: break;
    }

    ctx->pc = 0x1cd038u;

    // 0x1cd038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd03c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cd03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cd040: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cd040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd04c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cd04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd050: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cd050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cd054: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cd054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cd058: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cd058u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd05c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd060: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cd064: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1cd064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1cd068: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1cd068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1cd06c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd070: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cd074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd078: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CD078u;
    {
        const bool branch_taken_0x1cd078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD078u;
            // 0x1cd07c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd078) {
            ctx->pc = 0x1CD0A8u;
            goto label_1cd0a8;
        }
    }
    ctx->pc = 0x1CD080u;
label_1cd080:
    // 0x1cd080: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD080u;
    {
        const bool branch_taken_0x1cd080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd080) {
            ctx->pc = 0x1CD098u;
            goto label_1cd098;
        }
    }
    ctx->pc = 0x1CD088u;
    // 0x1cd088: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1CD088u;
    SET_GPR_U32(ctx, 31, 0x1CD090u);
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD090u; }
        if (ctx->pc != 0x1CD090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD090u; }
        if (ctx->pc != 0x1CD090u) { return; }
    }
    ctx->pc = 0x1CD090u;
label_1cd090:
    // 0x1cd090: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CD090u;
    {
        const bool branch_taken_0x1cd090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd090) {
            ctx->pc = 0x1CD094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD090u;
            // 0x1cd094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD0E8u;
            goto label_1cd0e8;
        }
    }
    ctx->pc = 0x1CD098u;
label_1cd098:
    // 0x1cd098: 0xc0733bc  jal         func_1CCEF0
    ctx->pc = 0x1CD098u;
    SET_GPR_U32(ctx, 31, 0x1CD0A0u);
    ctx->pc = 0x1CD09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD098u;
            // 0x1cd09c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEF0u;
    if (runtime->hasFunction(0x1CCEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0A0u; }
        if (ctx->pc != 0x1CD0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCEF0_0x1ccef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0A0u; }
        if (ctx->pc != 0x1CD0A0u) { return; }
    }
    ctx->pc = 0x1CD0A0u;
label_1cd0a0:
    // 0x1cd0a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1cd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cd0a4: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1cd0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1cd0a8:
    // 0x1cd0a8: 0x214882b  sltu        $s1, $s0, $s4
    ctx->pc = 0x1cd0a8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1cd0ac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD0ACu;
    {
        const bool branch_taken_0x1cd0ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0ACu;
            // 0x1cd0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0ac) {
            ctx->pc = 0x1CD0E0u;
            goto label_1cd0e0;
        }
    }
    ctx->pc = 0x1CD0B4u;
    // 0x1cd0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cd0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0bc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1CD0BCu;
    SET_GPR_U32(ctx, 31, 0x1CD0C4u);
    ctx->pc = 0x1CD0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0BCu;
            // 0x1cd0c0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C4u; }
        if (ctx->pc != 0x1CD0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C4u; }
        if (ctx->pc != 0x1CD0C4u) { return; }
    }
    ctx->pc = 0x1CD0C4u;
label_1cd0c4:
    // 0x1cd0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CD0CCu;
    {
        const bool branch_taken_0x1cd0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0CCu;
            // 0x1cd0d0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0cc) {
            ctx->pc = 0x1CD080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd080;
        }
    }
    ctx->pc = 0x1CD0D4u;
    // 0x1cd0d4: 0xc073400  jal         func_1CD000
    ctx->pc = 0x1CD0D4u;
    SET_GPR_U32(ctx, 31, 0x1CD0DCu);
    ctx->pc = 0x1CD0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0D4u;
            // 0x1cd0d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD000u;
    if (runtime->hasFunction(0x1CD000u)) {
        auto targetFn = runtime->lookupFunction(0x1CD000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0DCu; }
        if (ctx->pc != 0x1CD0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD000_0x1cd000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0DCu; }
        if (ctx->pc != 0x1CD0DCu) { return; }
    }
    ctx->pc = 0x1CD0DCu;
label_1cd0dc:
    // 0x1cd0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cd0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0e0:
    // 0x1cd0e0: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x1cd0e0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1cd0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd0e8:
    // 0x1cd0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd0ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd0ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd0f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cd0f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd0f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cd0f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd0f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cd0f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cd0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd100: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD100u;
            // 0x1cd104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD108u;
label_1cd108:
    // 0x1cd108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd10c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd114: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd118: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd11c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd120: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd124: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd128: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd130: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1cd130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1cd134: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cd134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd138: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd13c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cd140: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD140u;
    SET_GPR_U32(ctx, 31, 0x1CD148u);
    ctx->pc = 0x1CD144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD140u;
            // 0x1cd144: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD148u; }
        if (ctx->pc != 0x1CD148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD148u; }
        if (ctx->pc != 0x1CD148u) { return; }
    }
    ctx->pc = 0x1CD148u;
label_1cd148:
    // 0x1cd148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd14c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd154: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD154u;
            // 0x1cd158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD15Cu;
    // 0x1cd15c: 0x0  nop
    ctx->pc = 0x1cd15cu;
    // NOP
label_1cd160:
    // 0x1cd160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd164: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd16c: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd170: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd174: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd178: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd17c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd180: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd188: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd18c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cd190: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd194: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD194u;
    SET_GPR_U32(ctx, 31, 0x1CD19Cu);
    ctx->pc = 0x1CD198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD194u;
            // 0x1cd198: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD19Cu; }
        if (ctx->pc != 0x1CD19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD19Cu; }
        if (ctx->pc != 0x1CD19Cu) { return; }
    }
    ctx->pc = 0x1CD19Cu;
label_1cd19c:
    // 0x1cd19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd1a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1A8u;
            // 0x1cd1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD1B0u;
    ctx->pc = 0x1cd1b0u;
}

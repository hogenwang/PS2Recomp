#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC200
// Address: 0x1dc200 - 0x1dc2b0
void sub_001DC200_0x1dc200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC200_0x1dc200");
#endif

    switch (ctx->pc) {
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc290u: goto label_1dc290;
        default: break;
    }

    ctx->pc = 0x1dc200u;

    // 0x1dc200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dc210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dc218: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dc218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc21c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC21Cu;
    {
        const bool branch_taken_0x1dc21c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC21Cu;
            // 0x1dc220: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc21c) {
            ctx->pc = 0x1DC240u;
            goto label_1dc240;
        }
    }
    ctx->pc = 0x1DC224u;
    // 0x1dc224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc228: 0xc0770ac  jal         func_1DC2B0
    ctx->pc = 0x1DC228u;
    SET_GPR_U32(ctx, 31, 0x1DC230u);
    ctx->pc = 0x1DC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC228u;
            // 0x1dc22c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2B0u;
    if (runtime->hasFunction(0x1DC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC230u; }
        if (ctx->pc != 0x1DC230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2B0_0x1dc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC230u; }
        if (ctx->pc != 0x1DC230u) { return; }
    }
    ctx->pc = 0x1DC230u;
label_1dc230:
    // 0x1dc230: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dc230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dc234: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DC234u;
    {
        const bool branch_taken_0x1dc234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC234u;
            // 0x1dc238: 0x24438080  addiu       $v1, $v0, -0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc234) {
            ctx->pc = 0x1DC274u;
            goto label_1dc274;
        }
    }
    ctx->pc = 0x1DC23Cu;
    // 0x1dc23c: 0x0  nop
    ctx->pc = 0x1dc23cu;
    // NOP
label_1dc240:
    // 0x1dc240: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1DC240u;
    SET_GPR_U32(ctx, 31, 0x1DC248u);
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC248u; }
        if (ctx->pc != 0x1DC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC248u; }
        if (ctx->pc != 0x1DC248u) { return; }
    }
    ctx->pc = 0x1DC248u;
label_1dc248:
    // 0x1dc248: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1dc24c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC24Cu;
    {
        const bool branch_taken_0x1dc24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC24Cu;
            // 0x1dc250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc24c) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC254u;
    // 0x1dc254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc258: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x1dc258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x1dc25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dc260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dc264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc268: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1DC268u;
    ctx->pc = 0x1DC26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC268u;
            // 0x1dc26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_1dc274:
    // 0x1dc274: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1dc278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc284: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1dc284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1dc288: 0xc07711c  jal         func_1DC470
    ctx->pc = 0x1DC288u;
    SET_GPR_U32(ctx, 31, 0x1DC290u);
    ctx->pc = 0x1DC28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC288u;
            // 0x1dc28c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC470u;
    if (runtime->hasFunction(0x1DC470u)) {
        auto targetFn = runtime->lookupFunction(0x1DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC290u; }
        if (ctx->pc != 0x1DC290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC470_0x1dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC290u; }
        if (ctx->pc != 0x1DC290u) { return; }
    }
    ctx->pc = 0x1DC290u;
label_1dc290:
    // 0x1dc290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc29c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dc29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc2a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2A4u;
            // 0x1dc2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2ACu;
    // 0x1dc2ac: 0x0  nop
    ctx->pc = 0x1dc2acu;
    // NOP
    ctx->pc = 0x1dc2b0u;
}

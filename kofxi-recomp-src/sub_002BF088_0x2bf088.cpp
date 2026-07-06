#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF088
// Address: 0x2bf088 - 0x2bf0f8
void sub_002BF088_0x2bf088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF088_0x2bf088");
#endif

    switch (ctx->pc) {
        case 0x2bf0b4u: goto label_2bf0b4;
        default: break;
    }

    ctx->pc = 0x2bf088u;

    // 0x2bf088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf08c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bf094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf09c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF09Cu;
    {
        const bool branch_taken_0x2bf09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF09Cu;
            // 0x2bf0a0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf09c) {
            ctx->pc = 0x2BF0ACu;
            goto label_2bf0ac;
        }
    }
    ctx->pc = 0x2BF0A4u;
    // 0x2bf0a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BF0A4u;
    {
        const bool branch_taken_0x2bf0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0A4u;
            // 0x2bf0a8: 0x24112721  addiu       $s1, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0a4) {
            ctx->pc = 0x2BF0DCu;
            goto label_2bf0dc;
        }
    }
    ctx->pc = 0x2BF0ACu;
label_2bf0ac:
    // 0x2bf0ac: 0xc0adc34  jal         func_2B70D0
    ctx->pc = 0x2BF0ACu;
    SET_GPR_U32(ctx, 31, 0x2BF0B4u);
    ctx->pc = 0x2B70D0u;
    if (runtime->hasFunction(0x2B70D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0B4u; }
        if (ctx->pc != 0x2BF0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70D0_0x2b70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0B4u; }
        if (ctx->pc != 0x2BF0B4u) { return; }
    }
    ctx->pc = 0x2BF0B4u;
label_2bf0b4:
    // 0x2bf0b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf0b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bf0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf0bc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF0BCu;
    {
        const bool branch_taken_0x2bf0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf0bc) {
            ctx->pc = 0x2BF0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0BCu;
            // 0x2bf0c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0CCu;
            goto label_2bf0cc;
        }
    }
    ctx->pc = 0x2BF0C4u;
    // 0x2bf0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF0C4u;
    {
        const bool branch_taken_0x2bf0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0C4u;
            // 0x2bf0c8: 0x24112723  addiu       $s1, $zero, 0x2723 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0c4) {
            ctx->pc = 0x2BF0DCu;
            goto label_2bf0dc;
        }
    }
    ctx->pc = 0x2BF0CCu;
label_2bf0cc:
    // 0x2bf0cc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2bf0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2bf0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bf0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bf0d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bf0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bf0d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2bf0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2bf0dc:
    // 0x2bf0dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf0e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0ECu;
            // 0x2bf0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF0F4u;
    // 0x2bf0f4: 0x0  nop
    ctx->pc = 0x2bf0f4u;
    // NOP
    ctx->pc = 0x2bf0f8u;
}

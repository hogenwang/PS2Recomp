#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6418
// Address: 0x1c6418 - 0x1c6478
void sub_001C6418_0x1c6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6418_0x1c6418");
#endif

    switch (ctx->pc) {
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6454u: goto label_1c6454;
        default: break;
    }

    ctx->pc = 0x1c6418u;

    // 0x1c6418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c641c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c6420: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6428: 0x2450f1d0  addiu       $s0, $v0, -0xE30
    ctx->pc = 0x1c6428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963664));
    // 0x1c642c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6430: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c6430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c6434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6438: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c6438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c643c: 0x0  nop
    ctx->pc = 0x1c643cu;
    // NOP
label_1c6440:
    // 0x1c6440: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c6440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6444: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6444u;
    {
        const bool branch_taken_0x1c6444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c6444) {
            ctx->pc = 0x1C6448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6444u;
            // 0x1c6448: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6458u;
            goto label_1c6458;
        }
    }
    ctx->pc = 0x1C644Cu;
    // 0x1c644c: 0xc071bfe  jal         func_1C6FF8
    ctx->pc = 0x1C644Cu;
    SET_GPR_U32(ctx, 31, 0x1C6454u);
    ctx->pc = 0x1C6450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C644Cu;
            // 0x1c6450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FF8u;
    if (runtime->hasFunction(0x1C6FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6454u; }
        if (ctx->pc != 0x1C6454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6FF8_0x1c6ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6454u; }
        if (ctx->pc != 0x1C6454u) { return; }
    }
    ctx->pc = 0x1C6454u;
label_1c6454:
    // 0x1c6454: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c6454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c6458:
    // 0x1c6458: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C6458u;
    {
        const bool branch_taken_0x1c6458 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6458u;
            // 0x1c645c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6458) {
            ctx->pc = 0x1C6440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6440;
        }
    }
    ctx->pc = 0x1C6460u;
    // 0x1c6460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c646c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c646cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6470: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6470u;
            // 0x1c6474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6478u;
    ctx->pc = 0x1c6478u;
}

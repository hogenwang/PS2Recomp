#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351300
// Address: 0x351300 - 0x351390
void sub_00351300_0x351300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351300_0x351300");
#endif

    switch (ctx->pc) {
        case 0x351310u: goto label_351310;
        case 0x351324u: goto label_351324;
        default: break;
    }

    ctx->pc = 0x351300u;

    // 0x351300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351308: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x351308u;
    SET_GPR_U32(ctx, 31, 0x351310u);
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351310u; }
        if (ctx->pc != 0x351310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351310u; }
        if (ctx->pc != 0x351310u) { return; }
    }
    ctx->pc = 0x351310u;
label_351310:
    // 0x351310: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x351314: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351318: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x351318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x35131c: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x35131Cu;
    SET_GPR_U32(ctx, 31, 0x351324u);
    ctx->pc = 0x351320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35131Cu;
            // 0x351320: 0x27a7001f  addiu       $a3, $sp, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (runtime->hasFunction(0x2ED2F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351324u; }
        if (ctx->pc != 0x351324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED2F0_0x2ed2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351324u; }
        if (ctx->pc != 0x351324u) { return; }
    }
    ctx->pc = 0x351324u;
label_351324:
    // 0x351324: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x351324u;
    {
        const bool branch_taken_0x351324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351324) {
            ctx->pc = 0x351328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351324u;
            // 0x351328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35137Cu;
            goto label_35137c;
        }
    }
    ctx->pc = 0x35132Cu;
    // 0x35132c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351330: 0x93a3001f  lbu         $v1, 0x1F($sp)
    ctx->pc = 0x351330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x351334: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x351334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351338: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x351338u;
    {
        const bool branch_taken_0x351338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x351338) {
            ctx->pc = 0x351378u;
            goto label_351378;
        }
    }
    ctx->pc = 0x351340u;
    // 0x351340: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351344: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351348: 0x90459488  lbu         $a1, -0x6B78($v0)
    ctx->pc = 0x351348u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939784)));
    // 0x35134c: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x351350: 0x93a60018  lbu         $a2, 0x18($sp)
    ctx->pc = 0x351350u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x351354: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x351354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x351358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35135c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x35135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351360: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x351364: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351368: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x351368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35136c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x351370u;
    {
        const bool branch_taken_0x351370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351370u;
            // 0x351374: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351370) {
            ctx->pc = 0x35137Cu;
            goto label_35137c;
        }
    }
    ctx->pc = 0x351378u;
label_351378:
    // 0x351378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35137c:
    // 0x35137c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351380: 0x3e00008  jr          $ra
    ctx->pc = 0x351380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351380u;
            // 0x351384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351388u;
    // 0x351388: 0x0  nop
    ctx->pc = 0x351388u;
    // NOP
    // 0x35138c: 0x0  nop
    ctx->pc = 0x35138cu;
    // NOP
    ctx->pc = 0x351390u;
}

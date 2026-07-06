#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C62E8
// Address: 0x1c62e8 - 0x1c63b0
void sub_001C62E8_0x1c62e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C62E8_0x1c62e8");
#endif

    switch (ctx->pc) {
        case 0x1c6318u: goto label_1c6318;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c6358u: goto label_1c6358;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c638cu: goto label_1c638c;
        case 0x1c6398u: goto label_1c6398;
        default: break;
    }

    ctx->pc = 0x1c62e8u;

    // 0x1c62e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c62e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c62ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c62f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c62f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62f4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C62F4u;
    {
        const bool branch_taken_0x1c62f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C62F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62F4u;
            // 0x1c62f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62f4) {
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C62FCu;
    // 0x1c62fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6304: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6308: 0x2484a6f8  addiu       $a0, $a0, -0x5908
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944504));
    // 0x1c630c: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C630Cu;
    ctx->pc = 0x1C6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C630Cu;
            // 0x1c6310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C6314u;
    // 0x1c6314: 0x0  nop
    ctx->pc = 0x1c6314u;
    // NOP
label_1c6318:
    // 0x1c6318: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1c6318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c631c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C631Cu;
    {
        const bool branch_taken_0x1c631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c631c) {
            ctx->pc = 0x1C6320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C631Cu;
            // 0x1c6320: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6360u;
            goto label_1c6360;
        }
    }
    ctx->pc = 0x1C6324u;
    // 0x1c6324: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6328: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6328u;
    {
        const bool branch_taken_0x1c6328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C632Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6328u;
            // 0x1c632c: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6328) {
            ctx->pc = 0x1C634Cu;
            goto label_1c634c;
        }
    }
    ctx->pc = 0x1C6330u;
    // 0x1c6330: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c6334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6338: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6338u;
    {
        const bool branch_taken_0x1c6338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6338) {
            ctx->pc = 0x1C633Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6338u;
            // 0x1c633c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6350u;
            goto label_1c6350;
        }
    }
    ctx->pc = 0x1C6340u;
    // 0x1c6340: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1C6340u;
    SET_GPR_U32(ctx, 31, 0x1C6348u);
    ctx->pc = 0x1B6F30u;
    if (runtime->hasFunction(0x1B6F30u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6348u; }
        if (ctx->pc != 0x1C6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F30_0x1b6f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6348u; }
        if (ctx->pc != 0x1C6348u) { return; }
    }
    ctx->pc = 0x1C6348u;
label_1c6348:
    // 0x1c6348: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c6348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c634c:
    // 0x1c634c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c634cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c6350:
    // 0x1c6350: 0xc07186c  jal         func_1C61B0
    ctx->pc = 0x1C6350u;
    SET_GPR_U32(ctx, 31, 0x1C6358u);
    ctx->pc = 0x1C6354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6350u;
            // 0x1c6354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C61B0u;
    if (runtime->hasFunction(0x1C61B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C61B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6358u; }
        if (ctx->pc != 0x1C6358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C61B0_0x1c61b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6358u; }
        if (ctx->pc != 0x1C6358u) { return; }
    }
    ctx->pc = 0x1C6358u;
label_1c6358:
    // 0x1c6358: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c6358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c635c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c635cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6360:
    // 0x1c6360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6364: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6364u;
            // 0x1c6368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C636Cu;
    // 0x1c636c: 0x0  nop
    ctx->pc = 0x1c636cu;
    // NOP
label_1c6370:
    // 0x1c6370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c637c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6384: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6384u;
    SET_GPR_U32(ctx, 31, 0x1C638Cu);
    ctx->pc = 0x1C6388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6384u;
            // 0x1c6388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C638Cu; }
        if (ctx->pc != 0x1C638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C638Cu; }
        if (ctx->pc != 0x1C638Cu) { return; }
    }
    ctx->pc = 0x1C638Cu;
label_1c638c:
    // 0x1c638c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6390: 0xc0718ec  jal         func_1C63B0
    ctx->pc = 0x1C6390u;
    SET_GPR_U32(ctx, 31, 0x1C6398u);
    ctx->pc = 0x1C6394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6390u;
            // 0x1c6394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C63B0u;
    if (runtime->hasFunction(0x1C63B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6398u; }
        if (ctx->pc != 0x1C6398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C63B0_0x1c63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6398u; }
        if (ctx->pc != 0x1C6398u) { return; }
    }
    ctx->pc = 0x1C6398u;
label_1c6398:
    // 0x1c6398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c639c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c639cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c63a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c63a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c63a4: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C63A4u;
    ctx->pc = 0x1C63A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63A4u;
            // 0x1c63a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C63ACu;
    // 0x1c63ac: 0x0  nop
    ctx->pc = 0x1c63acu;
    // NOP
    ctx->pc = 0x1c63b0u;
}

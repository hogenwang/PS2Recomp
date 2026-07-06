#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E62E0
// Address: 0x1e62e0 - 0x1e63a8
void sub_001E62E0_0x1e62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E62E0_0x1e62e0");
#endif

    switch (ctx->pc) {
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62ecu: goto label_1e62ec;
        case 0x1e62f0u: goto label_1e62f0;
        case 0x1e62f4u: goto label_1e62f4;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e62fcu: goto label_1e62fc;
        case 0x1e6300u: goto label_1e6300;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e630cu: goto label_1e630c;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e6314u: goto label_1e6314;
        case 0x1e6318u: goto label_1e6318;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6320u: goto label_1e6320;
        case 0x1e6324u: goto label_1e6324;
        case 0x1e6328u: goto label_1e6328;
        case 0x1e632cu: goto label_1e632c;
        case 0x1e6330u: goto label_1e6330;
        case 0x1e6334u: goto label_1e6334;
        case 0x1e6338u: goto label_1e6338;
        case 0x1e633cu: goto label_1e633c;
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6344u: goto label_1e6344;
        case 0x1e6348u: goto label_1e6348;
        case 0x1e634cu: goto label_1e634c;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6354u: goto label_1e6354;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e6360u: goto label_1e6360;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6368u: goto label_1e6368;
        case 0x1e636cu: goto label_1e636c;
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        default: break;
    }

    ctx->pc = 0x1e62e0u;

label_1e62e0:
    // 0x1e62e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e62e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e62e4:
    // 0x1e62e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e62e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e62e8:
    // 0x1e62e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e62e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e62ec:
    // 0x1e62ec: 0xc079a08  jal         func_1E6820
label_1e62f0:
    if (ctx->pc == 0x1E62F0u) {
        ctx->pc = 0x1E62F0u;
            // 0x1e62f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E62F4u;
        goto label_1e62f4;
    }
    ctx->pc = 0x1E62ECu;
    SET_GPR_U32(ctx, 31, 0x1E62F4u);
    ctx->pc = 0x1E62F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62ECu;
            // 0x1e62f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62F4u; }
        if (ctx->pc != 0x1E62F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62F4u; }
        if (ctx->pc != 0x1E62F4u) { return; }
    }
    ctx->pc = 0x1E62F4u;
label_1e62f4:
    // 0x1e62f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62f8:
    // 0x1e62f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1e62fc:
    if (ctx->pc == 0x1E62FCu) {
        ctx->pc = 0x1E62FCu;
            // 0x1e62fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6300u;
        goto label_1e6300;
    }
    ctx->pc = 0x1E62F8u;
    {
        const bool branch_taken_0x1e62f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E62FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62F8u;
            // 0x1e62fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62f8) {
            ctx->pc = 0x1E6308u;
            goto label_1e6308;
        }
    }
    ctx->pc = 0x1E6300u;
label_1e6300:
    // 0x1e6300: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6304:
    if (ctx->pc == 0x1E6304u) {
        ctx->pc = 0x1E6304u;
            // 0x1e6304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6308u;
        goto label_1e6308;
    }
    ctx->pc = 0x1E6300u;
    {
        const bool branch_taken_0x1e6300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6300u;
            // 0x1e6304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6300) {
            ctx->pc = 0x1E6330u;
            goto label_1e6330;
        }
    }
    ctx->pc = 0x1E6308u;
label_1e6308:
    // 0x1e6308: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e630c:
    // 0x1e630c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e6310:
    if (ctx->pc == 0x1E6310u) {
        ctx->pc = 0x1E6310u;
            // 0x1e6310: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1E6314u;
        goto label_1e6314;
    }
    ctx->pc = 0x1E630Cu;
    {
        const bool branch_taken_0x1e630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E630Cu;
            // 0x1e6310: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e630c) {
            ctx->pc = 0x1E632Cu;
            goto label_1e632c;
        }
    }
    ctx->pc = 0x1E6314u;
label_1e6314:
    // 0x1e6314: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1e6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1e6318:
    // 0x1e6318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e631c:
    if (ctx->pc == 0x1E631Cu) {
        ctx->pc = 0x1E631Cu;
            // 0x1e631c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6320u;
        goto label_1e6320;
    }
    ctx->pc = 0x1E6318u;
    {
        const bool branch_taken_0x1e6318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6318) {
            ctx->pc = 0x1E631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6318u;
            // 0x1e631c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6330u;
            goto label_1e6330;
        }
    }
    ctx->pc = 0x1E6320u;
label_1e6320:
    // 0x1e6320: 0x40f809  jalr        $v0
label_1e6324:
    if (ctx->pc == 0x1E6324u) {
        ctx->pc = 0x1E6328u;
        goto label_1e6328;
    }
    ctx->pc = 0x1E6320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6328u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6328u; }
            if (ctx->pc != 0x1E6328u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6328u;
label_1e6328:
    // 0x1e6328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e632c:
    // 0x1e632c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e632cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6330:
    // 0x1e6330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6334:
    // 0x1e6334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6338:
    // 0x1e6338: 0x3e00008  jr          $ra
label_1e633c:
    if (ctx->pc == 0x1E633Cu) {
        ctx->pc = 0x1E633Cu;
            // 0x1e633c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E6340u;
        goto label_1e6340;
    }
    ctx->pc = 0x1E6338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6338u;
            // 0x1e633c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6340u;
label_1e6340:
    // 0x1e6340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6344:
    // 0x1e6344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6348:
    // 0x1e6348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e634c:
    // 0x1e634c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6350:
    // 0x1e6350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6354:
    // 0x1e6354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e6358:
    // 0x1e6358: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e635c:
    // 0x1e635c: 0xc079a08  jal         func_1E6820
label_1e6360:
    if (ctx->pc == 0x1E6360u) {
        ctx->pc = 0x1E6360u;
            // 0x1e6360: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6364u;
        goto label_1e6364;
    }
    ctx->pc = 0x1E635Cu;
    SET_GPR_U32(ctx, 31, 0x1E6364u);
    ctx->pc = 0x1E6360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E635Cu;
            // 0x1e6360: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6364u; }
        if (ctx->pc != 0x1E6364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6364u; }
        if (ctx->pc != 0x1E6364u) { return; }
    }
    ctx->pc = 0x1E6364u;
label_1e6364:
    // 0x1e6364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6368:
    // 0x1e6368: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1e636c:
    if (ctx->pc == 0x1E636Cu) {
        ctx->pc = 0x1E636Cu;
            // 0x1e636c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E6370u;
        goto label_1e6370;
    }
    ctx->pc = 0x1E6368u;
    {
        const bool branch_taken_0x1e6368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6368) {
            ctx->pc = 0x1E636Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6368u;
            // 0x1e636c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6394u;
            goto label_1e6394;
        }
    }
    ctx->pc = 0x1E6370u;
label_1e6370:
    // 0x1e6370: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6374:
    // 0x1e6374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e6378:
    if (ctx->pc == 0x1E6378u) {
        ctx->pc = 0x1E6378u;
            // 0x1e6378: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1E637Cu;
        goto label_1e637c;
    }
    ctx->pc = 0x1E6374u;
    {
        const bool branch_taken_0x1e6374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6374u;
            // 0x1e6378: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6374) {
            ctx->pc = 0x1E6390u;
            goto label_1e6390;
        }
    }
    ctx->pc = 0x1E637Cu;
label_1e637c:
    // 0x1e637c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1e637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1e6380:
    // 0x1e6380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e6384:
    if (ctx->pc == 0x1E6384u) {
        ctx->pc = 0x1E6384u;
            // 0x1e6384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6388u;
        goto label_1e6388;
    }
    ctx->pc = 0x1E6380u;
    {
        const bool branch_taken_0x1e6380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6380u;
            // 0x1e6384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6380) {
            ctx->pc = 0x1E6390u;
            goto label_1e6390;
        }
    }
    ctx->pc = 0x1E6388u;
label_1e6388:
    // 0x1e6388: 0x40f809  jalr        $v0
label_1e638c:
    if (ctx->pc == 0x1E638Cu) {
        ctx->pc = 0x1E638Cu;
            // 0x1e638c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6390u;
        goto label_1e6390;
    }
    ctx->pc = 0x1E6388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6390u);
        ctx->pc = 0x1E638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6388u;
            // 0x1e638c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6390u; }
            if (ctx->pc != 0x1E6390u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6390u;
label_1e6390:
    // 0x1e6390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6394:
    // 0x1e6394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6398:
    // 0x1e6398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e639c:
    // 0x1e639c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e639cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e63a0:
    // 0x1e63a0: 0x3e00008  jr          $ra
label_1e63a4:
    if (ctx->pc == 0x1E63A4u) {
        ctx->pc = 0x1E63A4u;
            // 0x1e63a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E63A8u;
        goto label_fallthrough_0x1e63a0;
    }
    ctx->pc = 0x1E63A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E63A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63A0u;
            // 0x1e63a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e63a0:
    ctx->pc = 0x1E63A8u;
    ctx->pc = 0x1e63a8u;
}

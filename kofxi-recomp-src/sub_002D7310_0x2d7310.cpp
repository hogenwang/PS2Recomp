#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D7310
// Address: 0x2d7310 - 0x2d73c8
void sub_002D7310_0x2d7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7310_0x2d7310");
#endif

    switch (ctx->pc) {
        case 0x2d7310u: goto label_2d7310;
        case 0x2d7314u: goto label_2d7314;
        case 0x2d7318u: goto label_2d7318;
        case 0x2d731cu: goto label_2d731c;
        case 0x2d7320u: goto label_2d7320;
        case 0x2d7324u: goto label_2d7324;
        case 0x2d7328u: goto label_2d7328;
        case 0x2d732cu: goto label_2d732c;
        case 0x2d7330u: goto label_2d7330;
        case 0x2d7334u: goto label_2d7334;
        case 0x2d7338u: goto label_2d7338;
        case 0x2d733cu: goto label_2d733c;
        case 0x2d7340u: goto label_2d7340;
        case 0x2d7344u: goto label_2d7344;
        case 0x2d7348u: goto label_2d7348;
        case 0x2d734cu: goto label_2d734c;
        case 0x2d7350u: goto label_2d7350;
        case 0x2d7354u: goto label_2d7354;
        case 0x2d7358u: goto label_2d7358;
        case 0x2d735cu: goto label_2d735c;
        case 0x2d7360u: goto label_2d7360;
        case 0x2d7364u: goto label_2d7364;
        case 0x2d7368u: goto label_2d7368;
        case 0x2d736cu: goto label_2d736c;
        case 0x2d7370u: goto label_2d7370;
        case 0x2d7374u: goto label_2d7374;
        case 0x2d7378u: goto label_2d7378;
        case 0x2d737cu: goto label_2d737c;
        case 0x2d7380u: goto label_2d7380;
        case 0x2d7384u: goto label_2d7384;
        case 0x2d7388u: goto label_2d7388;
        case 0x2d738cu: goto label_2d738c;
        case 0x2d7390u: goto label_2d7390;
        case 0x2d7394u: goto label_2d7394;
        case 0x2d7398u: goto label_2d7398;
        case 0x2d739cu: goto label_2d739c;
        case 0x2d73a0u: goto label_2d73a0;
        case 0x2d73a4u: goto label_2d73a4;
        case 0x2d73a8u: goto label_2d73a8;
        case 0x2d73acu: goto label_2d73ac;
        case 0x2d73b0u: goto label_2d73b0;
        case 0x2d73b4u: goto label_2d73b4;
        case 0x2d73b8u: goto label_2d73b8;
        case 0x2d73bcu: goto label_2d73bc;
        case 0x2d73c0u: goto label_2d73c0;
        case 0x2d73c4u: goto label_2d73c4;
        default: break;
    }

    ctx->pc = 0x2d7310u;

label_2d7310:
    // 0x2d7310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d7314:
    // 0x2d7314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d7318:
    // 0x2d7318: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d731c:
    // 0x2d731c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d7320:
    // 0x2d7320: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d7320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7324:
    // 0x2d7324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d7328:
    // 0x2d7328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d732c:
    // 0x2d732c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d7330:
    // 0x2d7330: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2d7330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d7334:
    // 0x2d7334: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2d7334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d7338:
    // 0x2d7338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d7338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d733c:
    // 0x2d733c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2d7340:
    if (ctx->pc == 0x2D7340u) {
        ctx->pc = 0x2D7340u;
            // 0x2d7340: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x2D7344u;
        goto label_2d7344;
    }
    ctx->pc = 0x2D733Cu;
    {
        const bool branch_taken_0x2d733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D733Cu;
            // 0x2d7340: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d733c) {
            ctx->pc = 0x2D73A4u;
            goto label_2d73a4;
        }
    }
    ctx->pc = 0x2D7344u;
label_2d7344:
    // 0x2d7344: 0x0  nop
    ctx->pc = 0x2d7344u;
    // NOP
label_2d7348:
    // 0x2d7348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d734c:
    // 0x2d734c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2d7350:
    if (ctx->pc == 0x2D7350u) {
        ctx->pc = 0x2D7350u;
            // 0x2d7350: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7354u;
        goto label_2d7354;
    }
    ctx->pc = 0x2D734Cu;
    {
        const bool branch_taken_0x2d734c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D734Cu;
            // 0x2d7350: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d734c) {
            ctx->pc = 0x2D7398u;
            goto label_2d7398;
        }
    }
    ctx->pc = 0x2D7354u;
label_2d7354:
    // 0x2d7354: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7358:
    // 0x2d7358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2d735c:
    if (ctx->pc == 0x2D735Cu) {
        ctx->pc = 0x2D7360u;
        goto label_2d7360;
    }
    ctx->pc = 0x2D7358u;
    {
        const bool branch_taken_0x2d7358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7358) {
            ctx->pc = 0x2D7370u;
            goto label_2d7370;
        }
    }
    ctx->pc = 0x2D7360u;
label_2d7360:
    // 0x2d7360: 0x40f809  jalr        $v0
label_2d7364:
    if (ctx->pc == 0x2D7364u) {
        ctx->pc = 0x2D7368u;
        goto label_2d7368;
    }
    ctx->pc = 0x2D7360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7368u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D7368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D7368u; }
            if (ctx->pc != 0x2D7368u) { return; }
        }
        }
    }
    ctx->pc = 0x2D7368u;
label_2d7368:
    // 0x2d7368: 0x1000000a  b           . + 4 + (0xA << 2)
label_2d736c:
    if (ctx->pc == 0x2D736Cu) {
        ctx->pc = 0x2D736Cu;
            // 0x2d736c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2D7370u;
        goto label_2d7370;
    }
    ctx->pc = 0x2D7368u;
    {
        const bool branch_taken_0x2d7368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7368u;
            // 0x2d736c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7368) {
            ctx->pc = 0x2D7394u;
            goto label_2d7394;
        }
    }
    ctx->pc = 0x2D7370u;
label_2d7370:
    // 0x2d7370: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2d7374:
    if (ctx->pc == 0x2D7374u) {
        ctx->pc = 0x2D7378u;
        goto label_2d7378;
    }
    ctx->pc = 0x2D7370u;
    {
        const bool branch_taken_0x2d7370 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7370) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D7378u;
label_2d7378:
    // 0x2d7378: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d737c:
    // 0x2d737c: 0xc0b608e  jal         func_2D8238
label_2d7380:
    if (ctx->pc == 0x2D7380u) {
        ctx->pc = 0x2D7380u;
            // 0x2d7380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7384u;
        goto label_2d7384;
    }
    ctx->pc = 0x2D737Cu;
    SET_GPR_U32(ctx, 31, 0x2D7384u);
    ctx->pc = 0x2D7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D737Cu;
            // 0x2d7380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7384u; }
        if (ctx->pc != 0x2D7384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7384u; }
        if (ctx->pc != 0x2D7384u) { return; }
    }
    ctx->pc = 0x2D7384u;
label_2d7384:
    // 0x2d7384: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7388:
    // 0x2d7388: 0xc0b60dc  jal         func_2D8370
label_2d738c:
    if (ctx->pc == 0x2D738Cu) {
        ctx->pc = 0x2D7390u;
        goto label_2d7390;
    }
    ctx->pc = 0x2D7388u;
    SET_GPR_U32(ctx, 31, 0x2D7390u);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7390u; }
        if (ctx->pc != 0x2D7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7390u; }
        if (ctx->pc != 0x2D7390u) { return; }
    }
    ctx->pc = 0x2D7390u;
label_2d7390:
    // 0x2d7390: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d7390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d7394:
    // 0x2d7394: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d7394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7398:
    // 0x2d7398: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d739c:
    // 0x2d739c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2d73a0:
    if (ctx->pc == 0x2D73A0u) {
        ctx->pc = 0x2D73A0u;
            // 0x2d73a0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2D73A4u;
        goto label_2d73a4;
    }
    ctx->pc = 0x2D739Cu;
    {
        const bool branch_taken_0x2d739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D73A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D739Cu;
            // 0x2d73a0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d739c) {
            ctx->pc = 0x2D7348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7348;
        }
    }
    ctx->pc = 0x2D73A4u;
label_2d73a4:
    // 0x2d73a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2d73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2d73a8:
    // 0x2d73a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d73a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d73ac:
    // 0x2d73ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d73acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d73b0:
    // 0x2d73b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d73b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d73b4:
    // 0x2d73b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d73b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d73b8:
    // 0x2d73b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d73b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d73bc:
    // 0x2d73bc: 0x3e00008  jr          $ra
label_2d73c0:
    if (ctx->pc == 0x2D73C0u) {
        ctx->pc = 0x2D73C0u;
            // 0x2d73c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D73C4u;
        goto label_2d73c4;
    }
    ctx->pc = 0x2D73BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73BCu;
            // 0x2d73c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D73C4u;
label_2d73c4:
    // 0x2d73c4: 0x0  nop
    ctx->pc = 0x2d73c4u;
    // NOP
    ctx->pc = 0x2d73c8u;
}

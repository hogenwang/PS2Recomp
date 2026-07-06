#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002261C0
// Address: 0x2261c0 - 0x2262c0
void sub_002261C0_0x2261c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002261C0_0x2261c0");
#endif

    switch (ctx->pc) {
        case 0x2261f4u: goto label_2261f4;
        case 0x226210u: goto label_226210;
        case 0x226230u: goto label_226230;
        case 0x22624cu: goto label_22624c;
        case 0x226258u: goto label_226258;
        case 0x22628cu: goto label_22628c;
        case 0x2262a0u: goto label_2262a0;
        default: break;
    }

    ctx->pc = 0x2261c0u;

    // 0x2261c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2261c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2261c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2261c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2261cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2261ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2261d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2261d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2261d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2261d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2261d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2261dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2261dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2261e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2261e4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2261E4u;
    {
        const bool branch_taken_0x2261e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2261E4u;
            // 0x2261e8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261e4) {
            ctx->pc = 0x226230u;
            goto label_226230;
        }
    }
    ctx->pc = 0x2261ECu;
    // 0x2261ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2261ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2261f0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2261f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2261f4:
    // 0x2261f4: 0x51e00015  beql        $t7, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2261F4u;
    {
        const bool branch_taken_0x2261f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2261f4) {
            ctx->pc = 0x2261F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2261F4u;
            // 0x2261f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22624Cu;
            goto label_22624c;
        }
    }
    ctx->pc = 0x2261FCu;
    // 0x2261fc: 0x55f20013  bnel        $t7, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2261FCu;
    {
        const bool branch_taken_0x2261fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 18));
        if (branch_taken_0x2261fc) {
            ctx->pc = 0x226200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2261FCu;
            // 0x226200: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22624Cu;
            goto label_22624c;
        }
    }
    ctx->pc = 0x226204u;
    // 0x226204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226208: 0xc08981a  jal         func_226068
    ctx->pc = 0x226208u;
    SET_GPR_U32(ctx, 31, 0x226210u);
    ctx->pc = 0x22620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226208u;
            // 0x22620c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226068u;
    if (runtime->hasFunction(0x226068u)) {
        auto targetFn = runtime->lookupFunction(0x226068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226210u; }
        if (ctx->pc != 0x226210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226068_0x226068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226210u; }
        if (ctx->pc != 0x226210u) { return; }
    }
    ctx->pc = 0x226210u;
label_226210:
    // 0x226210: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226214: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x226214u;
    {
        const bool branch_taken_0x226214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x226214) {
            ctx->pc = 0x226218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226214u;
            // 0x226218: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22622Cu;
            goto label_22622c;
        }
    }
    ctx->pc = 0x22621Cu;
    // 0x22621c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226220: 0x25effffc  addiu       $t7, $t7, -0x4
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x226224: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x226224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
    // 0x226228: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22622c:
    // 0x22622c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22622cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226230:
    // 0x226230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22623c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22623cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226244: 0x3e00008  jr          $ra
    ctx->pc = 0x226244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226244u;
            // 0x226248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22624Cu;
label_22624c:
    // 0x22624c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226250: 0xc08981a  jal         func_226068
    ctx->pc = 0x226250u;
    SET_GPR_U32(ctx, 31, 0x226258u);
    ctx->pc = 0x226254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226250u;
            // 0x226254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226068u;
    if (runtime->hasFunction(0x226068u)) {
        auto targetFn = runtime->lookupFunction(0x226068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226258u; }
        if (ctx->pc != 0x226258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226068_0x226068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226258u; }
        if (ctx->pc != 0x226258u) { return; }
    }
    ctx->pc = 0x226258u;
label_226258:
    // 0x226258: 0x5453ffe6  bnel        $v0, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x226258u;
    {
        const bool branch_taken_0x226258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x226258) {
            ctx->pc = 0x22625Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226258u;
            // 0x22625c: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2261F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2261f4;
        }
    }
    ctx->pc = 0x226260u;
    // 0x226260: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x226260u;
    {
        const bool branch_taken_0x226260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226260u;
            // 0x226264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226260) {
            ctx->pc = 0x226230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226230;
        }
    }
    ctx->pc = 0x226268u;
    // 0x226268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22626c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226278: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x226278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22627c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226280u;
    {
        const bool branch_taken_0x226280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226280u;
            // 0x226284: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226280) {
            ctx->pc = 0x2262A8u;
            goto label_2262a8;
        }
    }
    ctx->pc = 0x226288u;
    // 0x226288: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22628c:
    // 0x22628c: 0x260f0001  addiu       $t7, $s0, 0x1
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x226290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x226290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226298: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x226298u;
    SET_GPR_U32(ctx, 31, 0x2262A0u);
    ctx->pc = 0x22629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226298u;
            // 0x22629c: 0x1ee800b  movn        $s0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (runtime->hasFunction(0x2260A8u)) {
        auto targetFn = runtime->lookupFunction(0x2260A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2262A0u; }
        if (ctx->pc != 0x2262A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002260A8_0x2260a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2262A0u; }
        if (ctx->pc != 0x2262A0u) { return; }
    }
    ctx->pc = 0x2262A0u;
label_2262a0:
    // 0x2262a0: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2262A0u;
    {
        const bool branch_taken_0x2262a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2262a0) {
            ctx->pc = 0x2262A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2262A0u;
            // 0x2262a4: 0x8c4e0000  lw          $t6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22628Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22628c;
        }
    }
    ctx->pc = 0x2262A8u;
label_2262a8:
    // 0x2262a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2262a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2262acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2262b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2262b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2262b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2262b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2262B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262B8u;
            // 0x2262bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2262C0u;
    ctx->pc = 0x2262c0u;
}

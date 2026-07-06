#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002883C8
// Address: 0x2883c8 - 0x2884a8
void sub_002883C8_0x2883c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883C8_0x2883c8");
#endif

    switch (ctx->pc) {
        case 0x288410u: goto label_288410;
        case 0x288434u: goto label_288434;
        case 0x288444u: goto label_288444;
        default: break;
    }

    ctx->pc = 0x2883c8u;

    // 0x2883c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2883c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2883cc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2883ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2883d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2883d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2883d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2883d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2883d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2883dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2883dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2883e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2883e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2883e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2883e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2883e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2883ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2883ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2883f0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2883f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2883f4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2883F4u;
    {
        const bool branch_taken_0x2883f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2883F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883F4u;
            // 0x2883f8: 0x24b3ffff  addiu       $s3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883f4) {
            ctx->pc = 0x288404u;
            goto label_288404;
        }
    }
    ctx->pc = 0x2883FCu;
    // 0x2883fc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2883FCu;
    {
        const bool branch_taken_0x2883fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883FCu;
            // 0x288400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883fc) {
            ctx->pc = 0x288484u;
            goto label_288484;
        }
    }
    ctx->pc = 0x288404u;
label_288404:
    // 0x288404: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x288404u;
    {
        const bool branch_taken_0x288404 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x288408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288404u;
            // 0x288408: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288404) {
            ctx->pc = 0x28845Cu;
            goto label_28845c;
        }
    }
    ctx->pc = 0x28840Cu;
    // 0x28840c: 0x0  nop
    ctx->pc = 0x28840cu;
    // NOP
label_288410:
    // 0x288410: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288414: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x288414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x288418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28841c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x288420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x288424: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x288424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x288428: 0xdc520000  ld          $s2, 0x0($v0)
    ctx->pc = 0x288428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28842c: 0xc0a2d60  jal         func_28B580
    ctx->pc = 0x28842Cu;
    SET_GPR_U32(ctx, 31, 0x288434u);
    ctx->pc = 0x288430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28842Cu;
            // 0x288430: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B580u;
    if (runtime->hasFunction(0x28B580u)) {
        auto targetFn = runtime->lookupFunction(0x28B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288434u; }
        if (ctx->pc != 0x288434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B580_0x28b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288434u; }
        if (ctx->pc != 0x288434u) { return; }
    }
    ctx->pc = 0x288434u;
label_288434:
    // 0x288434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288438: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x288438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28843c: 0xc048082  jal         func_120208
    ctx->pc = 0x28843Cu;
    SET_GPR_U32(ctx, 31, 0x288444u);
    ctx->pc = 0x288440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28843Cu;
            // 0x288440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288444u; }
        if (ctx->pc != 0x288444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288444u; }
        if (ctx->pc != 0x288444u) { return; }
    }
    ctx->pc = 0x288444u;
label_288444:
    // 0x288444: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288448: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x288448u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
    // 0x28844c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x28844cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x288450: 0x661ffef  bgez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x288450u;
    {
        const bool branch_taken_0x288450 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x288454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288450u;
            // 0x288454: 0xfe110000  sd          $s1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288450) {
            ctx->pc = 0x288410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288410;
        }
    }
    ctx->pc = 0x288458u;
    // 0x288458: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x288458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_28845c:
    // 0x28845c: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28845Cu;
    {
        const bool branch_taken_0x28845c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x288460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28845Cu;
            // 0x288460: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28845c) {
            ctx->pc = 0x288480u;
            goto label_288480;
        }
    }
    ctx->pc = 0x288464u;
    // 0x288464: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x288464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x288468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28846c: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x28846cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x288470: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288470u;
    {
        const bool branch_taken_0x288470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288470u;
            // 0x288474: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288470) {
            ctx->pc = 0x288484u;
            goto label_288484;
        }
    }
    ctx->pc = 0x288478u;
    // 0x288478: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x288478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28847c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x28847cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_288480:
    // 0x288480: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x288480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288484:
    // 0x288484: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x288484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288488: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x288488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28848c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28848cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288490: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x288490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x288494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288498: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28849c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28849cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2884a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2884A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884A0u;
            // 0x2884a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2884A8u;
    ctx->pc = 0x2884a8u;
}

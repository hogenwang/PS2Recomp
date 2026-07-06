#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB938
// Address: 0x1fb938 - 0x1fb9c8
void sub_001FB938_0x1fb938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB938_0x1fb938");
#endif

    switch (ctx->pc) {
        case 0x1fb97cu: goto label_1fb97c;
        case 0x1fb99cu: goto label_1fb99c;
        default: break;
    }

    ctx->pc = 0x1fb938u;

    // 0x1fb938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb93c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fb940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb94c: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1fb950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb954: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb958: 0x8c451700  lw          $a1, 0x1700($v0)
    ctx->pc = 0x1fb958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5888)));
    // 0x1fb95c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1fb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fb960: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x1fb964: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB964u;
    {
        const bool branch_taken_0x1fb964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb964) {
            ctx->pc = 0x1FB968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB964u;
            // 0x1fb968: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB96Cu;
            goto label_1fb96c;
        }
    }
    ctx->pc = 0x1FB96Cu;
label_1fb96c:
    // 0x1fb96c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1fb96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fb970: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x1fb970u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1fb974: 0xc07ee72  jal         func_1FB9C8
    ctx->pc = 0x1FB974u;
    SET_GPR_U32(ctx, 31, 0x1FB97Cu);
    ctx->pc = 0x1FB978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB974u;
            // 0x1fb978: 0x70009012  mflo1       $s2 (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->lo1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB9C8u;
    if (runtime->hasFunction(0x1FB9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FB9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB97Cu; }
        if (ctx->pc != 0x1FB97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB9C8_0x1fb9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB97Cu; }
        if (ctx->pc != 0x1FB97Cu) { return; }
    }
    ctx->pc = 0x1FB97Cu;
label_1fb97c:
    // 0x1fb97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb980: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB980u;
    {
        const bool branch_taken_0x1fb980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB980u;
            // 0x1fb984: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb980) {
            ctx->pc = 0x1FB994u;
            goto label_1fb994;
        }
    }
    ctx->pc = 0x1FB988u;
    // 0x1fb988: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1fb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1fb98c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1fb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fb990: 0xae2202a8  sw          $v0, 0x2A8($s1)
    ctx->pc = 0x1fb990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
label_1fb994:
    // 0x1fb994: 0xc07ee80  jal         func_1FBA00
    ctx->pc = 0x1FB994u;
    SET_GPR_U32(ctx, 31, 0x1FB99Cu);
    ctx->pc = 0x1FBA00u;
    if (runtime->hasFunction(0x1FBA00u)) {
        auto targetFn = runtime->lookupFunction(0x1FBA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB99Cu; }
        if (ctx->pc != 0x1FB99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBA00_0x1fba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB99Cu; }
        if (ctx->pc != 0x1FB99Cu) { return; }
    }
    ctx->pc = 0x1FB99Cu;
label_1fb99c:
    // 0x1fb99c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB99Cu;
    {
        const bool branch_taken_0x1fb99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB99Cu;
            // 0x1fb9a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb99c) {
            ctx->pc = 0x1FB9B4u;
            goto label_1fb9b4;
        }
    }
    ctx->pc = 0x1FB9A4u;
    // 0x1fb9a4: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x1fb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x1fb9a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1fb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fb9ac: 0xae2202cc  sw          $v0, 0x2CC($s1)
    ctx->pc = 0x1fb9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
    // 0x1fb9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb9b4:
    // 0x1fb9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb9b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb9bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9C0u;
            // 0x1fb9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB9C8u;
    ctx->pc = 0x1fb9c8u;
}

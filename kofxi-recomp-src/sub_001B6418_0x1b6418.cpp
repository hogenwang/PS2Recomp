#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6418
// Address: 0x1b6418 - 0x1b64f8
void sub_001B6418_0x1b6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6418_0x1b6418");
#endif

    switch (ctx->pc) {
        case 0x1b6438u: goto label_1b6438;
        case 0x1b6460u: goto label_1b6460;
        case 0x1b6480u: goto label_1b6480;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64e0u: goto label_1b64e0;
        default: break;
    }

    ctx->pc = 0x1b6418u;

    // 0x1b6418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b641c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b642c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6430: 0xc06ae96  jal         func_1ABA58
    ctx->pc = 0x1B6430u;
    SET_GPR_U32(ctx, 31, 0x1B6438u);
    ctx->pc = 0x1B6434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6430u;
            // 0x1b6434: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA58u;
    if (runtime->hasFunction(0x1ABA58u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6438u; }
        if (ctx->pc != 0x1B6438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABA58_0x1aba58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6438u; }
        if (ctx->pc != 0x1B6438u) { return; }
    }
    ctx->pc = 0x1B6438u;
label_1b6438:
    // 0x1b6438: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6438u;
    {
        const bool branch_taken_0x1b6438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6438u;
            // 0x1b643c: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6438) {
            ctx->pc = 0x1B6468u;
            goto label_1b6468;
        }
    }
    ctx->pc = 0x1B6440u;
    // 0x1b6440: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b6440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b6444: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b6444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1b6448: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b6448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b644c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B644Cu;
    {
        const bool branch_taken_0x1b644c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b644c) {
            ctx->pc = 0x1B6450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B644Cu;
            // 0x1b6450: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6468u;
            goto label_1b6468;
        }
    }
    ctx->pc = 0x1B6454u;
    // 0x1b6454: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6458: 0xc06ae9a  jal         func_1ABA68
    ctx->pc = 0x1B6458u;
    SET_GPR_U32(ctx, 31, 0x1B6460u);
    ctx->pc = 0x1B645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6458u;
            // 0x1b645c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA68u;
    if (runtime->hasFunction(0x1ABA68u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6460u; }
        if (ctx->pc != 0x1B6460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABA68_0x1aba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6460u; }
        if (ctx->pc != 0x1B6460u) { return; }
    }
    ctx->pc = 0x1B6460u;
label_1b6460:
    // 0x1b6460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6460u;
    {
        const bool branch_taken_0x1b6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6460u;
            // 0x1b6464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6460) {
            ctx->pc = 0x1B646Cu;
            goto label_1b646c;
        }
    }
    ctx->pc = 0x1B6468u;
label_1b6468:
    // 0x1b6468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b646c:
    // 0x1b646c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b646cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6474: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6474u;
            // 0x1b6478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B647Cu;
    // 0x1b647c: 0x0  nop
    ctx->pc = 0x1b647cu;
    // NOP
label_1b6480:
    // 0x1b6480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b648c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6490: 0xc06ae96  jal         func_1ABA58
    ctx->pc = 0x1B6490u;
    SET_GPR_U32(ctx, 31, 0x1B6498u);
    ctx->pc = 0x1B6494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6490u;
            // 0x1b6494: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA58u;
    if (runtime->hasFunction(0x1ABA58u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6498u; }
        if (ctx->pc != 0x1B6498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABA58_0x1aba58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6498u; }
        if (ctx->pc != 0x1B6498u) { return; }
    }
    ctx->pc = 0x1B6498u;
label_1b6498:
    // 0x1b6498: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B649Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6498u;
            // 0x1b649c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B64C8u;
            goto label_1b64c8;
        }
    }
    ctx->pc = 0x1B64A0u;
    // 0x1b64a0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b64a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b64a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1b64a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b64a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b64ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B64ACu;
    {
        const bool branch_taken_0x1b64ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64ac) {
            ctx->pc = 0x1B64B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64ACu;
            // 0x1b64b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B64C8u;
            goto label_1b64c8;
        }
    }
    ctx->pc = 0x1B64B4u;
    // 0x1b64b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b64b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b64b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b64bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b64bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b64c0: 0x806ae9e  j           func_1ABA78
    ctx->pc = 0x1B64C0u;
    ctx->pc = 0x1B64C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64C0u;
            // 0x1b64c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA78u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b64c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b64ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b64d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B64D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B64D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64D0u;
            // 0x1b64d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B64D8u;
label_1b64d8:
    // 0x1b64d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B64D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B64DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64D8u;
            // 0x1b64dc: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B64E0u;
label_1b64e0:
    // 0x1b64e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b64e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b64e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b64ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b64ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b64f0: 0x806ae64  j           func_1AB990
    ctx->pc = 0x1B64F0u;
    ctx->pc = 0x1B64F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64F0u;
            // 0x1b64f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB990u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B64F8u;
    ctx->pc = 0x1b64f8u;
}

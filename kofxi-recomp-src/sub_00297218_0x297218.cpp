#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297218
// Address: 0x297218 - 0x297358
void sub_00297218_0x297218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297218_0x297218");
#endif

    switch (ctx->pc) {
        case 0x297274u: goto label_297274;
        case 0x297284u: goto label_297284;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972f0u: goto label_2972f0;
        default: break;
    }

    ctx->pc = 0x297218u;

    // 0x297218: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x297218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29721c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x29721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x297220: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x297220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x297224: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x297224u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297228: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x297228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29722c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x29722cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297230: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x297234: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x297234u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297238: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29723c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29723cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297240: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297244: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x297244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297248: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29724c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29724cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297250: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x297258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29725c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297260: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297264: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297264u;
    {
        const bool branch_taken_0x297264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297264u;
            // 0x297268: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297264) {
            ctx->pc = 0x29727Cu;
            goto label_29727c;
        }
    }
    ctx->pc = 0x29726Cu;
    // 0x29726c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x29726Cu;
    SET_GPR_U32(ctx, 31, 0x297274u);
    ctx->pc = 0x297270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29726Cu;
            // 0x297270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297274u; }
        if (ctx->pc != 0x297274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297274u; }
        if (ctx->pc != 0x297274u) { return; }
    }
    ctx->pc = 0x297274u;
label_297274:
    // 0x297274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297274u;
    {
        const bool branch_taken_0x297274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297274u;
            // 0x297278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297274) {
            ctx->pc = 0x297290u;
            goto label_297290;
        }
    }
    ctx->pc = 0x29727Cu;
label_29727c:
    // 0x29727c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29727Cu;
    SET_GPR_U32(ctx, 31, 0x297284u);
    ctx->pc = 0x297280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29727Cu;
            // 0x297280: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297284u; }
        if (ctx->pc != 0x297284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297284u; }
        if (ctx->pc != 0x297284u) { return; }
    }
    ctx->pc = 0x297284u;
label_297284:
    // 0x297284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297288: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x297288u;
    {
        const bool branch_taken_0x297288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x297288) {
            ctx->pc = 0x29728Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297288u;
            // 0x29728c: 0xfe130000  sd          $s3, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2972D4u;
            goto label_2972d4;
        }
    }
    ctx->pc = 0x297290u;
label_297290:
    // 0x297290: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x297290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x297294: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x297294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x297298: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x297298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29729c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29729cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972a0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2972A0u;
    SET_GPR_U32(ctx, 31, 0x2972A8u);
    ctx->pc = 0x2972A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2972A0u;
            // 0x2972a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972A8u; }
        if (ctx->pc != 0x2972A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972A8u; }
        if (ctx->pc != 0x2972A8u) { return; }
    }
    ctx->pc = 0x2972A8u;
label_2972a8:
    // 0x2972a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2972A8u;
    {
        const bool branch_taken_0x2972a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972A8u;
            // 0x2972ac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972a8) {
            ctx->pc = 0x297324u;
            goto label_297324;
        }
    }
    ctx->pc = 0x2972B0u;
label_2972b0:
    // 0x2972b0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2972b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2972b4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2972b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2972b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2972b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972bc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2972BCu;
    SET_GPR_U32(ctx, 31, 0x2972C4u);
    ctx->pc = 0x2972C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2972BCu;
            // 0x2972c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972C4u; }
        if (ctx->pc != 0x2972C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972C4u; }
        if (ctx->pc != 0x2972C4u) { return; }
    }
    ctx->pc = 0x2972C4u;
label_2972c4:
    // 0x2972c4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2972C4u;
    SET_GPR_U32(ctx, 31, 0x2972CCu);
    ctx->pc = 0x2972C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2972C4u;
            // 0x2972c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972CCu; }
        if (ctx->pc != 0x2972CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972CCu; }
        if (ctx->pc != 0x2972CCu) { return; }
    }
    ctx->pc = 0x2972CCu;
label_2972cc:
    // 0x2972cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2972CCu;
    {
        const bool branch_taken_0x2972cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972CCu;
            // 0x2972d0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972cc) {
            ctx->pc = 0x297324u;
            goto label_297324;
        }
    }
    ctx->pc = 0x2972D4u;
label_2972d4:
    // 0x2972d4: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x2972d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x2972d8: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2972d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2972dc: 0xae160014  sw          $s6, 0x14($s0)
    ctx->pc = 0x2972dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
    // 0x2972e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2972E0u;
    {
        const bool branch_taken_0x2972e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972E0u;
            // 0x2972e4: 0xae170010  sw          $s7, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972e0) {
            ctx->pc = 0x2972F8u;
            goto label_2972f8;
        }
    }
    ctx->pc = 0x2972E8u;
label_2972e8:
    // 0x2972e8: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2972E8u;
    SET_GPR_U32(ctx, 31, 0x2972F0u);
    ctx->pc = 0x2972ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2972E8u;
            // 0x2972ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972F0u; }
        if (ctx->pc != 0x2972F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972F0u; }
        if (ctx->pc != 0x2972F0u) { return; }
    }
    ctx->pc = 0x2972F0u;
label_2972f0:
    // 0x2972f0: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2972F0u;
    {
        const bool branch_taken_0x2972f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972F0u;
            // 0x2972f4: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972f0) {
            ctx->pc = 0x2972B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2972b0;
        }
    }
    ctx->pc = 0x2972F8u;
label_2972f8:
    // 0x2972f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2972f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2972fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297300: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x297300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297304: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x297304u;
    {
        const bool branch_taken_0x297304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297304u;
            // 0x297308: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297304) {
            ctx->pc = 0x2972E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2972e8;
        }
    }
    ctx->pc = 0x29730Cu;
    // 0x29730c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x29730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x297310: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x297314: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x297314u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29731c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x29731cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x297320: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x297320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_297324:
    // 0x297324: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297328: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x297328u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29732c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x29732cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297330: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x297330u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297334: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297338: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29733c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29733cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297340: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297344: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29734c: 0x3e00008  jr          $ra
    ctx->pc = 0x29734Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29734Cu;
            // 0x297350: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297354u;
    // 0x297354: 0x0  nop
    ctx->pc = 0x297354u;
    // NOP
    ctx->pc = 0x297358u;
}

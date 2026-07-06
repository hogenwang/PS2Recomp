#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C5A0
// Address: 0x13c5a0 - 0x13c670
void sub_0013C5A0_0x13c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C5A0_0x13c5a0");
#endif

    switch (ctx->pc) {
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c5ecu: goto label_13c5ec;
        case 0x13c604u: goto label_13c604;
        default: break;
    }

    ctx->pc = 0x13c5a0u;

    // 0x13c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c5a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c5a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5b0: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C5B0u;
    SET_GPR_U32(ctx, 31, 0x13C5B8u);
    ctx->pc = 0x13C5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5B0u;
            // 0x13c5b4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5B8u; }
        if (ctx->pc != 0x13C5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5B8u; }
        if (ctx->pc != 0x13C5B8u) { return; }
    }
    ctx->pc = 0x13C5B8u;
label_13c5b8:
    // 0x13c5b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5B8u;
    {
        const bool branch_taken_0x13c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5b8) {
            ctx->pc = 0x13C5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5B8u;
            // 0x13c5bc: 0x8c4300dc  lw          $v1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C5C8u;
            goto label_13c5c8;
        }
    }
    ctx->pc = 0x13C5C0u;
    // 0x13c5c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13C5C0u;
    {
        const bool branch_taken_0x13c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5C0u;
            // 0x13c5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5c0) {
            ctx->pc = 0x13C660u;
            goto label_13c660;
        }
    }
    ctx->pc = 0x13C5C8u;
label_13c5c8:
    // 0x13c5c8: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x13c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13c5cc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x13c5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x13c5d0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13c5d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5D4u;
    {
        const bool branch_taken_0x13c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5D4u;
            // 0x13c5d8: 0x32882  srl         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5d4) {
            ctx->pc = 0x13C5E4u;
            goto label_13c5e4;
        }
    }
    ctx->pc = 0x13C5DCu;
    // 0x13c5dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13C5DCu;
    {
        const bool branch_taken_0x13c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5DCu;
            // 0x13c5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5dc) {
            ctx->pc = 0x13C660u;
            goto label_13c660;
        }
    }
    ctx->pc = 0x13C5E4u;
label_13c5e4:
    // 0x13c5e4: 0xc060d5c  jal         func_183570
    ctx->pc = 0x13C5E4u;
    SET_GPR_U32(ctx, 31, 0x13C5ECu);
    ctx->pc = 0x13C5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5E4u;
            // 0x13c5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5ECu; }
        if (ctx->pc != 0x13C5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5ECu; }
        if (ctx->pc != 0x13C5ECu) { return; }
    }
    ctx->pc = 0x13C5ECu;
label_13c5ec:
    // 0x13c5ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5ECu;
    {
        const bool branch_taken_0x13c5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5ec) {
            ctx->pc = 0x13C5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5ECu;
            // 0x13c5f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C5FCu;
            goto label_13c5fc;
        }
    }
    ctx->pc = 0x13C5F4u;
    // 0x13c5f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13C5F4u;
    {
        const bool branch_taken_0x13c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5F4u;
            // 0x13c5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5f4) {
            ctx->pc = 0x13C660u;
            goto label_13c660;
        }
    }
    ctx->pc = 0x13C5FCu;
label_13c5fc:
    // 0x13c5fc: 0xc04f8a0  jal         func_13E280
    ctx->pc = 0x13C5FCu;
    SET_GPR_U32(ctx, 31, 0x13C604u);
    ctx->pc = 0x13C600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5FCu;
            // 0x13c600: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E280u;
    if (runtime->hasFunction(0x13E280u)) {
        auto targetFn = runtime->lookupFunction(0x13E280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C604u; }
        if (ctx->pc != 0x13C604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E280_0x13e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C604u; }
        if (ctx->pc != 0x13C604u) { return; }
    }
    ctx->pc = 0x13C604u;
label_13c604:
    // 0x13c604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c608: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13C608u;
    {
        const bool branch_taken_0x13c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c608) {
            ctx->pc = 0x13C60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C608u;
            // 0x13c60c: 0x8e04023c  lw          $a0, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C648u;
            goto label_13c648;
        }
    }
    ctx->pc = 0x13C610u;
    // 0x13c610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c614: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C614u;
    {
        const bool branch_taken_0x13c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c614) {
            ctx->pc = 0x13C618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C614u;
            // 0x13c618: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C63Cu;
            goto label_13c63c;
        }
    }
    ctx->pc = 0x13C61Cu;
    // 0x13c61c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C61Cu;
    {
        const bool branch_taken_0x13c61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c61c) {
            ctx->pc = 0x13C620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C61Cu;
            // 0x13c620: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C62Cu;
            goto label_13c62c;
        }
    }
    ctx->pc = 0x13C624u;
    // 0x13c624: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13C624u;
    {
        const bool branch_taken_0x13c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C624u;
            // 0x13c628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c624) {
            ctx->pc = 0x13C660u;
            goto label_13c660;
        }
    }
    ctx->pc = 0x13C62Cu;
label_13c62c:
    // 0x13c62c: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x13c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13c630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c634: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C634u;
    {
        const bool branch_taken_0x13c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C634u;
            // 0x13c638: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c634) {
            ctx->pc = 0x13C65Cu;
            goto label_13c65c;
        }
    }
    ctx->pc = 0x13C63Cu;
label_13c63c:
    // 0x13c63c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x13c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x13c640: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C640u;
    {
        const bool branch_taken_0x13c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C640u;
            // 0x13c644: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c640) {
            ctx->pc = 0x13C65Cu;
            goto label_13c65c;
        }
    }
    ctx->pc = 0x13C648u;
label_13c648:
    // 0x13c648: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13c64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c650: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13c650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13c654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C654u;
    {
        const bool branch_taken_0x13c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C654u;
            // 0x13c658: 0xae03023c  sw          $v1, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c654) {
            ctx->pc = 0x13C660u;
            goto label_13c660;
        }
    }
    ctx->pc = 0x13C65Cu;
label_13c65c:
    // 0x13c65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c660:
    // 0x13c660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c668: 0x3e00008  jr          $ra
    ctx->pc = 0x13C668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C668u;
            // 0x13c66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C670u;
    ctx->pc = 0x13c670u;
}

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC0F8
// Address: 0x1ac0f8 - 0x1ac280
void sub_001AC0F8_0x1ac0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC0F8_0x1ac0f8");
#endif

    switch (ctx->pc) {
        case 0x1ac170u: goto label_1ac170;
        default: break;
    }

    ctx->pc = 0x1ac0f8u;

    // 0x1ac0f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ac0fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac100: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ac100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ac104: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ac104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ac108: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ac108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ac10c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1ac10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1ac110: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ac110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac114: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1ac114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1ac118: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x1ac118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x1ac11c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ac11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ac120: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ac124: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1ac124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1ac128: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ac128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ac12c: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ac130: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1ac134: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AC134u;
    {
        const bool branch_taken_0x1ac134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac134) {
            ctx->pc = 0x1AC138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC134u;
            // 0x1ac138: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC13Cu;
            goto label_1ac13c;
        }
    }
    ctx->pc = 0x1AC13Cu;
label_1ac13c:
    // 0x1ac13c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1ac13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1ac140: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x1ac144: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ac144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ac148: 0x8ed70040  lw          $s7, 0x40($s6)
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x1ac14c: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x1ac14cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ac150: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1ac154: 0x8e9e0014  lw          $fp, 0x14($s4)
    ctx->pc = 0x1ac154u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1ac158: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ac158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ac15c: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ac160: 0x8010  mfhi        $s0
    ctx->pc = 0x1ac160u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1ac164: 0x9012  mflo        $s2
    ctx->pc = 0x1ac164u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x1ac168: 0xc06f73e  jal         func_1BDCF8
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x1AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC168u;
    // 0x1ac16c: 0x8e950020  lw          $s5, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCF8u, 0x1AC168u, 0x1AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1ac174: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x1ac174u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ac178: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x1ac178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1ac17c: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x1ac17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1ac180: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ac180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ac184: 0x70539818  mult1       $s3, $v0, $s3
    ctx->pc = 0x1ac184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1ac188: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AC188u;
    {
        const bool branch_taken_0x1ac188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac188) {
            ctx->pc = 0x1AC18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC188u;
            // 0x1ac18c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC190u;
            goto label_1ac190;
        }
    }
    ctx->pc = 0x1AC190u;
label_1ac190:
    // 0x1ac190: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac194: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x1ac194u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ac198: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1ac198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ac19c: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x1ac19cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
    // 0x1ac1a0: 0x8812  mflo        $s1
    ctx->pc = 0x1ac1a0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1ac1a4: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ac1a8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x1ac1a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x1ac1ac: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x1ac1acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ac1b0: 0xaed00090  sw          $s0, 0x90($s6)
    ctx->pc = 0x1ac1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 16));
    // 0x1ac1b4: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1ac1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1ac1b8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AC1B8u;
    {
        const bool branch_taken_0x1ac1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1B8u;
        // 0x1ac1bc: 0x2b7a823  subu        $s5, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1b8) {
            ctx->pc = 0x1AC250u;
            goto label_1ac250;
        }
    }
    ctx->pc = 0x1AC1C0u;
    // 0x1ac1c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ac1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1c4: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC1C4u;
    {
        const bool branch_taken_0x1ac1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1C4u;
        // 0x1ac1c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1c4) {
            ctx->pc = 0x1AC1D8u;
            goto label_1ac1d8;
        }
    }
    ctx->pc = 0x1AC1CCu;
    // 0x1ac1cc: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x1ac1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x1ac1d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC1D0u;
    {
        const bool branch_taken_0x1ac1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1D0u;
        // 0x1ac1d4: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1d0) {
            ctx->pc = 0x1AC218u;
            goto label_1ac218;
        }
    }
    ctx->pc = 0x1AC1D8u;
label_1ac1d8:
    // 0x1ac1d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1ac1d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac1dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ac1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1e0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1ac1e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac1e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ac1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1e8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ac1e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac1ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ac1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac1f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac1f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac1f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac1fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ac1fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac200: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ac200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac204: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ac204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac208: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ac208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ac20c: 0x806b01a  j           func_1AC068
    ctx->pc = 0x1AC20Cu;
    ctx->pc = 0x1AC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC20Cu;
    // 0x1ac210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC068u, 0x1AC20Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AC214u;
    // 0x1ac214: 0x0  nop
    ctx->pc = 0x1ac214u;
    // NOP
label_1ac218:
    // 0x1ac218: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ac218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac21c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1ac21cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac220: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ac220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac224: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ac224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac228: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ac228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac22c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac230: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac234: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac238: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ac238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac23c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ac23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac240: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ac240u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac244: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ac244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ac248: 0x806b036  j           func_1AC0D8
    ctx->pc = 0x1AC248u;
    ctx->pc = 0x1AC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC248u;
    // 0x1ac24c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC0D8u, 0x1AC248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AC250u;
label_1ac250:
    // 0x1ac250: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac254: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac258: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac25c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ac25cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac260: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ac260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac264: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ac264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac268: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ac268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac26c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1ac26cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac270: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1ac270u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac274: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ac274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ac278: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC278u;
        // 0x1ac27c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC280u;
}

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

// Function: sub_0010B738
// Address: 0x10b738 - 0x10b8f8
void sub_0010B738_0x10b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B738_0x10b738");
#endif

    switch (ctx->pc) {
        case 0x10b7a8u: goto label_10b7a8;
        case 0x10b7d8u: goto label_10b7d8;
        case 0x10b7f4u: goto label_10b7f4;
        case 0x10b7fcu: goto label_10b7fc;
        case 0x10b844u: goto label_10b844;
        case 0x10b86cu: goto label_10b86c;
        case 0x10b878u: goto label_10b878;
        case 0x10b8a8u: goto label_10b8a8;
        case 0x10b8b0u: goto label_10b8b0;
        case 0x10b8d4u: goto label_10b8d4;
        case 0x10b8e0u: goto label_10b8e0;
        default: break;
    }

    ctx->pc = 0x10b738u;

    // 0x10b738: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x10b738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x10b73c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10b73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10b740: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x10b740u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10b744: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10b748: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10b74c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b750: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x10b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x10b754: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10b754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10b758: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x10b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x10b75c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b760: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10b764: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b768: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10b76c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b770: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10B770u;
    {
        const bool branch_taken_0x10b770 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b770) {
            ctx->pc = 0x10B774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B770u;
            // 0x10b774: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B778u;
            goto label_10b778;
        }
    }
    ctx->pc = 0x10B778u;
label_10b778:
    // 0x10b778: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b77c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x10b780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b784: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10b784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x10b788: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x10b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10b78c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10b790: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b794: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10b798: 0x4012  mflo        $t0
    ctx->pc = 0x10b798u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x10b79c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10b79cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10b7a0: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x10b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x10b7a4: 0x0  nop
    ctx->pc = 0x10b7a4u;
    // NOP
label_10b7a8:
    // 0x10b7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b7ac: 0x0  nop
    ctx->pc = 0x10b7acu;
    // NOP
    // 0x10b7b0: 0x0  nop
    ctx->pc = 0x10b7b0u;
    // NOP
    // 0x10b7b4: 0x0  nop
    ctx->pc = 0x10b7b4u;
    // NOP
    // 0x10b7b8: 0x0  nop
    ctx->pc = 0x10b7b8u;
    // NOP
    // 0x10b7bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B7BCu;
    {
        const bool branch_taken_0x10b7bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b7bc) {
            ctx->pc = 0x10B7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B7C4u;
    // 0x10b7c4: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10b7c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b7cc: 0x24a5bdd0  addiu       $a1, $a1, -0x4230
    ctx->pc = 0x10b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950352));
    // 0x10b7d0: 0xc043260  jal         func_10C980
    ctx->pc = 0x10B7D0u;
    SET_GPR_U32(ctx, 31, 0x10B7D8u);
    ctx->pc = 0x10B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7D0u;
    // 0x10b7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C980u, 0x10B7D0u, 0x10B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7D8u;
label_10b7d8:
    // 0x10b7d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b7d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10b7e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b7e8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10b7ec: 0xc04361e  jal         func_10D878
    ctx->pc = 0x10B7ECu;
    SET_GPR_U32(ctx, 31, 0x10B7F4u);
    ctx->pc = 0x10B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7ECu;
    // 0x10b7f0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D878u, 0x10B7ECu, 0x10B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7F4u;
label_10b7f4:
    // 0x10b7f4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10B7F4u;
    SET_GPR_U32(ctx, 31, 0x10B7FCu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10B7F4u, 0x10B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7FCu;
label_10b7fc:
    // 0x10b7fc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10b800: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b808: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10b808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10b80c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10b810: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b814: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10b814u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b818: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x10b818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x10b81c: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x10b81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10b820: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b824: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10b824u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b828: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10b828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10b82c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b830: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10b830u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B834u;
    {
        const bool branch_taken_0x10b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B834u;
        // 0x10b838: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b834) {
            ctx->pc = 0x10B848u;
            goto label_10b848;
        }
    }
    ctx->pc = 0x10B83Cu;
    // 0x10b83c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10B83Cu;
    SET_GPR_U32(ctx, 31, 0x10B844u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10B83Cu, 0x10B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B844u;
label_10b844:
    // 0x10b844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10b848:
    // 0x10b848: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10b848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10b84c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b850: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x10b850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x10b854: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b854u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b858: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10b858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b85c: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10b860: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b864: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10B864u;
    SET_GPR_U32(ctx, 31, 0x10B86Cu);
    ctx->pc = 0x10B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B864u;
    // 0x10b868: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A810u, 0x10B864u, 0x10B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B86Cu;
label_10b86c:
    // 0x10b86c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x10b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10b870: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b874: 0x0  nop
    ctx->pc = 0x10b874u;
    // NOP
label_10b878:
    // 0x10b878: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b87c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b880: 0x0  nop
    ctx->pc = 0x10b880u;
    // NOP
    // 0x10b884: 0x0  nop
    ctx->pc = 0x10b884u;
    // NOP
    // 0x10b888: 0x0  nop
    ctx->pc = 0x10b888u;
    // NOP
    // 0x10b88c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B88Cu;
    {
        const bool branch_taken_0x10b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b88c) {
            ctx->pc = 0x10B878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b878;
        }
    }
    ctx->pc = 0x10B894u;
    // 0x10b894: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B894u;
    {
        const bool branch_taken_0x10b894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B894u;
        // 0x10b898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b894) {
            ctx->pc = 0x10B8A8u;
            goto label_10b8a8;
        }
    }
    ctx->pc = 0x10B89Cu;
    // 0x10b89c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x10b89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x10b8a0: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10B8A0u;
    SET_GPR_U32(ctx, 31, 0x10B8A8u);
    ctx->pc = 0x10B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8A0u;
    // 0x10b8a4: 0x24a5a498  addiu       $a1, $a1, -0x5B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10B8A0u, 0x10B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A8u;
label_10b8a8:
    // 0x10b8a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8ac: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10b8b0:
    // 0x10b8b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b8b4: 0x0  nop
    ctx->pc = 0x10b8b4u;
    // NOP
    // 0x10b8b8: 0x0  nop
    ctx->pc = 0x10b8b8u;
    // NOP
    // 0x10b8bc: 0x0  nop
    ctx->pc = 0x10b8bcu;
    // NOP
    // 0x10b8c0: 0x0  nop
    ctx->pc = 0x10b8c0u;
    // NOP
    // 0x10b8c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B8C4u;
    {
        const bool branch_taken_0x10b8c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b8c4) {
            ctx->pc = 0x10B8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b8b0;
        }
    }
    ctx->pc = 0x10B8CCu;
    // 0x10b8cc: 0xc043604  jal         func_10D810
    ctx->pc = 0x10B8CCu;
    SET_GPR_U32(ctx, 31, 0x10B8D4u);
    ctx->pc = 0x10B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8CCu;
    // 0x10b8d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D810u, 0x10B8CCu, 0x10B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8D4u;
label_10b8d4:
    // 0x10b8d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8d8: 0xc043264  jal         func_10C990
    ctx->pc = 0x10B8D8u;
    SET_GPR_U32(ctx, 31, 0x10B8E0u);
    ctx->pc = 0x10B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8D8u;
    // 0x10b8dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C990u, 0x10B8D8u, 0x10B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8E0u;
label_10b8e0:
    // 0x10b8e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b8e4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10b8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b8e8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x10b8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b8ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10b8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F0u;
        // 0x10b8f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8F8u;
}

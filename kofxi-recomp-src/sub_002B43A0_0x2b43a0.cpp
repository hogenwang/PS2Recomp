#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B43A0
// Address: 0x2b43a0 - 0x2b4b78
void sub_002B43A0_0x2b43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B43A0_0x2b43a0");
#endif

    switch (ctx->pc) {
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b4464u: goto label_2b4464;
        case 0x2b448cu: goto label_2b448c;
        case 0x2b44b4u: goto label_2b44b4;
        case 0x2b44dcu: goto label_2b44dc;
        case 0x2b4504u: goto label_2b4504;
        case 0x2b451cu: goto label_2b451c;
        case 0x2b4550u: goto label_2b4550;
        case 0x2b45b4u: goto label_2b45b4;
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4658u: goto label_2b4658;
        case 0x2b46bcu: goto label_2b46bc;
        case 0x2b4720u: goto label_2b4720;
        case 0x2b4788u: goto label_2b4788;
        case 0x2b47f4u: goto label_2b47f4;
        case 0x2b482cu: goto label_2b482c;
        case 0x2b484cu: goto label_2b484c;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b497cu: goto label_2b497c;
        case 0x2b498cu: goto label_2b498c;
        case 0x2b499cu: goto label_2b499c;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49fcu: goto label_2b49fc;
        case 0x2b4a2cu: goto label_2b4a2c;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a8cu: goto label_2b4a8c;
        case 0x2b4aa4u: goto label_2b4aa4;
        case 0x2b4ae4u: goto label_2b4ae4;
        case 0x2b4b0cu: goto label_2b4b0c;
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b44u: goto label_2b4b44;
        default: break;
    }

    ctx->pc = 0x2b43a0u;

    // 0x2b43a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b43a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b43a8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x2b43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2b43ac: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2b43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2b43b0: 0x24051140  addiu       $a1, $zero, 0x1140
    ctx->pc = 0x2b43b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x2b43b4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2b43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2b43b8: 0x24061141  addiu       $a2, $zero, 0x1141
    ctx->pc = 0x2b43b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4417));
    // 0x2b43bc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2b43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2b43c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b43c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b43c4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2b43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2b43c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b43c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43cc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2b43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2b43d0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2b43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2b43d4: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2b43d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b43d8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2b43d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2b43dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b43dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43e0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2b43e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2b43e4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2b43e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2b43e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2b43e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2b43ec: 0xde280120  ld          $t0, 0x120($s1)
    ctx->pc = 0x2b43ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2b43f0: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2B43F0u;
    SET_GPR_U32(ctx, 31, 0x2B43F8u);
    ctx->pc = 0x2B43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B43F0u;
            // 0x2b43f4: 0x48400a  movz        $t0, $v0, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43F8u; }
        if (ctx->pc != 0x2B43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43F8u; }
        if (ctx->pc != 0x2B43F8u) { return; }
    }
    ctx->pc = 0x2B43F8u;
label_2b43f8:
    // 0x2b43f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b43fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b43fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4400: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4400u;
    {
        const bool branch_taken_0x2b4400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4400u;
            // 0x2b4404: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4400) {
            ctx->pc = 0x2B4418u;
            goto label_2b4418;
        }
    }
    ctx->pc = 0x2B4408u;
    // 0x2b4408: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2b4408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2b440c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b440cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4410: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x2B4410u;
    {
        const bool branch_taken_0x2b4410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4410u;
            // 0x2b4414: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4410) {
            ctx->pc = 0x2B4B4Cu;
            goto label_2b4b4c;
        }
    }
    ctx->pc = 0x2B4418u;
label_2b4418:
    // 0x2b4418: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b441c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b4420: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x2b4420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x2b4424: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4424u;
    {
        const bool branch_taken_0x2b4424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4424u;
            // 0x2b4428: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4424) {
            ctx->pc = 0x2B4438u;
            goto label_2b4438;
        }
    }
    ctx->pc = 0x2B442Cu;
    // 0x2b442c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4430: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x2B4430u;
    {
        const bool branch_taken_0x2b4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4430u;
            // 0x2b4434: 0xac830168  sw          $v1, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4430) {
            ctx->pc = 0x2B4B48u;
            goto label_2b4b48;
        }
    }
    ctx->pc = 0x2B4438u;
label_2b4438:
    // 0x2b4438: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2b4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2b443c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4440: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2b4440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b4444: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x2b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2b4448: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B4448u;
    {
        const bool branch_taken_0x2b4448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4448u;
            // 0x2b444c: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4448) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B4450u;
    // 0x2b4450: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b4454: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4454u;
    {
        const bool branch_taken_0x2b4454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4454) {
            ctx->pc = 0x2B4458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4454u;
            // 0x2b4458: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4478u;
            goto label_2b4478;
        }
    }
    ctx->pc = 0x2B445Cu;
    // 0x2b445c: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2B445Cu;
    SET_GPR_U32(ctx, 31, 0x2B4464u);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4464u; }
        if (ctx->pc != 0x2B4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4464u; }
        if (ctx->pc != 0x2B4464u) { return; }
    }
    ctx->pc = 0x2B4464u;
label_2b4464:
    // 0x2b4464: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4468: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b446c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2b446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2b4470: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4474: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b4478:
    // 0x2b4478: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2b4478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b447c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B447Cu;
    {
        const bool branch_taken_0x2b447c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b447c) {
            ctx->pc = 0x2B4480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B447Cu;
            // 0x2b4480: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B44A0u;
            goto label_2b44a0;
        }
    }
    ctx->pc = 0x2B4484u;
    // 0x2b4484: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2B4484u;
    SET_GPR_U32(ctx, 31, 0x2B448Cu);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B448Cu; }
        if (ctx->pc != 0x2B448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B448Cu; }
        if (ctx->pc != 0x2B448Cu) { return; }
    }
    ctx->pc = 0x2B448Cu;
label_2b448c:
    // 0x2b448c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4490: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4494: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2b4494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2b4498: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b449c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b44a0:
    // 0x2b44a0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2b44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b44a4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B44A4u;
    {
        const bool branch_taken_0x2b44a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44a4) {
            ctx->pc = 0x2B44A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44A4u;
            // 0x2b44a8: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B44C8u;
            goto label_2b44c8;
        }
    }
    ctx->pc = 0x2B44ACu;
    // 0x2b44ac: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2B44ACu;
    SET_GPR_U32(ctx, 31, 0x2B44B4u);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44B4u; }
        if (ctx->pc != 0x2B44B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44B4u; }
        if (ctx->pc != 0x2B44B4u) { return; }
    }
    ctx->pc = 0x2B44B4u;
label_2b44b4:
    // 0x2b44b4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b44b8: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b44bc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2b44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2b44c0: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b44c4: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b44c8:
    // 0x2b44c8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b44cc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B44CCu;
    {
        const bool branch_taken_0x2b44cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44cc) {
            ctx->pc = 0x2B44D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44CCu;
            // 0x2b44d0: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B44F0u;
            goto label_2b44f0;
        }
    }
    ctx->pc = 0x2B44D4u;
    // 0x2b44d4: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2B44D4u;
    SET_GPR_U32(ctx, 31, 0x2B44DCu);
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44DCu; }
        if (ctx->pc != 0x2B44DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44DCu; }
        if (ctx->pc != 0x2B44DCu) { return; }
    }
    ctx->pc = 0x2B44DCu;
label_2b44dc:
    // 0x2b44dc: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b44e0: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b44e4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2b44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2b44e8: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b44ec: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b44f0:
    // 0x2b44f0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b44f4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B44F4u;
    {
        const bool branch_taken_0x2b44f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44f4) {
            ctx->pc = 0x2B44F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44F4u;
            // 0x2b44f8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4528u;
            goto label_2b4528;
        }
    }
    ctx->pc = 0x2B44FCu;
    // 0x2b44fc: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2B44FCu;
    SET_GPR_U32(ctx, 31, 0x2B4504u);
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4504u; }
        if (ctx->pc != 0x2B4504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4504u; }
        if (ctx->pc != 0x2B4504u) { return; }
    }
    ctx->pc = 0x2B4504u;
label_2b4504:
    // 0x2b4504: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4508: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b450c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B450Cu;
    {
        const bool branch_taken_0x2b450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B450Cu;
            // 0x2b4510: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b450c) {
            ctx->pc = 0x2B4524u;
            goto label_2b4524;
        }
    }
    ctx->pc = 0x2B4514u;
label_2b4514:
    // 0x2b4514: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B4514u;
    SET_GPR_U32(ctx, 31, 0x2B451Cu);
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B451Cu; }
        if (ctx->pc != 0x2B451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B451Cu; }
        if (ctx->pc != 0x2B451Cu) { return; }
    }
    ctx->pc = 0x2B451Cu;
label_2b451c:
    // 0x2b451c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4520: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2b4520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_2b4524:
    // 0x2b4524: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b4528:
    // 0x2b4528: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b4528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b452c: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x2b452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2b4530: 0xdc740010  ld          $s4, 0x10($v1)
    ctx->pc = 0x2b4530u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b4534: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2b4534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2b4538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b4538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b453c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b453cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4540: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2B4540u;
    {
        const bool branch_taken_0x2b4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4540u;
            // 0x2b4544: 0xdc7e0018  ld          $fp, 0x18($v1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4540) {
            ctx->pc = 0x2B46A8u;
            goto label_2b46a8;
        }
    }
    ctx->pc = 0x2B4548u;
    // 0x2b4548: 0xc0aa35a  jal         func_2A8D68
    ctx->pc = 0x2B4548u;
    SET_GPR_U32(ctx, 31, 0x2B4550u);
    ctx->pc = 0x2A8D68u;
    if (runtime->hasFunction(0x2A8D68u)) {
        auto targetFn = runtime->lookupFunction(0x2A8D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4550u; }
        if (ctx->pc != 0x2B4550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8D68_0x2a8d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4550u; }
        if (ctx->pc != 0x2B4550u) { return; }
    }
    ctx->pc = 0x2B4550u;
label_2b4550:
    // 0x2b4550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b4550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4554: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4554u;
    {
        const bool branch_taken_0x2b4554 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4554) {
            ctx->pc = 0x2B4558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4554u;
            // 0x2b4558: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B455Cu;
    // 0x2b455c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4560: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4564: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x2B4564u;
    {
        const bool branch_taken_0x2b4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4564u;
            // 0x2b4568: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4564) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B456Cu;
label_2b456c:
    // 0x2b456c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b456cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b4570: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b4570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b4574: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b4574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b4578: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x2b4578u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b457c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b457cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4580: 0x24f60002  addiu       $s6, $a3, 0x2
    ctx->pc = 0x2b4580u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2b4584: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x2b4584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2b4588: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4588u;
    {
        const bool branch_taken_0x2b4588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4588u;
            // 0x2b458c: 0xafb20034  sw          $s2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4588) {
            ctx->pc = 0x2B45A4u;
            goto label_2b45a4;
        }
    }
    ctx->pc = 0x2B4590u;
    // 0x2b4590: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b4590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b4594: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4598: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b459c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2B459Cu;
    {
        const bool branch_taken_0x2b459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B459Cu;
            // 0x2b45a0: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b459c) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B45A4u;
label_2b45a4:
    // 0x2b45a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b45a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b45ac: 0xc0aa38e  jal         func_2A8E38
    ctx->pc = 0x2B45ACu;
    SET_GPR_U32(ctx, 31, 0x2B45B4u);
    ctx->pc = 0x2B45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45ACu;
            // 0x2b45b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E38u;
    if (runtime->hasFunction(0x2A8E38u)) {
        auto targetFn = runtime->lookupFunction(0x2A8E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B45B4u; }
        if (ctx->pc != 0x2B45B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8E38_0x2a8e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B45B4u; }
        if (ctx->pc != 0x2B45B4u) { return; }
    }
    ctx->pc = 0x2B45B4u;
label_2b45b4:
    // 0x2b45b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B45B4u;
    {
        const bool branch_taken_0x2b45b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B45B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45B4u;
            // 0x2b45b8: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45b4) {
            ctx->pc = 0x2B45CCu;
            goto label_2b45cc;
        }
    }
    ctx->pc = 0x2B45BCu;
    // 0x2b45bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b45c0: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b45c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b45c4: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x2B45C4u;
    {
        const bool branch_taken_0x2b45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45C4u;
            // 0x2b45c8: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45c4) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B45CCu;
label_2b45cc:
    // 0x2b45cc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x2b45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b45d0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b45d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b45d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b45d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b45d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b45d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b45dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b45e0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b45e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b45e4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x2b45e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b45e8: 0x87b021  addu        $s6, $a0, $a3
    ctx->pc = 0x2b45e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b45ec: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2b45ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45f0: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x2b45f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b45f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B45F4u;
    {
        const bool branch_taken_0x2b45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45F4u;
            // 0x2b45f8: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45f4) {
            ctx->pc = 0x2B4610u;
            goto label_2b4610;
        }
    }
    ctx->pc = 0x2B45FCu;
    // 0x2b45fc: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b45fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b4600: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4604: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4608: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2B4608u;
    {
        const bool branch_taken_0x2b4608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4608u;
            // 0x2b460c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4608) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4610u;
label_2b4610:
    // 0x2b4610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4614: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2b4614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b4618: 0xc0aa38e  jal         func_2A8E38
    ctx->pc = 0x2B4618u;
    SET_GPR_U32(ctx, 31, 0x2B4620u);
    ctx->pc = 0x2B461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4618u;
            // 0x2b461c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E38u;
    if (runtime->hasFunction(0x2A8E38u)) {
        auto targetFn = runtime->lookupFunction(0x2A8E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4620u; }
        if (ctx->pc != 0x2B4620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8E38_0x2a8e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4620u; }
        if (ctx->pc != 0x2B4620u) { return; }
    }
    ctx->pc = 0x2B4620u;
label_2b4620:
    // 0x2b4620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4620u;
    {
        const bool branch_taken_0x2b4620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4620u;
            // 0x2b4624: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4620) {
            ctx->pc = 0x2B4638u;
            goto label_2b4638;
        }
    }
    ctx->pc = 0x2B4628u;
    // 0x2b4628: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b462c: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4630: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2B4630u;
    {
        const bool branch_taken_0x2b4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4630u;
            // 0x2b4634: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4630) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4638u;
label_2b4638:
    // 0x2b4638: 0x2b2a82f  dsubu       $s5, $s5, $s2
    ctx->pc = 0x2b4638u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 18));
    // 0x2b463c: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x2b463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x2b4640: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2B4640u;
    {
        const bool branch_taken_0x2b4640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4640u;
            // 0x2b4644: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4640) {
            ctx->pc = 0x2B4ACCu;
            goto label_2b4acc;
        }
    }
    ctx->pc = 0x2B4648u;
    // 0x2b4648: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b464c: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4650: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B4650u;
    SET_GPR_U32(ctx, 31, 0x2B4658u);
    ctx->pc = 0x2B4654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4650u;
            // 0x2b4654: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4658u; }
        if (ctx->pc != 0x2B4658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4658u; }
        if (ctx->pc != 0x2B4658u) { return; }
    }
    ctx->pc = 0x2B4658u;
label_2b4658:
    // 0x2b4658: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2b465c: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x2b465cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x2b4660: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4660u;
    {
        const bool branch_taken_0x2b4660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4660u;
            // 0x2b4664: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4660) {
            ctx->pc = 0x2B4698u;
            goto label_2b4698;
        }
    }
    ctx->pc = 0x2B4668u;
    // 0x2b4668: 0x33c2ff00  andi        $v0, $fp, 0xFF00
    ctx->pc = 0x2b4668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65280);
    // 0x2b466c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2b466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2b4670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b4674: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4678: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4678u;
    {
        const bool branch_taken_0x2b4678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4678u;
            // 0x2b467c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4678) {
            ctx->pc = 0x2B468Cu;
            goto label_2b468c;
        }
    }
    ctx->pc = 0x2B4680u;
    // 0x2b4680: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4684: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2B4684u;
    {
        const bool branch_taken_0x2b4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4684u;
            // 0x2b4688: 0xac730028  sw          $s3, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4684) {
            ctx->pc = 0x2B489Cu;
            goto label_2b489c;
        }
    }
    ctx->pc = 0x2B468Cu;
label_2b468c:
    // 0x2b468c: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4690: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2B4690u;
    {
        const bool branch_taken_0x2b4690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4690u;
            // 0x2b4694: 0xac730024  sw          $s3, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4690) {
            ctx->pc = 0x2B489Cu;
            goto label_2b489c;
        }
    }
    ctx->pc = 0x2B4698u;
label_2b4698:
    // 0x2b4698: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b469c: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b46a0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2B46A0u;
    {
        const bool branch_taken_0x2b46a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46A0u;
            // 0x2b46a4: 0xac730020  sw          $s3, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46a0) {
            ctx->pc = 0x2B489Cu;
            goto label_2b489c;
        }
    }
    ctx->pc = 0x2B46A8u;
label_2b46a8:
    // 0x2b46a8: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x2b46a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x2b46ac: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2B46ACu;
    {
        const bool branch_taken_0x2b46ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46ACu;
            // 0x2b46b0: 0x32820006  andi        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46ac) {
            ctx->pc = 0x2B4884u;
            goto label_2b4884;
        }
    }
    ctx->pc = 0x2B46B4u;
    // 0x2b46b4: 0xc0a4fe2  jal         func_293F88
    ctx->pc = 0x2B46B4u;
    SET_GPR_U32(ctx, 31, 0x2B46BCu);
    ctx->pc = 0x293F88u;
    if (runtime->hasFunction(0x293F88u)) {
        auto targetFn = runtime->lookupFunction(0x293F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46BCu; }
        if (ctx->pc != 0x2B46BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293F88_0x293f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46BCu; }
        if (ctx->pc != 0x2B46BCu) { return; }
    }
    ctx->pc = 0x2B46BCu;
label_2b46bc:
    // 0x2b46bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B46BCu;
    {
        const bool branch_taken_0x2b46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B46C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46BCu;
            // 0x2b46c0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46bc) {
            ctx->pc = 0x2B46D4u;
            goto label_2b46d4;
        }
    }
    ctx->pc = 0x2B46C4u;
    // 0x2b46c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b46c8: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b46cc: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2B46CCu;
    {
        const bool branch_taken_0x2b46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46CCu;
            // 0x2b46d0: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46cc) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B46D4u;
label_2b46d4:
    // 0x2b46d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b46d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b46d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b46d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b46dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b46e0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b46e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b46e4: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x2b46e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b46e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b46e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46ec: 0x24f60002  addiu       $s6, $a3, 0x2
    ctx->pc = 0x2b46ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2b46f0: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x2b46f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2b46f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B46F4u;
    {
        const bool branch_taken_0x2b46f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46F4u;
            // 0x2b46f8: 0xafb20034  sw          $s2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46f4) {
            ctx->pc = 0x2B4710u;
            goto label_2b4710;
        }
    }
    ctx->pc = 0x2B46FCu;
    // 0x2b46fc: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b46fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b4700: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4704: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4708: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2B4708u;
    {
        const bool branch_taken_0x2b4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4708u;
            // 0x2b470c: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4708) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4710u;
label_2b4710:
    // 0x2b4710: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b4710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b4714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4718: 0xc0a502e  jal         func_2940B8
    ctx->pc = 0x2B4718u;
    SET_GPR_U32(ctx, 31, 0x2B4720u);
    ctx->pc = 0x2B471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4718u;
            // 0x2b471c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940B8u;
    if (runtime->hasFunction(0x2940B8u)) {
        auto targetFn = runtime->lookupFunction(0x2940B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4720u; }
        if (ctx->pc != 0x2B4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002940B8_0x2940b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4720u; }
        if (ctx->pc != 0x2B4720u) { return; }
    }
    ctx->pc = 0x2B4720u;
label_2b4720:
    // 0x2b4720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4720u;
    {
        const bool branch_taken_0x2b4720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4720u;
            // 0x2b4724: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4720) {
            ctx->pc = 0x2B4734u;
            goto label_2b4734;
        }
    }
    ctx->pc = 0x2B4728u;
    // 0x2b4728: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b472c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2B472Cu;
    {
        const bool branch_taken_0x2b472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B472Cu;
            // 0x2b4730: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b472c) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4734u;
label_2b4734:
    // 0x2b4734: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b4734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b4738: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x2b4738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b473c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b473cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b4740: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b4740u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4744: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b4744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b4748: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b4748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b474c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b474cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b4750: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x2b4750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b4754: 0x87b021  addu        $s6, $a0, $a3
    ctx->pc = 0x2b4754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b4758: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x2b4758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2b475c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B475Cu;
    {
        const bool branch_taken_0x2b475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B475Cu;
            // 0x2b4760: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b475c) {
            ctx->pc = 0x2B4778u;
            goto label_2b4778;
        }
    }
    ctx->pc = 0x2B4764u;
    // 0x2b4764: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b4764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b4768: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b476c: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4770: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2B4770u;
    {
        const bool branch_taken_0x2b4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4770u;
            // 0x2b4774: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4770) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4778u;
label_2b4778:
    // 0x2b4778: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b4778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b477c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4780: 0xc0a502e  jal         func_2940B8
    ctx->pc = 0x2B4780u;
    SET_GPR_U32(ctx, 31, 0x2B4788u);
    ctx->pc = 0x2B4784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4780u;
            // 0x2b4784: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940B8u;
    if (runtime->hasFunction(0x2940B8u)) {
        auto targetFn = runtime->lookupFunction(0x2940B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4788u; }
        if (ctx->pc != 0x2B4788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002940B8_0x2940b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4788u; }
        if (ctx->pc != 0x2B4788u) { return; }
    }
    ctx->pc = 0x2B4788u;
label_2b4788:
    // 0x2b4788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4788u;
    {
        const bool branch_taken_0x2b4788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4788u;
            // 0x2b478c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4788) {
            ctx->pc = 0x2B479Cu;
            goto label_2b479c;
        }
    }
    ctx->pc = 0x2B4790u;
    // 0x2b4790: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4794: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2B4794u;
    {
        const bool branch_taken_0x2b4794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4794u;
            // 0x2b4798: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4794) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B479Cu;
label_2b479c:
    // 0x2b479c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b47a0: 0x26c40002  addiu       $a0, $s6, 0x2
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x2b47a4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b47a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b47a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b47a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b47ac: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b47acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b47b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b47b4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b47b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b47b8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x2b47b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b47bc: 0x87b021  addu        $s6, $a0, $a3
    ctx->pc = 0x2b47bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b47c0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2b47c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47c4: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x2b47c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b47c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B47C8u;
    {
        const bool branch_taken_0x2b47c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47C8u;
            // 0x2b47cc: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47c8) {
            ctx->pc = 0x2B47E4u;
            goto label_2b47e4;
        }
    }
    ctx->pc = 0x2B47D0u;
    // 0x2b47d0: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b47d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b47d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b47d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b47d8: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b47d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b47dc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2B47DCu;
    {
        const bool branch_taken_0x2b47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47DCu;
            // 0x2b47e0: 0x2406006d  addiu       $a2, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47dc) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B47E4u;
label_2b47e4:
    // 0x2b47e4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b47e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b47ec: 0xc0a502e  jal         func_2940B8
    ctx->pc = 0x2B47ECu;
    SET_GPR_U32(ctx, 31, 0x2B47F4u);
    ctx->pc = 0x2B47F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47ECu;
            // 0x2b47f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940B8u;
    if (runtime->hasFunction(0x2940B8u)) {
        auto targetFn = runtime->lookupFunction(0x2940B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B47F4u; }
        if (ctx->pc != 0x2B47F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002940B8_0x2940b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B47F4u; }
        if (ctx->pc != 0x2B47F4u) { return; }
    }
    ctx->pc = 0x2B47F4u;
label_2b47f4:
    // 0x2b47f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B47F4u;
    {
        const bool branch_taken_0x2b47f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47F4u;
            // 0x2b47f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47f4) {
            ctx->pc = 0x2B4808u;
            goto label_2b4808;
        }
    }
    ctx->pc = 0x2B47FCu;
    // 0x2b47fc: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4800: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2B4800u;
    {
        const bool branch_taken_0x2b4800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4800u;
            // 0x2b4804: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4800) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4808u;
label_2b4808:
    // 0x2b4808: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b4808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b480c: 0x2b2a82f  dsubu       $s5, $s5, $s2
    ctx->pc = 0x2b480cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 18));
    // 0x2b4810: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x2b4810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x2b4814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4814u;
    {
        const bool branch_taken_0x2b4814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4814u;
            // 0x2b4818: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4814) {
            ctx->pc = 0x2B4830u;
            goto label_2b4830;
        }
    }
    ctx->pc = 0x2B481Cu;
    // 0x2b481c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4820: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4824: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B4824u;
    SET_GPR_U32(ctx, 31, 0x2B482Cu);
    ctx->pc = 0x2B4828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4824u;
            // 0x2b4828: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B482Cu; }
        if (ctx->pc != 0x2B482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B482Cu; }
        if (ctx->pc != 0x2B482Cu) { return; }
    }
    ctx->pc = 0x2B482Cu;
label_2b482c:
    // 0x2b482c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b482cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4830:
    // 0x2b4830: 0x32820040  andi        $v0, $s4, 0x40
    ctx->pc = 0x2b4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
    // 0x2b4834: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4834u;
    {
        const bool branch_taken_0x2b4834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4834u;
            // 0x2b4838: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4834) {
            ctx->pc = 0x2B4854u;
            goto label_2b4854;
        }
    }
    ctx->pc = 0x2B483Cu;
    // 0x2b483c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2b4840: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4844: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B4844u;
    SET_GPR_U32(ctx, 31, 0x2B484Cu);
    ctx->pc = 0x2B4848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4844u;
            // 0x2b4848: 0x8c640050  lw          $a0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B484Cu; }
        if (ctx->pc != 0x2B484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B484Cu; }
        if (ctx->pc != 0x2B484Cu) { return; }
    }
    ctx->pc = 0x2B484Cu;
label_2b484c:
    // 0x2b484c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b484cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4850: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2b4854:
    // 0x2b4854: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2b4854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2b4858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4858u;
    {
        const bool branch_taken_0x2b4858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4858u;
            // 0x2b485c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4858) {
            ctx->pc = 0x2B4870u;
            goto label_2b4870;
        }
    }
    ctx->pc = 0x2B4860u;
    // 0x2b4860: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4864: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2b4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b4868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4868u;
    {
        const bool branch_taken_0x2b4868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4868u;
            // 0x2b486c: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4868) {
            ctx->pc = 0x2B487Cu;
            goto label_2b487c;
        }
    }
    ctx->pc = 0x2B4870u;
label_2b4870:
    // 0x2b4870: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b4870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b4874: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b4878: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2b4878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2b487c:
    // 0x2b487c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B487Cu;
    {
        const bool branch_taken_0x2b487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B487Cu;
            // 0x2b4880: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b487c) {
            ctx->pc = 0x2B489Cu;
            goto label_2b489c;
        }
    }
    ctx->pc = 0x2B4884u;
label_2b4884:
    // 0x2b4884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4884u;
    {
        const bool branch_taken_0x2b4884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4884u;
            // 0x2b4888: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4884) {
            ctx->pc = 0x2B489Cu;
            goto label_2b489c;
        }
    }
    ctx->pc = 0x2B488Cu;
    // 0x2b488c: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x2b488cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b4890: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4894: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2B4894u;
    {
        const bool branch_taken_0x2b4894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4894u;
            // 0x2b4898: 0x240600eb  addiu       $a2, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4894) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B489Cu;
label_2b489c:
    // 0x2b489c: 0x32820080  andi        $v0, $s4, 0x80
    ctx->pc = 0x2b489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
    // 0x2b48a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B48A0u;
    {
        const bool branch_taken_0x2b48a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48A0u;
            // 0x2b48a4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48a0) {
            ctx->pc = 0x2B48B8u;
            goto label_2b48b8;
        }
    }
    ctx->pc = 0x2B48A8u;
    // 0x2b48a8: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b48ac: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b48acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b48b0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2B48B0u;
    {
        const bool branch_taken_0x2b48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48B0u;
            // 0x2b48b4: 0x240600eb  addiu       $a2, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48b0) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B48B8u;
label_2b48b8:
    // 0x2b48b8: 0x12e00081  beqz        $s7, . + 4 + (0x81 << 2)
    ctx->pc = 0x2B48B8u;
    {
        const bool branch_taken_0x2b48b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48B8u;
            // 0x2b48bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48b8) {
            ctx->pc = 0x2B4AC0u;
            goto label_2b4ac0;
        }
    }
    ctx->pc = 0x2B48C0u;
    // 0x2b48c0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b48c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b48c4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b48c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b48c8: 0x66b5fffe  daddiu      $s5, $s5, -0x2
    ctx->pc = 0x2b48c8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967294);
    // 0x2b48cc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b48d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2b48d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b48d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b48d8: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2B48D8u;
    SET_GPR_U32(ctx, 31, 0x2B48E0u);
    ctx->pc = 0x2B48DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48D8u;
            // 0x2b48dc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (runtime->hasFunction(0x2BBC38u)) {
        auto targetFn = runtime->lookupFunction(0x2BBC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48E0u; }
        if (ctx->pc != 0x2B48E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBC38_0x2bbc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48E0u; }
        if (ctx->pc != 0x2B48E0u) { return; }
    }
    ctx->pc = 0x2B48E0u;
label_2b48e0:
    // 0x2b48e0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b48e4: 0x14750006  bne         $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B48E4u;
    {
        const bool branch_taken_0x2b48e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B48E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48E4u;
            // 0x2b48e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48e4) {
            ctx->pc = 0x2B4900u;
            goto label_2b4900;
        }
    }
    ctx->pc = 0x2B48ECu;
    // 0x2b48ec: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x2b48ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2b48f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B48F0u;
    {
        const bool branch_taken_0x2b48f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b48f0) {
            ctx->pc = 0x2B48F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48F0u;
            // 0x2b48f4: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4904u;
            goto label_2b4904;
        }
    }
    ctx->pc = 0x2B48F8u;
    // 0x2b48f8: 0x5ea00006  bgtzl       $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B48F8u;
    {
        const bool branch_taken_0x2b48f8 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2b48f8) {
            ctx->pc = 0x2B48FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48F8u;
            // 0x2b48fc: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4914u;
            goto label_2b4914;
        }
    }
    ctx->pc = 0x2B4900u;
label_2b4900:
    // 0x2b4900: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2b4904:
    // 0x2b4904: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4908: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b490c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2B490Cu;
    {
        const bool branch_taken_0x2b490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B490Cu;
            // 0x2b4910: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b490c) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4914u;
label_2b4914:
    // 0x2b4914: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b4914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b4918: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B4918u;
    {
        const bool branch_taken_0x2b4918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B491Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4918u;
            // 0x2b491c: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4918) {
            ctx->pc = 0x2B4A14u;
            goto label_2b4a14;
        }
    }
    ctx->pc = 0x2B4920u;
    // 0x2b4920: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4924: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x2b4924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4928: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b492c: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2b492cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b4930:
    // 0x2b4930: 0x169e0003  bne         $s4, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4930u;
    {
        const bool branch_taken_0x2b4930 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x2B4934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4930u;
            // 0x2b4934: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4930) {
            ctx->pc = 0x2B4940u;
            goto label_2b4940;
        }
    }
    ctx->pc = 0x2B4938u;
    // 0x2b4938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4938u;
    {
        const bool branch_taken_0x2b4938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4938u;
            // 0x2b493c: 0x8c450104  lw          $a1, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4938) {
            ctx->pc = 0x2B4944u;
            goto label_2b4944;
        }
    }
    ctx->pc = 0x2B4940u;
label_2b4940:
    // 0x2b4940: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_2b4944:
    // 0x2b4944: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2B4944u;
    SET_GPR_U32(ctx, 31, 0x2B494Cu);
    ctx->pc = 0x2B4948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4944u;
            // 0x2b4948: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B494Cu; }
        if (ctx->pc != 0x2B494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B494Cu; }
        if (ctx->pc != 0x2B494Cu) { return; }
    }
    ctx->pc = 0x2B494Cu;
label_2b494c:
    // 0x2b494c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2B494Cu;
    {
        const bool branch_taken_0x2b494c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B494Cu;
            // 0x2b4950: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b494c) {
            ctx->pc = 0x2B4B1Cu;
            goto label_2b4b1c;
        }
    }
    ctx->pc = 0x2B4954u;
    // 0x2b4954: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b4954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b4958: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b495c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2b495cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2b4960: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4960u;
    SET_GPR_U32(ctx, 31, 0x2B4968u);
    ctx->pc = 0x2B4964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4960u;
            // 0x2b4964: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4968u; }
        if (ctx->pc != 0x2B4968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4968u; }
        if (ctx->pc != 0x2B4968u) { return; }
    }
    ctx->pc = 0x2B4968u;
label_2b4968:
    // 0x2b4968: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b4968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b496c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4970: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4974: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4974u;
    SET_GPR_U32(ctx, 31, 0x2B497Cu);
    ctx->pc = 0x2B4978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4974u;
            // 0x2b4978: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B497Cu; }
        if (ctx->pc != 0x2B497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B497Cu; }
        if (ctx->pc != 0x2B497Cu) { return; }
    }
    ctx->pc = 0x2B497Cu;
label_2b497c:
    // 0x2b497c: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4980: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b4980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4984: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4984u;
    SET_GPR_U32(ctx, 31, 0x2B498Cu);
    ctx->pc = 0x2B4988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4984u;
            // 0x2b4988: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B498Cu; }
        if (ctx->pc != 0x2B498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B498Cu; }
        if (ctx->pc != 0x2B498Cu) { return; }
    }
    ctx->pc = 0x2B498Cu;
label_2b498c:
    // 0x2b498c: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4994: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2B4994u;
    SET_GPR_U32(ctx, 31, 0x2B499Cu);
    ctx->pc = 0x2B4998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4994u;
            // 0x2b4998: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B499Cu; }
        if (ctx->pc != 0x2B499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B499Cu; }
        if (ctx->pc != 0x2B499Cu) { return; }
    }
    ctx->pc = 0x2B499Cu;
label_2b499c:
    // 0x2b499c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2b499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b49a0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2b49a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b49a4: 0x1e80ffe2  bgtz        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B49A4u;
    {
        const bool branch_taken_0x2b49a4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2B49A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49A4u;
            // 0x2b49a8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49a4) {
            ctx->pc = 0x2B4930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4930;
        }
    }
    ctx->pc = 0x2B49ACu;
    // 0x2b49ac: 0x8ee7000c  lw          $a3, 0xC($s7)
    ctx->pc = 0x2b49acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2b49b0: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x2b49b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2b49b4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b49b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b49b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b49b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b49bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49c0: 0xc0aa4a6  jal         func_2A9298
    ctx->pc = 0x2B49C0u;
    SET_GPR_U32(ctx, 31, 0x2B49C8u);
    ctx->pc = 0x2B49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49C0u;
            // 0x2b49c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9298u;
    if (runtime->hasFunction(0x2A9298u)) {
        auto targetFn = runtime->lookupFunction(0x2A9298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49C8u; }
        if (ctx->pc != 0x2B49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9298_0x2a9298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49C8u; }
        if (ctx->pc != 0x2B49C8u) { return; }
    }
    ctx->pc = 0x2B49C8u;
label_2b49c8:
    // 0x2b49c8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B49C8u;
    {
        const bool branch_taken_0x2b49c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B49CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49C8u;
            // 0x2b49cc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49c8) {
            ctx->pc = 0x2B49E4u;
            goto label_2b49e4;
        }
    }
    ctx->pc = 0x2B49D0u;
    // 0x2b49d0: 0x24100033  addiu       $s0, $zero, 0x33
    ctx->pc = 0x2b49d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2b49d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b49d8: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b49d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b49dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2B49DCu;
    {
        const bool branch_taken_0x2b49dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49DCu;
            // 0x2b49e0: 0x24060076  addiu       $a2, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49dc) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B49E4u;
label_2b49e4:
    // 0x2b49e4: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B49E4u;
    {
        const bool branch_taken_0x2b49e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b49e4) {
            ctx->pc = 0x2B49E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49E4u;
            // 0x2b49e8: 0x24100033  addiu       $s0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4A04u;
            goto label_2b4a04;
        }
    }
    ctx->pc = 0x2B49ECu;
    // 0x2b49ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b49f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49f4: 0xc049c22  jal         func_127088
    ctx->pc = 0x2B49F4u;
    SET_GPR_U32(ctx, 31, 0x2B49FCu);
    ctx->pc = 0x2B49F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49F4u;
            // 0x2b49f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49FCu; }
        if (ctx->pc != 0x2B49FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49FCu; }
        if (ctx->pc != 0x2B49FCu) { return; }
    }
    ctx->pc = 0x2B49FCu;
label_2b49fc:
    // 0x2b49fc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B49FCu;
    {
        const bool branch_taken_0x2b49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49FCu;
            // 0x2b4a00: 0x24100033  addiu       $s0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49fc) {
            ctx->pc = 0x2B4B14u;
            goto label_2b4b14;
        }
    }
    ctx->pc = 0x2B4A04u;
label_2b4a04:
    // 0x2b4a04: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4a08: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4a0c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2B4A0Cu;
    {
        const bool branch_taken_0x2b4a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A0Cu;
            // 0x2b4a10: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a0c) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4A14u;
label_2b4a14:
    // 0x2b4a14: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B4A14u;
    {
        const bool branch_taken_0x2b4a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A14u;
            // 0x2b4a18: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a14) {
            ctx->pc = 0x2B4AD0u;
            goto label_2b4ad0;
        }
    }
    ctx->pc = 0x2B4A1Cu;
    // 0x2b4a1c: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2b4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2b4a20: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4a24: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2B4A24u;
    SET_GPR_U32(ctx, 31, 0x2B4A2Cu);
    ctx->pc = 0x2B4A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A24u;
            // 0x2b4a28: 0x8c45010c  lw          $a1, 0x10C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A2Cu; }
        if (ctx->pc != 0x2B4A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A2Cu; }
        if (ctx->pc != 0x2B4A2Cu) { return; }
    }
    ctx->pc = 0x2B4A2Cu;
label_2b4a2c:
    // 0x2b4a2c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4A2Cu;
    {
        const bool branch_taken_0x2b4a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4a2c) {
            ctx->pc = 0x2B4A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A2Cu;
            // 0x2b4a30: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4A58u;
            goto label_2b4a58;
        }
    }
    ctx->pc = 0x2B4A34u;
    // 0x2b4a34: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4a38: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4a3c: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x2b4a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x2b4a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a48: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4A48u;
    SET_GPR_U32(ctx, 31, 0x2B4A50u);
    ctx->pc = 0x2B4A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A48u;
            // 0x2b4a4c: 0x24100050  addiu       $s0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A50u; }
        if (ctx->pc != 0x2B4A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A50u; }
        if (ctx->pc != 0x2B4A50u) { return; }
    }
    ctx->pc = 0x2B4A50u;
label_2b4a50:
    // 0x2b4a50: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B4A50u;
    {
        const bool branch_taken_0x2b4a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A50u;
            // 0x2b4a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a50) {
            ctx->pc = 0x2B4B24u;
            goto label_2b4b24;
        }
    }
    ctx->pc = 0x2B4A58u;
label_2b4a58:
    // 0x2b4a58: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4a5c: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4a60: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4A60u;
    SET_GPR_U32(ctx, 31, 0x2B4A68u);
    ctx->pc = 0x2B4A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A60u;
            // 0x2b4a64: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A68u; }
        if (ctx->pc != 0x2B4A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A68u; }
        if (ctx->pc != 0x2B4A68u) { return; }
    }
    ctx->pc = 0x2B4A68u;
label_2b4a68:
    // 0x2b4a68: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b4a6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b4a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4a70: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4a74: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4A74u;
    SET_GPR_U32(ctx, 31, 0x2B4A7Cu);
    ctx->pc = 0x2B4A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A74u;
            // 0x2b4a78: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A7Cu; }
        if (ctx->pc != 0x2B4A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A7Cu; }
        if (ctx->pc != 0x2B4A7Cu) { return; }
    }
    ctx->pc = 0x2B4A7Cu;
label_2b4a7c:
    // 0x2b4a7c: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4a80: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b4a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a84: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2B4A84u;
    SET_GPR_U32(ctx, 31, 0x2B4A8Cu);
    ctx->pc = 0x2B4A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A84u;
            // 0x2b4a88: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A8Cu; }
        if (ctx->pc != 0x2B4A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A8Cu; }
        if (ctx->pc != 0x2B4A8Cu) { return; }
    }
    ctx->pc = 0x2B4A8Cu;
label_2b4a8c:
    // 0x2b4a8c: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b4a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a94: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x2b4a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2b4a98: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2b4a98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2b4a9c: 0xc0a73f4  jal         func_29CFD0
    ctx->pc = 0x2B4A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4AA4u);
    ctx->pc = 0x2B4AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A9Cu;
            // 0x2b4aa0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CFD0u;
    if (runtime->hasFunction(0x29CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AA4u; }
        if (ctx->pc != 0x2B4AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CFD0_0x29cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AA4u; }
        if (ctx->pc != 0x2B4AA4u) { return; }
    }
    ctx->pc = 0x2B4AA4u;
label_2b4aa4:
    // 0x2b4aa4: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B4AA4u;
    {
        const bool branch_taken_0x2b4aa4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B4AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AA4u;
            // 0x2b4aa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aa4) {
            ctx->pc = 0x2B4B48u;
            goto label_2b4b48;
        }
    }
    ctx->pc = 0x2B4AACu;
    // 0x2b4aac: 0x24100033  addiu       $s0, $zero, 0x33
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2b4ab0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4ab4: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4ab8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B4AB8u;
    {
        const bool branch_taken_0x2b4ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AB8u;
            // 0x2b4abc: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ab8) {
            ctx->pc = 0x2B4B00u;
            goto label_2b4b00;
        }
    }
    ctx->pc = 0x2B4AC0u;
label_2b4ac0:
    // 0x2b4ac0: 0x32820100  andi        $v0, $s4, 0x100
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x2b4ac4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4AC4u;
    {
        const bool branch_taken_0x2b4ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ac4) {
            ctx->pc = 0x2B4AECu;
            goto label_2b4aec;
        }
    }
    ctx->pc = 0x2B4ACCu;
label_2b4acc:
    // 0x2b4acc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b4ad0:
    // 0x2b4ad0: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4ad4: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2b4ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_2b4ad8:
    // 0x2b4ad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4adc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4ADCu;
    SET_GPR_U32(ctx, 31, 0x2B4AE4u);
    ctx->pc = 0x2B4AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4ADCu;
            // 0x2b4ae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AE4u; }
        if (ctx->pc != 0x2B4AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AE4u; }
        if (ctx->pc != 0x2B4AE4u) { return; }
    }
    ctx->pc = 0x2B4AE4u;
label_2b4ae4:
    // 0x2b4ae4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4AE4u;
    {
        const bool branch_taken_0x2b4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AE4u;
            // 0x2b4ae8: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ae4) {
            ctx->pc = 0x2B4B34u;
            goto label_2b4b34;
        }
    }
    ctx->pc = 0x2B4AECu;
label_2b4aec:
    // 0x2b4aec: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4AECu;
    {
        const bool branch_taken_0x2b4aec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AECu;
            // 0x2b4af0: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aec) {
            ctx->pc = 0x2B4B14u;
            goto label_2b4b14;
        }
    }
    ctx->pc = 0x2B4AF4u;
    // 0x2b4af4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4af8: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2b4afc: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b4b00:
    // 0x2b4b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b04: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4B04u;
    SET_GPR_U32(ctx, 31, 0x2B4B0Cu);
    ctx->pc = 0x2B4B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B04u;
            // 0x2b4b08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B0Cu; }
        if (ctx->pc != 0x2B4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B0Cu; }
        if (ctx->pc != 0x2B4B0Cu) { return; }
    }
    ctx->pc = 0x2B4B0Cu;
label_2b4b0c:
    // 0x2b4b0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4B0Cu;
    {
        const bool branch_taken_0x2b4b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B0Cu;
            // 0x2b4b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b0c) {
            ctx->pc = 0x2B4B24u;
            goto label_2b4b24;
        }
    }
    ctx->pc = 0x2B4B14u;
label_2b4b14:
    // 0x2b4b14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B4B14u;
    {
        const bool branch_taken_0x2b4b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B14u;
            // 0x2b4b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b14) {
            ctx->pc = 0x2B4B48u;
            goto label_2b4b48;
        }
    }
    ctx->pc = 0x2B4B1Cu;
label_2b4b1c:
    // 0x2b4b1c: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b4b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b24:
    // 0x2b4b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b4b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b28: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4B28u;
    SET_GPR_U32(ctx, 31, 0x2B4B30u);
    ctx->pc = 0x2B4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B28u;
            // 0x2b4b2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B30u; }
        if (ctx->pc != 0x2B4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B30u; }
        if (ctx->pc != 0x2B4B30u) { return; }
    }
    ctx->pc = 0x2B4B30u;
label_2b4b30:
    // 0x2b4b30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2b4b34:
    // 0x2b4b34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4B34u;
    {
        const bool branch_taken_0x2b4b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b34) {
            ctx->pc = 0x2B4B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B34u;
            // 0x2b4b38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B48u;
            goto label_2b4b48;
        }
    }
    ctx->pc = 0x2B4B3Cu;
    // 0x2b4b3c: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B44u);
    ctx->pc = 0x2B4B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B3Cu;
            // 0x2b4b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B44u; }
        if (ctx->pc != 0x2B4B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B44u; }
        if (ctx->pc != 0x2B4B44u) { return; }
    }
    ctx->pc = 0x2B4B44u;
label_2b4b44:
    // 0x2b4b44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b4b48:
    // 0x2b4b48: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2b4b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2b4b4c:
    // 0x2b4b4c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2b4b4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b4b50: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2b4b50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b4b54: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2b4b54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b4b58: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2b4b58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b4b5c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2b4b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4b60: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2b4b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4b64: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2b4b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4b68: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2b4b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4b6c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2b4b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B70u;
            // 0x2b4b74: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4B78u;
    ctx->pc = 0x2b4b78u;
}

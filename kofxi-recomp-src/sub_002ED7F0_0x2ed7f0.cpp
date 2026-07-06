#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED7F0
// Address: 0x2ed7f0 - 0x2ed908
void sub_002ED7F0_0x2ed7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED7F0_0x2ed7f0");
#endif

    switch (ctx->pc) {
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed814u: goto label_2ed814;
        case 0x2ed824u: goto label_2ed824;
        case 0x2ed848u: goto label_2ed848;
        case 0x2ed860u: goto label_2ed860;
        case 0x2ed86cu: goto label_2ed86c;
        case 0x2ed888u: goto label_2ed888;
        case 0x2ed8a8u: goto label_2ed8a8;
        case 0x2ed8c0u: goto label_2ed8c0;
        case 0x2ed8ccu: goto label_2ed8cc;
        case 0x2ed8e8u: goto label_2ed8e8;
        default: break;
    }

    ctx->pc = 0x2ed7f0u;

    // 0x2ed7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed7f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed7fc: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2ed7fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed800: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED800u;
    SET_GPR_U32(ctx, 31, 0x2ED808u);
    ctx->pc = 0x2ED804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED800u;
            // 0x2ed804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED808u; }
        if (ctx->pc != 0x2ED808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED808u; }
        if (ctx->pc != 0x2ED808u) { return; }
    }
    ctx->pc = 0x2ED808u;
label_2ed808:
    // 0x2ed808: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED808u;
    {
        const bool branch_taken_0x2ed808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED808u;
            // 0x2ed80c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed808) {
            ctx->pc = 0x2ED830u;
            goto label_2ed830;
        }
    }
    ctx->pc = 0x2ED810u;
    // 0x2ed810: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2ed810u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed814:
    // 0x2ed814: 0x11f00006  beq         $t7, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED814u;
    {
        const bool branch_taken_0x2ed814 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 16));
        ctx->pc = 0x2ED818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED814u;
            // 0x2ed818: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed814) {
            ctx->pc = 0x2ED830u;
            goto label_2ed830;
        }
    }
    ctx->pc = 0x2ED81Cu;
    // 0x2ed81c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED81Cu;
    SET_GPR_U32(ctx, 31, 0x2ED824u);
    ctx->pc = 0x2ED820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED81Cu;
            // 0x2ed820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED824u; }
        if (ctx->pc != 0x2ED824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED824u; }
        if (ctx->pc != 0x2ED824u) { return; }
    }
    ctx->pc = 0x2ED824u;
label_2ed824:
    // 0x2ed824: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ED824u;
    {
        const bool branch_taken_0x2ed824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed824) {
            ctx->pc = 0x2ED828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED824u;
            // 0x2ed828: 0x904f0000  lbu         $t7, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed814;
        }
    }
    ctx->pc = 0x2ED82Cu;
    // 0x2ed82c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2ed82cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed830:
    // 0x2ed830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed834: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2ed834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED83Cu;
            // 0x2ed840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED844u;
    // 0x2ed844: 0x0  nop
    ctx->pc = 0x2ed844u;
    // NOP
label_2ed848:
    // 0x2ed848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed84c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed854: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2ed854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed858: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED858u;
    SET_GPR_U32(ctx, 31, 0x2ED860u);
    ctx->pc = 0x2ED85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED858u;
            // 0x2ed85c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED860u; }
        if (ctx->pc != 0x2ED860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED860u; }
        if (ctx->pc != 0x2ED860u) { return; }
    }
    ctx->pc = 0x2ED860u;
label_2ed860:
    // 0x2ed860: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED860u;
    {
        const bool branch_taken_0x2ed860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED860u;
            // 0x2ed864: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed860) {
            ctx->pc = 0x2ED894u;
            goto label_2ed894;
        }
    }
    ctx->pc = 0x2ED868u;
    // 0x2ed868: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2ed868u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed86c:
    // 0x2ed86c: 0x15f00004  bne         $t7, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED86Cu;
    {
        const bool branch_taken_0x2ed86c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ed86c) {
            ctx->pc = 0x2ED880u;
            goto label_2ed880;
        }
    }
    ctx->pc = 0x2ED874u;
    // 0x2ed874: 0x8c4f0018  lw          $t7, 0x18($v0)
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2ed878: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED878u;
    {
        const bool branch_taken_0x2ed878 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED878u;
            // 0x2ed87c: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed878) {
            ctx->pc = 0x2ED894u;
            goto label_2ed894;
        }
    }
    ctx->pc = 0x2ED880u;
label_2ed880:
    // 0x2ed880: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED880u;
    SET_GPR_U32(ctx, 31, 0x2ED888u);
    ctx->pc = 0x2ED884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED880u;
            // 0x2ed884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED888u; }
        if (ctx->pc != 0x2ED888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED888u; }
        if (ctx->pc != 0x2ED888u) { return; }
    }
    ctx->pc = 0x2ED888u;
label_2ed888:
    // 0x2ed888: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2ED888u;
    {
        const bool branch_taken_0x2ed888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed888) {
            ctx->pc = 0x2ED88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED888u;
            // 0x2ed88c: 0x904f0000  lbu         $t7, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED86Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed86c;
        }
    }
    ctx->pc = 0x2ED890u;
    // 0x2ed890: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2ed890u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed894:
    // 0x2ed894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed898: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2ed898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed89c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8A0u;
            // 0x2ed8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED8A8u;
label_2ed8a8:
    // 0x2ed8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed8b4: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2ed8b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed8b8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED8B8u;
    SET_GPR_U32(ctx, 31, 0x2ED8C0u);
    ctx->pc = 0x2ED8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8B8u;
            // 0x2ed8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8C0u; }
        if (ctx->pc != 0x2ED8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8C0u; }
        if (ctx->pc != 0x2ED8C0u) { return; }
    }
    ctx->pc = 0x2ED8C0u;
label_2ed8c0:
    // 0x2ed8c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED8C0u;
    {
        const bool branch_taken_0x2ed8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8C0u;
            // 0x2ed8c4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8c0) {
            ctx->pc = 0x2ED8F4u;
            goto label_2ed8f4;
        }
    }
    ctx->pc = 0x2ED8C8u;
    // 0x2ed8c8: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2ed8c8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed8cc:
    // 0x2ed8cc: 0x15f00004  bne         $t7, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED8CCu;
    {
        const bool branch_taken_0x2ed8cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ed8cc) {
            ctx->pc = 0x2ED8E0u;
            goto label_2ed8e0;
        }
    }
    ctx->pc = 0x2ED8D4u;
    // 0x2ed8d4: 0x8c4f001c  lw          $t7, 0x1C($v0)
    ctx->pc = 0x2ed8d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ed8d8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED8D8u;
    {
        const bool branch_taken_0x2ed8d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8D8u;
            // 0x2ed8dc: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8d8) {
            ctx->pc = 0x2ED8F4u;
            goto label_2ed8f4;
        }
    }
    ctx->pc = 0x2ED8E0u;
label_2ed8e0:
    // 0x2ed8e0: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED8E0u;
    SET_GPR_U32(ctx, 31, 0x2ED8E8u);
    ctx->pc = 0x2ED8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8E0u;
            // 0x2ed8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8E8u; }
        if (ctx->pc != 0x2ED8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8E8u; }
        if (ctx->pc != 0x2ED8E8u) { return; }
    }
    ctx->pc = 0x2ED8E8u;
label_2ed8e8:
    // 0x2ed8e8: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2ED8E8u;
    {
        const bool branch_taken_0x2ed8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8e8) {
            ctx->pc = 0x2ED8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8E8u;
            // 0x2ed8ec: 0x904f0000  lbu         $t7, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED8CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed8cc;
        }
    }
    ctx->pc = 0x2ED8F0u;
    // 0x2ed8f0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2ed8f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed8f4:
    // 0x2ed8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed8f8: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2ed8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed900: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED900u;
            // 0x2ed904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED908u;
    ctx->pc = 0x2ed908u;
}

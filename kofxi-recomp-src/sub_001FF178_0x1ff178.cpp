#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF178
// Address: 0x1ff178 - 0x1ff248
void sub_001FF178_0x1ff178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF178_0x1ff178");
#endif

    switch (ctx->pc) {
        case 0x1ff1b4u: goto label_1ff1b4;
        case 0x1ff1e8u: goto label_1ff1e8;
        case 0x1ff200u: goto label_1ff200;
        case 0x1ff210u: goto label_1ff210;
        case 0x1ff228u: goto label_1ff228;
        default: break;
    }

    ctx->pc = 0x1ff178u;

    // 0x1ff178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff184: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ff184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff190: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff194: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ff194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff198: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff19c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1ff19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ff1a0: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x1ff1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1ff1a4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FF1A4u;
    {
        const bool branch_taken_0x1ff1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1A4u;
            // 0x1ff1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1a4) {
            ctx->pc = 0x1FF230u;
            goto label_1ff230;
        }
    }
    ctx->pc = 0x1FF1ACu;
    // 0x1ff1ac: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FF1ACu;
    SET_GPR_U32(ctx, 31, 0x1FF1B4u);
    ctx->pc = 0x2004C8u;
    if (runtime->hasFunction(0x2004C8u)) {
        auto targetFn = runtime->lookupFunction(0x2004C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1B4u; }
        if (ctx->pc != 0x1FF1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002004C8_0x2004c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1B4u; }
        if (ctx->pc != 0x1FF1B4u) { return; }
    }
    ctx->pc = 0x1FF1B4u;
label_1ff1b4:
    // 0x1ff1b4: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1ff1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ff1b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff1b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1bc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1ff1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ff1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF1C4u;
    {
        const bool branch_taken_0x1ff1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1C4u;
            // 0x1ff1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1c4) {
            ctx->pc = 0x1FF1E0u;
            goto label_1ff1e0;
        }
    }
    ctx->pc = 0x1FF1CCu;
    // 0x1ff1cc: 0x1066000e  beq         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FF1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1CCu;
            // 0x1ff1d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF208u;
            goto label_1ff208;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF1D4u;
    {
        const bool branch_taken_0x1ff1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1D4u;
            // 0x1ff1d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1d4) {
            ctx->pc = 0x1FF234u;
            goto label_1ff234;
        }
    }
    ctx->pc = 0x1FF1DCu;
    // 0x1ff1dc: 0x0  nop
    ctx->pc = 0x1ff1dcu;
    // NOP
label_1ff1e0:
    // 0x1ff1e0: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FF1E0u;
    SET_GPR_U32(ctx, 31, 0x1FF1E8u);
    ctx->pc = 0x1FFBD0u;
    if (runtime->hasFunction(0x1FFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1E8u; }
        if (ctx->pc != 0x1FF1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFBD0_0x1ffbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1E8u; }
        if (ctx->pc != 0x1FF1E8u) { return; }
    }
    ctx->pc = 0x1FF1E8u;
label_1ff1e8:
    // 0x1ff1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1f0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF1F0u;
    {
        const bool branch_taken_0x1ff1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1F0u;
            // 0x1ff1f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1f0) {
            ctx->pc = 0x1FF230u;
            goto label_1ff230;
        }
    }
    ctx->pc = 0x1FF1F8u;
    // 0x1ff1f8: 0xc080112  jal         func_200448
    ctx->pc = 0x1FF1F8u;
    SET_GPR_U32(ctx, 31, 0x1FF200u);
    ctx->pc = 0x200448u;
    if (runtime->hasFunction(0x200448u)) {
        auto targetFn = runtime->lookupFunction(0x200448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF200u; }
        if (ctx->pc != 0x1FF200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200448_0x200448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF200u; }
        if (ctx->pc != 0x1FF200u) { return; }
    }
    ctx->pc = 0x1FF200u;
label_1ff200:
    // 0x1ff200: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FF200u;
    {
        const bool branch_taken_0x1ff200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF200u;
            // 0x1ff204: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff200) {
            ctx->pc = 0x1FF22Cu;
            goto label_1ff22c;
        }
    }
    ctx->pc = 0x1FF208u;
label_1ff208:
    // 0x1ff208: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FF208u;
    SET_GPR_U32(ctx, 31, 0x1FF210u);
    ctx->pc = 0x1FF20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF208u;
            // 0x1ff20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (runtime->hasFunction(0x1FFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF210u; }
        if (ctx->pc != 0x1FF210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFBD0_0x1ffbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF210u; }
        if (ctx->pc != 0x1FF210u) { return; }
    }
    ctx->pc = 0x1FF210u;
label_1ff210:
    // 0x1ff210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff214: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff218: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF218u;
    {
        const bool branch_taken_0x1ff218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF218u;
            // 0x1ff21c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff218) {
            ctx->pc = 0x1FF230u;
            goto label_1ff230;
        }
    }
    ctx->pc = 0x1FF220u;
    // 0x1ff220: 0xc080122  jal         func_200488
    ctx->pc = 0x1FF220u;
    SET_GPR_U32(ctx, 31, 0x1FF228u);
    ctx->pc = 0x200488u;
    if (runtime->hasFunction(0x200488u)) {
        auto targetFn = runtime->lookupFunction(0x200488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF228u; }
        if (ctx->pc != 0x1FF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200488_0x200488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF228u; }
        if (ctx->pc != 0x1FF228u) { return; }
    }
    ctx->pc = 0x1FF228u;
label_1ff228:
    // 0x1ff228: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ff228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ff22c:
    // 0x1ff22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff230:
    // 0x1ff230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff234:
    // 0x1ff234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff23c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff240: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF240u;
            // 0x1ff244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF248u;
    ctx->pc = 0x1ff248u;
}

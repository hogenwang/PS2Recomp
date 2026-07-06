#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB168
// Address: 0x1cb168 - 0x1cb240
void sub_001CB168_0x1cb168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB168_0x1cb168");
#endif

    switch (ctx->pc) {
        case 0x1cb168u: goto label_1cb168;
        case 0x1cb16cu: goto label_1cb16c;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb174u: goto label_1cb174;
        case 0x1cb178u: goto label_1cb178;
        case 0x1cb17cu: goto label_1cb17c;
        case 0x1cb180u: goto label_1cb180;
        case 0x1cb184u: goto label_1cb184;
        case 0x1cb188u: goto label_1cb188;
        case 0x1cb18cu: goto label_1cb18c;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb194u: goto label_1cb194;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb19cu: goto label_1cb19c;
        case 0x1cb1a0u: goto label_1cb1a0;
        case 0x1cb1a4u: goto label_1cb1a4;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1acu: goto label_1cb1ac;
        case 0x1cb1b0u: goto label_1cb1b0;
        case 0x1cb1b4u: goto label_1cb1b4;
        case 0x1cb1b8u: goto label_1cb1b8;
        case 0x1cb1bcu: goto label_1cb1bc;
        case 0x1cb1c0u: goto label_1cb1c0;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb1c8u: goto label_1cb1c8;
        case 0x1cb1ccu: goto label_1cb1cc;
        case 0x1cb1d0u: goto label_1cb1d0;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1d8u: goto label_1cb1d8;
        case 0x1cb1dcu: goto label_1cb1dc;
        case 0x1cb1e0u: goto label_1cb1e0;
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb1e8u: goto label_1cb1e8;
        case 0x1cb1ecu: goto label_1cb1ec;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb1f4u: goto label_1cb1f4;
        case 0x1cb1f8u: goto label_1cb1f8;
        case 0x1cb1fcu: goto label_1cb1fc;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb204u: goto label_1cb204;
        case 0x1cb208u: goto label_1cb208;
        case 0x1cb20cu: goto label_1cb20c;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb214u: goto label_1cb214;
        case 0x1cb218u: goto label_1cb218;
        case 0x1cb21cu: goto label_1cb21c;
        case 0x1cb220u: goto label_1cb220;
        case 0x1cb224u: goto label_1cb224;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb22cu: goto label_1cb22c;
        case 0x1cb230u: goto label_1cb230;
        case 0x1cb234u: goto label_1cb234;
        case 0x1cb238u: goto label_1cb238;
        case 0x1cb23cu: goto label_1cb23c;
        default: break;
    }

    ctx->pc = 0x1cb168u;

label_1cb168:
    // 0x1cb168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cb16c:
    // 0x1cb16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cb170:
    // 0x1cb170: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cb170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb174:
    // 0x1cb174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cb178:
    // 0x1cb178: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1cb178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cb17c:
    // 0x1cb17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cb180:
    // 0x1cb180: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1cb184:
    if (ctx->pc == 0x1CB184u) {
        ctx->pc = 0x1CB184u;
            // 0x1cb184: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1CB188u;
        goto label_1cb188;
    }
    ctx->pc = 0x1CB180u;
    {
        const bool branch_taken_0x1cb180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB180u;
            // 0x1cb184: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb180) {
            ctx->pc = 0x1CB1A0u;
            goto label_1cb1a0;
        }
    }
    ctx->pc = 0x1CB188u;
label_1cb188:
    // 0x1cb188: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb18c:
    // 0x1cb18c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb190:
    // 0x1cb190: 0x2484b978  addiu       $a0, $a0, -0x4688
    ctx->pc = 0x1cb190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949240));
label_1cb194:
    // 0x1cb194: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cb198:
    if (ctx->pc == 0x1CB198u) {
        ctx->pc = 0x1CB198u;
            // 0x1cb198: 0x24a5b868  addiu       $a1, $a1, -0x4798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
        ctx->pc = 0x1CB19Cu;
        goto label_1cb19c;
    }
    ctx->pc = 0x1CB194u;
    {
        const bool branch_taken_0x1cb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB194u;
            // 0x1cb198: 0x24a5b868  addiu       $a1, $a1, -0x4798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb194) {
            ctx->pc = 0x1CB1BCu;
            goto label_1cb1bc;
        }
    }
    ctx->pc = 0x1CB19Cu;
label_1cb19c:
    // 0x1cb19c: 0x0  nop
    ctx->pc = 0x1cb19cu;
    // NOP
label_1cb1a0:
    // 0x1cb1a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cb1a4:
    // 0x1cb1a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1cb1a8:
    if (ctx->pc == 0x1CB1A8u) {
        ctx->pc = 0x1CB1ACu;
        goto label_1cb1ac;
    }
    ctx->pc = 0x1CB1A4u;
    {
        const bool branch_taken_0x1cb1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1a4) {
            ctx->pc = 0x1CB1D0u;
            goto label_1cb1d0;
        }
    }
    ctx->pc = 0x1CB1ACu;
label_1cb1ac:
    // 0x1cb1ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb1b0:
    // 0x1cb1b0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb1b4:
    // 0x1cb1b4: 0x2484b988  addiu       $a0, $a0, -0x4678
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949256));
label_1cb1b8:
    // 0x1cb1b8: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1cb1bc:
    // 0x1cb1bc: 0xc072a14  jal         func_1CA850
label_1cb1c0:
    if (ctx->pc == 0x1CB1C0u) {
        ctx->pc = 0x1CB1C4u;
        goto label_1cb1c4;
    }
    ctx->pc = 0x1CB1BCu;
    SET_GPR_U32(ctx, 31, 0x1CB1C4u);
    ctx->pc = 0x1CA850u;
    if (runtime->hasFunction(0x1CA850u)) {
        auto targetFn = runtime->lookupFunction(0x1CA850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C4u; }
        if (ctx->pc != 0x1CB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA850_0x1ca850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C4u; }
        if (ctx->pc != 0x1CB1C4u) { return; }
    }
    ctx->pc = 0x1CB1C4u;
label_1cb1c4:
    // 0x1cb1c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cb1c8:
    if (ctx->pc == 0x1CB1C8u) {
        ctx->pc = 0x1CB1C8u;
            // 0x1cb1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1CCu;
        goto label_1cb1cc;
    }
    ctx->pc = 0x1CB1C4u;
    {
        const bool branch_taken_0x1cb1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1C4u;
            // 0x1cb1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1c4) {
            ctx->pc = 0x1CB220u;
            goto label_1cb220;
        }
    }
    ctx->pc = 0x1CB1CCu;
label_1cb1cc:
    // 0x1cb1cc: 0x0  nop
    ctx->pc = 0x1cb1ccu;
    // NOP
label_1cb1d0:
    // 0x1cb1d0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1cb1d4:
    if (ctx->pc == 0x1CB1D4u) {
        ctx->pc = 0x1CB1D4u;
            // 0x1cb1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1D8u;
        goto label_1cb1d8;
    }
    ctx->pc = 0x1CB1D0u;
    {
        const bool branch_taken_0x1cb1d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1D0u;
            // 0x1cb1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d0) {
            ctx->pc = 0x1CB214u;
            goto label_1cb214;
        }
    }
    ctx->pc = 0x1CB1D8u;
label_1cb1d8:
    // 0x1cb1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb1dc:
    // 0x1cb1dc: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_1cb1e0:
    if (ctx->pc == 0x1CB1E0u) {
        ctx->pc = 0x1CB1E0u;
            // 0x1cb1e0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x1CB1E4u;
        goto label_1cb1e4;
    }
    ctx->pc = 0x1CB1DCu;
    {
        const bool branch_taken_0x1cb1dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb1dc) {
            ctx->pc = 0x1CB1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1DCu;
            // 0x1cb1e0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB200u;
            goto label_1cb200;
        }
    }
    ctx->pc = 0x1CB1E4u;
label_1cb1e4:
    // 0x1cb1e4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cb1e8:
    // 0x1cb1e8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x1cb1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1cb1ec:
    // 0x1cb1ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cb1f0:
    if (ctx->pc == 0x1CB1F0u) {
        ctx->pc = 0x1CB1F0u;
            // 0x1cb1f0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1F4u;
        goto label_1cb1f4;
    }
    ctx->pc = 0x1CB1ECu;
    {
        const bool branch_taken_0x1cb1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1ECu;
            // 0x1cb1f0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1ec) {
            ctx->pc = 0x1CB214u;
            goto label_1cb214;
        }
    }
    ctx->pc = 0x1CB1F4u;
label_1cb1f4:
    // 0x1cb1f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cb1f8:
    if (ctx->pc == 0x1CB1F8u) {
        ctx->pc = 0x1CB1F8u;
            // 0x1cb1f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1FCu;
        goto label_1cb1fc;
    }
    ctx->pc = 0x1CB1F4u;
    {
        const bool branch_taken_0x1cb1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1F4u;
            // 0x1cb1f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1f4) {
            ctx->pc = 0x1CB214u;
            goto label_1cb214;
        }
    }
    ctx->pc = 0x1CB1FCu;
label_1cb1fc:
    // 0x1cb1fc: 0x0  nop
    ctx->pc = 0x1cb1fcu;
    // NOP
label_1cb200:
    // 0x1cb200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cb204:
    if (ctx->pc == 0x1CB204u) {
        ctx->pc = 0x1CB204u;
            // 0x1cb204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB208u;
        goto label_1cb208;
    }
    ctx->pc = 0x1CB200u;
    {
        const bool branch_taken_0x1cb200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB200u;
            // 0x1cb204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb200) {
            ctx->pc = 0x1CB214u;
            goto label_1cb214;
        }
    }
    ctx->pc = 0x1CB208u;
label_1cb208:
    // 0x1cb208: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1cb20c:
    // 0x1cb20c: 0x40f809  jalr        $v0
label_1cb210:
    if (ctx->pc == 0x1CB210u) {
        ctx->pc = 0x1CB210u;
            // 0x1cb210: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1CB214u;
        goto label_1cb214;
    }
    ctx->pc = 0x1CB20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB214u);
        ctx->pc = 0x1CB210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB20Cu;
            // 0x1cb210: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB214u; }
            if (ctx->pc != 0x1CB214u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB214u;
label_1cb214:
    // 0x1cb214: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x1cb214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_1cb218:
    // 0x1cb218: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1cb218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_1cb21c:
    // 0x1cb21c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cb220:
    // 0x1cb220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb224:
    // 0x1cb224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cb228:
    // 0x1cb228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb22c:
    // 0x1cb22c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb230:
    // 0x1cb230: 0x3e00008  jr          $ra
label_1cb234:
    if (ctx->pc == 0x1CB234u) {
        ctx->pc = 0x1CB234u;
            // 0x1cb234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CB238u;
        goto label_1cb238;
    }
    ctx->pc = 0x1CB230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB230u;
            // 0x1cb234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB238u;
label_1cb238:
    // 0x1cb238: 0x3e00008  jr          $ra
label_1cb23c:
    if (ctx->pc == 0x1CB23Cu) {
        ctx->pc = 0x1CB23Cu;
            // 0x1cb23c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x1CB240u;
        goto label_fallthrough_0x1cb238;
    }
    ctx->pc = 0x1CB238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB238u;
            // 0x1cb23c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1cb238:
    ctx->pc = 0x1CB240u;
    ctx->pc = 0x1cb240u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC188
// Address: 0x1bc188 - 0x1bc260
void sub_001BC188_0x1bc188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC188_0x1bc188");
#endif

    switch (ctx->pc) {
        case 0x1bc1e0u: goto label_1bc1e0;
        case 0x1bc1e8u: goto label_1bc1e8;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc1fcu: goto label_1bc1fc;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc248u: goto label_1bc248;
        default: break;
    }

    ctx->pc = 0x1bc188u;

    // 0x1bc188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc198: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bc1a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bc1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC1A4u;
    {
        const bool branch_taken_0x1bc1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1A4u;
            // 0x1bc1a8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1a4) {
            ctx->pc = 0x1BC1BCu;
            goto label_1bc1bc;
        }
    }
    ctx->pc = 0x1BC1ACu;
    // 0x1bc1ac: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC1ACu;
    {
        const bool branch_taken_0x1bc1ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1ac) {
            ctx->pc = 0x1BC1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1ACu;
            // 0x1bc1b0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1C0u;
            goto label_1bc1c0;
        }
    }
    ctx->pc = 0x1BC1B4u;
    // 0x1bc1b4: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC1B4u;
    {
        const bool branch_taken_0x1bc1b4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1bc1b4) {
            ctx->pc = 0x1BC1E0u;
            goto label_1bc1e0;
        }
    }
    ctx->pc = 0x1BC1BCu;
label_1bc1bc:
    // 0x1bc1bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bc1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bc1c0:
    // 0x1bc1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc1c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc1c8: 0x24848840  addiu       $a0, $a0, -0x77C0
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
    // 0x1bc1cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc1d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc1d4: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BC1D4u;
    ctx->pc = 0x1BC1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1D4u;
            // 0x1bc1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC1DCu;
    // 0x1bc1dc: 0x0  nop
    ctx->pc = 0x1bc1dcu;
    // NOP
label_1bc1e0:
    // 0x1bc1e0: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1BC1E0u;
    SET_GPR_U32(ctx, 31, 0x1BC1E8u);
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E8u; }
        if (ctx->pc != 0x1BC1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E8u; }
        if (ctx->pc != 0x1BC1E8u) { return; }
    }
    ctx->pc = 0x1BC1E8u;
label_1bc1e8:
    // 0x1bc1e8: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1BC1E8u;
    SET_GPR_U32(ctx, 31, 0x1BC1F0u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1F0u; }
        if (ctx->pc != 0x1BC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1F0u; }
        if (ctx->pc != 0x1BC1F0u) { return; }
    }
    ctx->pc = 0x1BC1F0u;
label_1bc1f0:
    // 0x1bc1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1f4: 0xc072a66  jal         func_1CA998
    ctx->pc = 0x1BC1F4u;
    SET_GPR_U32(ctx, 31, 0x1BC1FCu);
    ctx->pc = 0x1BC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1F4u;
            // 0x1bc1f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (runtime->hasFunction(0x1CA998u)) {
        auto targetFn = runtime->lookupFunction(0x1CA998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1FCu; }
        if (ctx->pc != 0x1BC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA998_0x1ca998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1FCu; }
        if (ctx->pc != 0x1BC1FCu) { return; }
    }
    ctx->pc = 0x1BC1FCu;
label_1bc1fc:
    // 0x1bc1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc200: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC200u;
    {
        const bool branch_taken_0x1bc200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC200u;
            // 0x1bc204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc200) {
            ctx->pc = 0x1BC230u;
            goto label_1bc230;
        }
    }
    ctx->pc = 0x1BC208u;
    // 0x1bc208: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1BC208u;
    SET_GPR_U32(ctx, 31, 0x1BC210u);
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC210u; }
        if (ctx->pc != 0x1BC210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC210u; }
        if (ctx->pc != 0x1BC210u) { return; }
    }
    ctx->pc = 0x1BC210u;
label_1bc210:
    // 0x1bc210: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bc210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bc214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc218: 0x24848870  addiu       $a0, $a0, -0x7790
    ctx->pc = 0x1bc218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
    // 0x1bc21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc224: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc228: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BC228u;
    ctx->pc = 0x1BC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC228u;
            // 0x1bc22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC230u;
label_1bc230:
    // 0x1bc230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc234: 0xc06e3c4  jal         func_1B8F10
    ctx->pc = 0x1BC234u;
    SET_GPR_U32(ctx, 31, 0x1BC23Cu);
    ctx->pc = 0x1BC238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC234u;
            // 0x1bc238: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    if (runtime->hasFunction(0x1B8F10u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC23Cu; }
        if (ctx->pc != 0x1BC23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F10_0x1b8f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC23Cu; }
        if (ctx->pc != 0x1BC23Cu) { return; }
    }
    ctx->pc = 0x1BC23Cu;
label_1bc23c:
    // 0x1bc23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc240: 0xc06ed86  jal         func_1BB618
    ctx->pc = 0x1BC240u;
    SET_GPR_U32(ctx, 31, 0x1BC248u);
    ctx->pc = 0x1BC244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC240u;
            // 0x1bc244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (runtime->hasFunction(0x1BB618u)) {
        auto targetFn = runtime->lookupFunction(0x1BB618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB618_0x1bb618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    }
    ctx->pc = 0x1BC248u;
label_1bc248:
    // 0x1bc248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc254: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc258: 0x806b494  j           func_1AD250
    ctx->pc = 0x1BC258u;
    ctx->pc = 0x1BC25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC258u;
            // 0x1bc25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC260u;
    ctx->pc = 0x1bc260u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033E170
// Address: 0x33e170 - 0x33e330
void sub_0033E170_0x33e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E170_0x33e170");
#endif

    switch (ctx->pc) {
        case 0x33e1ccu: goto label_33e1cc;
        case 0x33e1ecu: goto label_33e1ec;
        case 0x33e1f4u: goto label_33e1f4;
        case 0x33e214u: goto label_33e214;
        case 0x33e21cu: goto label_33e21c;
        case 0x33e288u: goto label_33e288;
        case 0x33e290u: goto label_33e290;
        case 0x33e2b8u: goto label_33e2b8;
        case 0x33e2c8u: goto label_33e2c8;
        case 0x33e2d8u: goto label_33e2d8;
        case 0x33e2ecu: goto label_33e2ec;
        case 0x33e2f8u: goto label_33e2f8;
        case 0x33e304u: goto label_33e304;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e314u: goto label_33e314;
        case 0x33e31cu: goto label_33e31c;
        default: break;
    }

    ctx->pc = 0x33e170u;

    // 0x33e170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33e174: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33e174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33e178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33e17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e180: 0x9065b248  lbu         $a1, -0x4DB8($v1)
    ctx->pc = 0x33e180u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947400)));
    // 0x33e184: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e188: 0x10a30043  beq         $a1, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x33E188u;
    {
        const bool branch_taken_0x33e188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e188) {
            ctx->pc = 0x33E298u;
            goto label_33e298;
        }
    }
    ctx->pc = 0x33E190u;
    // 0x33e190: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e194: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33E194u;
    {
        const bool branch_taken_0x33e194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e194) {
            ctx->pc = 0x33E224u;
            goto label_33e224;
        }
    }
    ctx->pc = 0x33E19Cu;
    // 0x33e19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e1a0: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33E1A0u;
    {
        const bool branch_taken_0x33e1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e1a0) {
            ctx->pc = 0x33E1FCu;
            goto label_33e1fc;
        }
    }
    ctx->pc = 0x33E1A8u;
    // 0x33e1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e1ac: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E1ACu;
    {
        const bool branch_taken_0x33e1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e1ac) {
            ctx->pc = 0x33E1D4u;
            goto label_33e1d4;
        }
    }
    ctx->pc = 0x33E1B4u;
    // 0x33e1b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E1B4u;
    {
        const bool branch_taken_0x33e1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e1b4) {
            ctx->pc = 0x33E1C4u;
            goto label_33e1c4;
        }
    }
    ctx->pc = 0x33E1BCu;
    // 0x33e1bc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x33E1BCu;
    {
        const bool branch_taken_0x33e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1BCu;
            // 0x33e1c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1bc) {
            ctx->pc = 0x33E320u;
            goto label_33e320;
        }
    }
    ctx->pc = 0x33E1C4u;
label_33e1c4:
    // 0x33e1c4: 0xc052c90  jal         func_14B240
    ctx->pc = 0x33E1C4u;
    SET_GPR_U32(ctx, 31, 0x33E1CCu);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1CCu; }
        if (ctx->pc != 0x33E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1CCu; }
        if (ctx->pc != 0x33E1CCu) { return; }
    }
    ctx->pc = 0x33E1CCu;
label_33e1cc:
    // 0x33e1cc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x33E1CCu;
    {
        const bool branch_taken_0x33e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e1cc) {
            ctx->pc = 0x33E31Cu;
            goto label_33e31c;
        }
    }
    ctx->pc = 0x33E1D4u;
label_33e1d4:
    // 0x33e1d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33e1d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33e1dc: 0xa044dd9e  sb          $a0, -0x2262($v0)
    ctx->pc = 0x33e1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e1e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e1e4: 0xc0cf7f0  jal         func_33DFC0
    ctx->pc = 0x33E1E4u;
    SET_GPR_U32(ctx, 31, 0x33E1ECu);
    ctx->pc = 0x33E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1E4u;
            // 0x33e1e8: 0xa060db56  sb          $zero, -0x24AA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33DFC0u;
    if (runtime->hasFunction(0x33DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ECu; }
        if (ctx->pc != 0x33E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033DFC0_0x33dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ECu; }
        if (ctx->pc != 0x33E1ECu) { return; }
    }
    ctx->pc = 0x33E1ECu;
label_33e1ec:
    // 0x33e1ec: 0xc052c90  jal         func_14B240
    ctx->pc = 0x33E1ECu;
    SET_GPR_U32(ctx, 31, 0x33E1F4u);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1F4u; }
        if (ctx->pc != 0x33E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1F4u; }
        if (ctx->pc != 0x33E1F4u) { return; }
    }
    ctx->pc = 0x33E1F4u;
label_33e1f4:
    // 0x33e1f4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x33E1F4u;
    {
        const bool branch_taken_0x33e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e1f4) {
            ctx->pc = 0x33E31Cu;
            goto label_33e31c;
        }
    }
    ctx->pc = 0x33E1FCu;
label_33e1fc:
    // 0x33e1fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33e200: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e204: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x33e204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e208: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33e20c: 0xc0cf7f0  jal         func_33DFC0
    ctx->pc = 0x33E20Cu;
    SET_GPR_U32(ctx, 31, 0x33E214u);
    ctx->pc = 0x33E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E20Cu;
            // 0x33e210: 0xa044db56  sb          $a0, -0x24AA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33DFC0u;
    if (runtime->hasFunction(0x33DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E214u; }
        if (ctx->pc != 0x33E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033DFC0_0x33dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E214u; }
        if (ctx->pc != 0x33E214u) { return; }
    }
    ctx->pc = 0x33E214u;
label_33e214:
    // 0x33e214: 0xc052c90  jal         func_14B240
    ctx->pc = 0x33E214u;
    SET_GPR_U32(ctx, 31, 0x33E21Cu);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E21Cu; }
        if (ctx->pc != 0x33E21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E21Cu; }
        if (ctx->pc != 0x33E21Cu) { return; }
    }
    ctx->pc = 0x33E21Cu;
label_33e21c:
    // 0x33e21c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x33E21Cu;
    {
        const bool branch_taken_0x33e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e21c) {
            ctx->pc = 0x33E31Cu;
            goto label_33e31c;
        }
    }
    ctx->pc = 0x33E224u;
label_33e224:
    // 0x33e224: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33E224u;
    {
        const bool branch_taken_0x33e224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e224) {
            ctx->pc = 0x33E298u;
            goto label_33e298;
        }
    }
    ctx->pc = 0x33E22Cu;
    // 0x33e22c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x33e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33e230: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33e230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x33e234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33e238: 0x24a5db56  addiu       $a1, $a1, -0x24AA
    ctx->pc = 0x33e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957910));
    // 0x33e23c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33e23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33e240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e244: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33e244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33e248: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x33e248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x33e24c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x33e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33e250: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e254: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33e254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33e258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e25c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33e260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33e260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33e264: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33e264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33e268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e26c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33e270: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33e270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33e274: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x33e274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x33e278: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33e27c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33e27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33e280: 0xc0cf7f0  jal         func_33DFC0
    ctx->pc = 0x33E280u;
    SET_GPR_U32(ctx, 31, 0x33E288u);
    ctx->pc = 0x33E284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E280u;
            // 0x33e284: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33DFC0u;
    if (runtime->hasFunction(0x33DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E288u; }
        if (ctx->pc != 0x33E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033DFC0_0x33dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E288u; }
        if (ctx->pc != 0x33E288u) { return; }
    }
    ctx->pc = 0x33E288u;
label_33e288:
    // 0x33e288: 0xc052c90  jal         func_14B240
    ctx->pc = 0x33E288u;
    SET_GPR_U32(ctx, 31, 0x33E290u);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E290u; }
        if (ctx->pc != 0x33E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E290u; }
        if (ctx->pc != 0x33E290u) { return; }
    }
    ctx->pc = 0x33E290u;
label_33e290:
    // 0x33e290: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33E290u;
    {
        const bool branch_taken_0x33e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e290) {
            ctx->pc = 0x33E31Cu;
            goto label_33e31c;
        }
    }
    ctx->pc = 0x33E298u;
label_33e298:
    // 0x33e298: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33e298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33e29c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33e2a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33e2a4: 0xa060db56  sb          $zero, -0x24AA($v1)
    ctx->pc = 0x33e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e2a8: 0x2484dc9c  addiu       $a0, $a0, -0x2364
    ctx->pc = 0x33e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958236));
    // 0x33e2ac: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x33e2acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e2b0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2B0u;
    SET_GPR_U32(ctx, 31, 0x33E2B8u);
    ctx->pc = 0x33E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2B0u;
            // 0x33e2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2B8u; }
        if (ctx->pc != 0x33E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2B8u; }
        if (ctx->pc != 0x33E2B8u) { return; }
    }
    ctx->pc = 0x33E2B8u;
label_33e2b8:
    // 0x33e2b8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33e2bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e2c0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2C0u;
    SET_GPR_U32(ctx, 31, 0x33E2C8u);
    ctx->pc = 0x33E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2C0u;
            // 0x33e2c4: 0x2484dcbc  addiu       $a0, $a0, -0x2344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2C8u; }
        if (ctx->pc != 0x33E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2C8u; }
        if (ctx->pc != 0x33E2C8u) { return; }
    }
    ctx->pc = 0x33E2C8u;
label_33e2c8:
    // 0x33e2c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33e2cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e2d0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2D0u;
    SET_GPR_U32(ctx, 31, 0x33E2D8u);
    ctx->pc = 0x33E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2D0u;
            // 0x33e2d4: 0x2484dcdc  addiu       $a0, $a0, -0x2324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2D8u; }
        if (ctx->pc != 0x33E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2D8u; }
        if (ctx->pc != 0x33E2D8u) { return; }
    }
    ctx->pc = 0x33E2D8u;
label_33e2d8:
    // 0x33e2d8: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33e2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33e2dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e2e0: 0x2610dd98  addiu       $s0, $s0, -0x2268
    ctx->pc = 0x33e2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958488));
    // 0x33e2e4: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2E4u;
    SET_GPR_U32(ctx, 31, 0x33E2ECu);
    ctx->pc = 0x33E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2E4u;
            // 0x33e2e8: 0x2604014c  addiu       $a0, $s0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2ECu; }
        if (ctx->pc != 0x33E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2ECu; }
        if (ctx->pc != 0x33E2ECu) { return; }
    }
    ctx->pc = 0x33E2ECu;
label_33e2ec:
    // 0x33e2ec: 0x2604016c  addiu       $a0, $s0, 0x16C
    ctx->pc = 0x33e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x33e2f0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2F0u;
    SET_GPR_U32(ctx, 31, 0x33E2F8u);
    ctx->pc = 0x33E2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2F0u;
            // 0x33e2f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2F8u; }
        if (ctx->pc != 0x33E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E2F8u; }
        if (ctx->pc != 0x33E2F8u) { return; }
    }
    ctx->pc = 0x33E2F8u;
label_33e2f8:
    // 0x33e2f8: 0x2604018c  addiu       $a0, $s0, 0x18C
    ctx->pc = 0x33e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    // 0x33e2fc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33E2FCu;
    SET_GPR_U32(ctx, 31, 0x33E304u);
    ctx->pc = 0x33E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2FCu;
            // 0x33e300: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E304u; }
        if (ctx->pc != 0x33E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E304u; }
        if (ctx->pc != 0x33E304u) { return; }
    }
    ctx->pc = 0x33E304u;
label_33e304:
    // 0x33e304: 0xc0cf82c  jal         func_33E0B0
    ctx->pc = 0x33E304u;
    SET_GPR_U32(ctx, 31, 0x33E30Cu);
    ctx->pc = 0x33E308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E304u;
            // 0x33e308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E0B0u;
    if (runtime->hasFunction(0x33E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x33E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E30Cu; }
        if (ctx->pc != 0x33E30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033E0B0_0x33e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E30Cu; }
        if (ctx->pc != 0x33E30Cu) { return; }
    }
    ctx->pc = 0x33E30Cu;
label_33e30c:
    // 0x33e30c: 0xc0cf82c  jal         func_33E0B0
    ctx->pc = 0x33E30Cu;
    SET_GPR_U32(ctx, 31, 0x33E314u);
    ctx->pc = 0x33E310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E30Cu;
            // 0x33e310: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E0B0u;
    if (runtime->hasFunction(0x33E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x33E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E314u; }
        if (ctx->pc != 0x33E314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033E0B0_0x33e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E314u; }
        if (ctx->pc != 0x33E314u) { return; }
    }
    ctx->pc = 0x33E314u;
label_33e314:
    // 0x33e314: 0xc052c90  jal         func_14B240
    ctx->pc = 0x33E314u;
    SET_GPR_U32(ctx, 31, 0x33E31Cu);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E31Cu; }
        if (ctx->pc != 0x33E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E31Cu; }
        if (ctx->pc != 0x33E31Cu) { return; }
    }
    ctx->pc = 0x33E31Cu;
label_33e31c:
    // 0x33e31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e320:
    // 0x33e320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e324: 0x3e00008  jr          $ra
    ctx->pc = 0x33E324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E324u;
            // 0x33e328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33E32Cu;
    // 0x33e32c: 0x0  nop
    ctx->pc = 0x33e32cu;
    // NOP
    ctx->pc = 0x33e330u;
}

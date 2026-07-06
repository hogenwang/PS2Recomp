#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C130
// Address: 0x14c130 - 0x14c2e0
void sub_0014C130_0x14c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C130_0x14c130");
#endif

    switch (ctx->pc) {
        case 0x14c160u: goto label_14c160;
        case 0x14c170u: goto label_14c170;
        case 0x14c2ccu: goto label_14c2cc;
        default: break;
    }

    ctx->pc = 0x14c130u;

    // 0x14c130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c134: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x14c138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c13c: 0x9064b268  lbu         $a0, -0x4D98($v1)
    ctx->pc = 0x14c13cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947432)));
    // 0x14c140: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c144: 0x90635d98  lbu         $v1, 0x5D98($v1)
    ctx->pc = 0x14c144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23960)));
    // 0x14c148: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14C148u;
    {
        const bool branch_taken_0x14c148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c148) {
            ctx->pc = 0x14C180u;
            goto label_14c180;
        }
    }
    ctx->pc = 0x14C150u;
    // 0x14c150: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C150u;
    {
        const bool branch_taken_0x14c150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c150) {
            ctx->pc = 0x14C154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C150u;
            // 0x14c154: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C168u;
            goto label_14c168;
        }
    }
    ctx->pc = 0x14C158u;
    // 0x14c158: 0xc06eedc  jal         func_1BBB70
    ctx->pc = 0x14C158u;
    SET_GPR_U32(ctx, 31, 0x14C160u);
    ctx->pc = 0x14C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C158u;
            // 0x14c15c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB70u;
    if (runtime->hasFunction(0x1BBB70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C160u; }
        if (ctx->pc != 0x14C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB70_0x1bbb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C160u; }
        if (ctx->pc != 0x14C160u) { return; }
    }
    ctx->pc = 0x14C160u;
label_14c160:
    // 0x14c160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C160u;
    {
        const bool branch_taken_0x14c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c160) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C168u;
label_14c168:
    // 0x14c168: 0xc06eedc  jal         func_1BBB70
    ctx->pc = 0x14C168u;
    SET_GPR_U32(ctx, 31, 0x14C170u);
    ctx->pc = 0x1BBB70u;
    if (runtime->hasFunction(0x1BBB70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C170u; }
        if (ctx->pc != 0x14C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB70_0x1bbb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C170u; }
        if (ctx->pc != 0x14C170u) { return; }
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x14c174: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c178: 0x9084b268  lbu         $a0, -0x4D98($a0)
    ctx->pc = 0x14c178u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947432)));
    // 0x14c17c: 0xa0645d98  sb          $a0, 0x5D98($v1)
    ctx->pc = 0x14c17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23960), (uint8_t)GPR_U32(ctx, 4));
label_14c180:
    // 0x14c180: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x14c184: 0x9063b269  lbu         $v1, -0x4D97($v1)
    ctx->pc = 0x14c184u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947433)));
    // 0x14c188: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x14C188u;
    {
        const bool branch_taken_0x14c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c188) {
            ctx->pc = 0x14C1FCu;
            goto label_14c1fc;
        }
    }
    ctx->pc = 0x14C190u;
    // 0x14c190: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14c194: 0x9084e058  lbu         $a0, -0x1FA8($a0)
    ctx->pc = 0x14c194u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959192)));
    // 0x14c198: 0x28810025  slti        $at, $a0, 0x25
    ctx->pc = 0x14c198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x14c19c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14C19Cu;
    {
        const bool branch_taken_0x14c19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c19c) {
            ctx->pc = 0x14C1D0u;
            goto label_14c1d0;
        }
    }
    ctx->pc = 0x14C1A4u;
    // 0x14c1a4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x14c1a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14c1ac: 0x9086b26a  lbu         $a2, -0x4D96($a0)
    ctx->pc = 0x14c1acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947434)));
    // 0x14c1b0: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    // 0x14c1b4: 0x30c70007  andi        $a3, $a2, 0x7
    ctx->pc = 0x14c1b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x14c1b8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14c1bc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14c1c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14c1c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c1c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14C1C8u;
    {
        const bool branch_taken_0x14c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1C8u;
            // 0x14c1cc: 0xac855d90  sw          $a1, 0x5D90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 23952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1c8) {
            ctx->pc = 0x14C224u;
            goto label_14c224;
        }
    }
    ctx->pc = 0x14C1D0u;
label_14c1d0:
    // 0x14c1d0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x14c1d4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14c1d8: 0x9086b26a  lbu         $a2, -0x4D96($a0)
    ctx->pc = 0x14c1d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947434)));
    // 0x14c1dc: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x14c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
    // 0x14c1e0: 0x30c70007  andi        $a3, $a2, 0x7
    ctx->pc = 0x14c1e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x14c1e4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14c1e8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x14c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14c1ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14c1f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c1f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14C1F4u;
    {
        const bool branch_taken_0x14c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1F4u;
            // 0x14c1f8: 0xac855d90  sw          $a1, 0x5D90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 23952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1f4) {
            ctx->pc = 0x14C224u;
            goto label_14c224;
        }
    }
    ctx->pc = 0x14C1FCu;
label_14c1fc:
    // 0x14c1fc: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x14c200: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14c200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14c204: 0x9086b26a  lbu         $a2, -0x4D96($a0)
    ctx->pc = 0x14c204u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947434)));
    // 0x14c208: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
    // 0x14c20c: 0x30c70007  andi        $a3, $a2, 0x7
    ctx->pc = 0x14c20cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x14c210: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14c214: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14c218: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14c218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14c21c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c220: 0xac855d90  sw          $a1, 0x5D90($a0)
    ctx->pc = 0x14c220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23952), GPR_U32(ctx, 5));
label_14c224:
    // 0x14c224: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14c228: 0x90845d88  lbu         $a0, 0x5D88($a0)
    ctx->pc = 0x14c228u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23944)));
    // 0x14c22c: 0x50870028  beql        $a0, $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x14C22Cu;
    {
        const bool branch_taken_0x14c22c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14c22c) {
            ctx->pc = 0x14C230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C22Cu;
            // 0x14c230: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C2D0u;
            goto label_14c2d0;
        }
    }
    ctx->pc = 0x14C234u;
    // 0x14c234: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c238: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C238u;
    {
        const bool branch_taken_0x14c238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C238u;
            // 0x14c23c: 0xa0475d88  sb          $a3, 0x5D88($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23944), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c238) {
            ctx->pc = 0x14C298u;
            goto label_14c298;
        }
    }
    ctx->pc = 0x14C240u;
    // 0x14c240: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14c244: 0x9042e058  lbu         $v0, -0x1FA8($v0)
    ctx->pc = 0x14c244u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959192)));
    // 0x14c248: 0x28410025  slti        $at, $v0, 0x25
    ctx->pc = 0x14c248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x14c24c: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14C24Cu;
    {
        const bool branch_taken_0x14c24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c24c) {
            ctx->pc = 0x14C250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C24Cu;
            // 0x14c250: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C278u;
            goto label_14c278;
        }
    }
    ctx->pc = 0x14C254u;
    // 0x14c254: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14c254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14c258: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14c25c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x14c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c260: 0x2463e080  addiu       $v1, $v1, -0x1F80
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959232));
    // 0x14c264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c268: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c26c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c270: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14C270u;
    {
        const bool branch_taken_0x14c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C270u;
            // 0x14c274: 0xac455d90  sw          $a1, 0x5D90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c270) {
            ctx->pc = 0x14C2B8u;
            goto label_14c2b8;
        }
    }
    ctx->pc = 0x14C278u;
label_14c278:
    // 0x14c278: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14c278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14c27c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x14c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c280: 0x2463e0b0  addiu       $v1, $v1, -0x1F50
    ctx->pc = 0x14c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959280));
    // 0x14c284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c288: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c28c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c290: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14C290u;
    {
        const bool branch_taken_0x14c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C290u;
            // 0x14c294: 0xac455d90  sw          $a1, 0x5D90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c290) {
            ctx->pc = 0x14C2B8u;
            goto label_14c2b8;
        }
    }
    ctx->pc = 0x14C298u;
label_14c298:
    // 0x14c298: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14c29c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14c2a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x14c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c2a4: 0x2463e0b0  addiu       $v1, $v1, -0x1F50
    ctx->pc = 0x14c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959280));
    // 0x14c2a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c2ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c2b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c2b4: 0xac455d90  sw          $a1, 0x5D90($v0)
    ctx->pc = 0x14c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23952), GPR_U32(ctx, 5));
label_14c2b8:
    // 0x14c2b8: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14c2bc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x14c2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x14c2c0: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14c2c4: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14C2C4u;
    SET_GPR_U32(ctx, 31, 0x14C2CCu);
    ctx->pc = 0x14C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2C4u;
            // 0x14c2c8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (runtime->hasFunction(0x1BA088u)) {
        auto targetFn = runtime->lookupFunction(0x1BA088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2CCu; }
        if (ctx->pc != 0x14C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA088_0x1ba088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2CCu; }
        if (ctx->pc != 0x14C2CCu) { return; }
    }
    ctx->pc = 0x14C2CCu;
label_14c2cc:
    // 0x14c2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c2d0:
    // 0x14c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2D0u;
            // 0x14c2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C2D8u;
    // 0x14c2d8: 0x0  nop
    ctx->pc = 0x14c2d8u;
    // NOP
    // 0x14c2dc: 0x0  nop
    ctx->pc = 0x14c2dcu;
    // NOP
    ctx->pc = 0x14c2e0u;
}

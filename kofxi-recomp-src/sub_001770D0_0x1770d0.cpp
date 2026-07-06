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

// Function: sub_001770D0
// Address: 0x1770d0 - 0x177350
void sub_001770D0_0x1770d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001770D0_0x1770d0");
#endif

    switch (ctx->pc) {
        case 0x177198u: goto label_177198;
        case 0x1771fcu: goto label_1771fc;
        case 0x177228u: goto label_177228;
        case 0x177230u: goto label_177230;
        case 0x177254u: goto label_177254;
        case 0x177284u: goto label_177284;
        case 0x1772a8u: goto label_1772a8;
        case 0x1772b0u: goto label_1772b0;
        case 0x1772e0u: goto label_1772e0;
        default: break;
    }

    ctx->pc = 0x1770d0u;

    // 0x1770d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1770d4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1770d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1770d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1770dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1770dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1770e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1770e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1770e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1770e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1770e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1770e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1770ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1770ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1770f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1770f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1770f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1770f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1770f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1770f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1770fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1770fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177104: 0x8c65af68  lw          $a1, -0x5098($v1)
    ctx->pc = 0x177104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x177108: 0x9484a7c0  lhu         $a0, -0x5840($a0)
    ctx->pc = 0x177108u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294944704)));
    // 0x17710c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177110: 0x8c63a7d8  lw          $v1, -0x5828($v1)
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944728)));
    // 0x177114: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x177114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x177118: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x177118u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17711c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x17711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x177120: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x177120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177124: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177124u;
    {
        const bool branch_taken_0x177124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177124u;
        // 0x177128: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177124) {
            ctx->pc = 0x177138u;
            goto label_177138;
        }
    }
    ctx->pc = 0x17712Cu;
    // 0x17712c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177130: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x177130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x177134: 0xa460a7c0  sh          $zero, -0x5840($v1)
    ctx->pc = 0x177134u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944704), (uint16_t)GPR_U32(ctx, 0));
label_177138:
    // 0x177138: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x177138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17713c: 0x3095ffff  andi        $s5, $a0, 0xFFFF
    ctx->pc = 0x17713cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x177140: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x177140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177144: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x177144u;
    {
        const bool branch_taken_0x177144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177144) {
            ctx->pc = 0x177310u;
            goto label_177310;
        }
    }
    ctx->pc = 0x17714Cu;
    // 0x17714c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177150: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x177154: 0x2484ac60  addiu       $a0, $a0, -0x53A0
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945888));
    // 0x177158: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x177158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x17715c: 0x959021  addu        $s2, $a0, $s5
    ctx->pc = 0x17715cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x177160: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x177164: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177168: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17716c: 0x2463af70  addiu       $v1, $v1, -0x5090
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946672));
    // 0x177170: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x177170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177174: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177178: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17717c: 0x2463abe0  addiu       $v1, $v1, -0x5420
    ctx->pc = 0x17717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945760));
    // 0x177180: 0x2484a580  addiu       $a0, $a0, -0x5A80
    ctx->pc = 0x177180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944128));
    // 0x177184: 0x75b021  addu        $s6, $v1, $s5
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x177188: 0x85b821  addu        $s7, $a0, $a1
    ctx->pc = 0x177188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17718c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177190: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x177190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
    // 0x177194: 0x65f021  addu        $fp, $v1, $a1
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_177198:
    // 0x177198: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x177198u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17719c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x17719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1771a0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1771A0u;
    {
        const bool branch_taken_0x1771a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771a0) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1771A8u;
    // 0x1771a8: 0x3083000a  andi        $v1, $a0, 0xA
    ctx->pc = 0x1771a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10);
    // 0x1771ac: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1771ACu;
    {
        const bool branch_taken_0x1771ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771ac) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1771B4u;
    // 0x1771b4: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1771b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1771b8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1771B8u;
    {
        const bool branch_taken_0x1771b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771b8) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1771C0u;
    // 0x1771c0: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1771c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1771c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1771C4u;
    {
        const bool branch_taken_0x1771c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1771c4) {
            ctx->pc = 0x1771E8u;
            goto label_1771e8;
        }
    }
    ctx->pc = 0x1771CCu;
    // 0x1771cc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1771ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1771d0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1771D0u;
    {
        const bool branch_taken_0x1771d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771d0) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1771D8u;
    // 0x1771d8: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x1771d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1771dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1771DCu;
    {
        const bool branch_taken_0x1771dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771DCu;
        // 0x1771e0: 0xa2430000  sb          $v1, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771dc) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1771E4u;
    // 0x1771e4: 0x0  nop
    ctx->pc = 0x1771e4u;
    // NOP
label_1771e8:
    // 0x1771e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1771ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1771ECu;
    {
        const bool branch_taken_0x1771ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771ec) {
            ctx->pc = 0x177268u;
            goto label_177268;
        }
    }
    ctx->pc = 0x1771F4u;
    // 0x1771f4: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x1771F4u;
    SET_GPR_U32(ctx, 31, 0x1771FCu);
    ctx->pc = 0x1771F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771F4u;
    // 0x1771f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x1771F4u, 0x1771FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771FCu;
label_1771fc:
    // 0x1771fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1771fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177200: 0x94423800  lhu         $v0, 0x3800($v0)
    ctx->pc = 0x177200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14336)));
    // 0x177204: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177204u;
    {
        const bool branch_taken_0x177204 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x177204) {
            ctx->pc = 0x177218u;
            goto label_177218;
        }
    }
    ctx->pc = 0x17720Cu;
    // 0x17720c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177210: 0x9453a7b8  lhu         $s3, -0x5848($v0)
    ctx->pc = 0x177210u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944696)));
    // 0x177214: 0x0  nop
    ctx->pc = 0x177214u;
    // NOP
label_177218:
    // 0x177218: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x177218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17721c: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x17721cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x177220: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x177220u;
    {
        const bool branch_taken_0x177220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x177224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177220u;
        // 0x177224: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177220) {
            ctx->pc = 0x177268u;
            goto label_177268;
        }
    }
    ctx->pc = 0x177228u;
label_177228:
    // 0x177228: 0xc05e010  jal         func_178040
    ctx->pc = 0x177228u;
    SET_GPR_U32(ctx, 31, 0x177230u);
    ctx->pc = 0x17722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177228u;
    // 0x17722c: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178040u, 0x177228u, 0x177230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177230u;
label_177230:
    // 0x177230: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x177230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x177234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x177238: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x177238u;
    {
        const bool branch_taken_0x177238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177238) {
            ctx->pc = 0x17723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177238u;
            // 0x17723c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17724Cu;
            goto label_17724c;
        }
    }
    ctx->pc = 0x177240u;
    // 0x177240: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177244: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x177244u;
    {
        const bool branch_taken_0x177244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177244u;
        // 0x177248: 0xa474a7b8  sh          $s4, -0x5848($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294944696), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177244) {
            ctx->pc = 0x177318u;
            goto label_177318;
        }
    }
    ctx->pc = 0x17724Cu;
label_17724c:
    // 0x17724c: 0xc067ce4  jal         func_19F390
    ctx->pc = 0x17724Cu;
    SET_GPR_U32(ctx, 31, 0x177254u);
    ctx->pc = 0x19F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F390u, 0x17724Cu, 0x177254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177254u;
label_177254:
    // 0x177254: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x177254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x177258: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x177258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x17725c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17725Cu;
    {
        const bool branch_taken_0x17725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17725c) {
            ctx->pc = 0x177228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177228;
        }
    }
    ctx->pc = 0x177264u;
    // 0x177264: 0x0  nop
    ctx->pc = 0x177264u;
    // NOP
label_177268:
    // 0x177268: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x177268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17726c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x17726cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177270: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177274: 0xa4643800  sh          $a0, 0x3800($v1)
    ctx->pc = 0x177274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14336), (uint16_t)GPR_U32(ctx, 4));
    // 0x177278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17727c: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x17727Cu;
    SET_GPR_U32(ctx, 31, 0x177284u);
    ctx->pc = 0x177280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17727Cu;
    // 0x177280: 0xa440a7b8  sh          $zero, -0x5848($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294944696), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x17727Cu, 0x177284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177284u;
label_177284:
    // 0x177284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177288: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x177288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x17728c: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x17728cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x177290: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x177290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177294: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x177294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x177298: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177298u;
    {
        const bool branch_taken_0x177298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177298u;
        // 0x17729c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177298) {
            ctx->pc = 0x1772C0u;
            goto label_1772c0;
        }
    }
    ctx->pc = 0x1772A0u;
    // 0x1772a0: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x1772A0u;
    SET_GPR_U32(ctx, 31, 0x1772A8u);
    ctx->pc = 0x1772A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772A0u;
    // 0x1772a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x1772A0u, 0x1772A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772A8u;
label_1772a8:
    // 0x1772a8: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x1772A8u;
    SET_GPR_U32(ctx, 31, 0x1772B0u);
    ctx->pc = 0x1772ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772A8u;
    // 0x1772ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x1772A8u, 0x1772B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772B0u;
label_1772b0:
    // 0x1772b0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1772b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1772b4: 0x304200d3  andi        $v0, $v0, 0xD3
    ctx->pc = 0x1772b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)211);
    // 0x1772b8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1772b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1772bc: 0x0  nop
    ctx->pc = 0x1772bcu;
    // NOP
label_1772c0:
    // 0x1772c0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1772c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1772c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1772c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1772c8: 0x304200bc  andi        $v0, $v0, 0xBC
    ctx->pc = 0x1772c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)188);
    // 0x1772cc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1772ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1772d0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1772d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1772d4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1772d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1772d8: 0xc05e010  jal         func_178040
    ctx->pc = 0x1772D8u;
    SET_GPR_U32(ctx, 31, 0x1772E0u);
    ctx->pc = 0x1772DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772D8u;
    // 0x1772dc: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178040u, 0x1772D8u, 0x1772E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772E0u;
label_1772e0:
    // 0x1772e0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1772E0u;
    {
        const bool branch_taken_0x1772e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1772e0) {
            ctx->pc = 0x1772E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1772E0u;
            // 0x1772e4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17731Cu;
            goto label_17731c;
        }
    }
    ctx->pc = 0x1772E8u;
label_1772e8:
    // 0x1772e8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1772e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1772ec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1772ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1772f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1772f4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1772f8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1772f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1772fc: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x1772fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177300: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x177304: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x177304u;
    {
        const bool branch_taken_0x177304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177304u;
        // 0x177308: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177304) {
            ctx->pc = 0x177198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177198;
        }
    }
    ctx->pc = 0x17730Cu;
    // 0x17730c: 0x0  nop
    ctx->pc = 0x17730cu;
    // NOP
label_177310:
    // 0x177310: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177314: 0xa460a7c0  sh          $zero, -0x5840($v1)
    ctx->pc = 0x177314u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944704), (uint16_t)GPR_U32(ctx, 0));
label_177318:
    // 0x177318: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x177318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17731c:
    // 0x17731c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17731cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17732c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17732cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17733c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177340: 0x3e00008  jr          $ra
    ctx->pc = 0x177340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177340u;
        // 0x177344: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177348u;
    // 0x177348: 0x0  nop
    ctx->pc = 0x177348u;
    // NOP
    // 0x17734c: 0x0  nop
    ctx->pc = 0x17734cu;
    // NOP
    if (ctx->pc == 0x17734cu) { ctx->pc = 0x177350u; }
}

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

// Function: sub_00175160
// Address: 0x175160 - 0x1754e0
void sub_00175160_0x175160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175160_0x175160");
#endif

    switch (ctx->pc) {
        case 0x1751c8u: goto label_1751c8;
        case 0x1751e4u: goto label_1751e4;
        case 0x17521cu: goto label_17521c;
        case 0x1752dcu: goto label_1752dc;
        case 0x17533cu: goto label_17533c;
        case 0x1753e0u: goto label_1753e0;
        case 0x175400u: goto label_175400;
        case 0x17549cu: goto label_17549c;
        default: break;
    }

    ctx->pc = 0x175160u;

    // 0x175160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175164: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175168: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x175168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17516c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17516cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175174: 0x24423760  addiu       $v0, $v0, 0x3760
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14176));
    // 0x175178: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17517c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175180: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x175184: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175188: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x175188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17518c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175190: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x175190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175194: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x175194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x175198: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17519c: 0x24846158  addiu       $a0, $a0, 0x6158
    ctx->pc = 0x17519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24920));
    // 0x1751a0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1751a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1751a4: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1751a8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1751a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1751ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1751acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1751b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1751b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1751b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1751b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1751bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1751bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1751c0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1751C0u;
    SET_GPR_U32(ctx, 31, 0x1751C8u);
    ctx->pc = 0x1751C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751C0u;
    // 0x1751c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x1751C0u, 0x1751C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C8u;
label_1751c8:
    // 0x1751c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1751c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1751cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1751ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751d0: 0x90449e58  lbu         $a0, -0x61A8($v0)
    ctx->pc = 0x1751d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942296)));
    // 0x1751d4: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1751D4u;
    {
        const bool branch_taken_0x1751d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1751d4) {
            ctx->pc = 0x1751D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1751D4u;
            // 0x1751d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17520Cu;
            goto label_17520c;
        }
    }
    ctx->pc = 0x1751DCu;
    // 0x1751dc: 0xc067db4  jal         func_19F6D0
    ctx->pc = 0x1751DCu;
    SET_GPR_U32(ctx, 31, 0x1751E4u);
    ctx->pc = 0x1751E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751DCu;
    // 0x1751e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6D0u, 0x1751DCu, 0x1751E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751E4u;
label_1751e4:
    // 0x1751e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1751e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751e8: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1751E8u;
    {
        const bool branch_taken_0x1751e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1751e8) {
            ctx->pc = 0x175240u;
            goto label_175240;
        }
    }
    ctx->pc = 0x1751F0u;
    // 0x1751f0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1751f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1751f8: 0xa443da80  sh          $v1, -0x2580($v0)
    ctx->pc = 0x1751f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957696), (uint16_t)GPR_U32(ctx, 3));
    // 0x1751fc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1751fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x175200: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175204: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x175204u;
    {
        const bool branch_taken_0x175204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175204u;
        // 0x175208: 0xa443da82  sh          $v1, -0x257E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957698), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175204) {
            ctx->pc = 0x175240u;
            goto label_175240;
        }
    }
    ctx->pc = 0x17520Cu;
label_17520c:
    // 0x17520c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17520Cu;
    {
        const bool branch_taken_0x17520c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17520c) {
            ctx->pc = 0x175240u;
            goto label_175240;
        }
    }
    ctx->pc = 0x175214u;
    // 0x175214: 0xc067db4  jal         func_19F6D0
    ctx->pc = 0x175214u;
    SET_GPR_U32(ctx, 31, 0x17521Cu);
    ctx->pc = 0x175218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175214u;
    // 0x175218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6D0u, 0x175214u, 0x17521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17521Cu;
label_17521c:
    // 0x17521c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175220: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x175220u;
    {
        const bool branch_taken_0x175220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x175220) {
            ctx->pc = 0x175240u;
            goto label_175240;
        }
    }
    ctx->pc = 0x175228u;
    // 0x175228: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17522c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175230: 0xa443da80  sh          $v1, -0x2580($v0)
    ctx->pc = 0x175230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957696), (uint16_t)GPR_U32(ctx, 3));
    // 0x175234: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x175238: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17523c: 0xa443da82  sh          $v1, -0x257E($v0)
    ctx->pc = 0x17523cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957698), (uint16_t)GPR_U32(ctx, 3));
label_175240:
    // 0x175240: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175244: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175248: 0x8446da80  lh          $a2, -0x2580($v0)
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957696)));
    // 0x17524c: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175250: 0x24633770  addiu       $v1, $v1, 0x3770
    ctx->pc = 0x175250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14192));
    // 0x175254: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x175258: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17525c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x175260: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x175260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x175264: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x175264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175268: 0x24423774  addiu       $v0, $v0, 0x3774
    ctx->pc = 0x175268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14196));
    // 0x17526c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x175270: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x175270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175274: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x175274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175278: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x175278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17527c: 0x1010  mfhi        $v0
    ctx->pc = 0x17527cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175280: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x175280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x175284: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x175284u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175288: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x175288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x17528c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175290: 0x8810  mfhi        $s1
    ctx->pc = 0x175290u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x175294: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x175294u;
    {
        const bool branch_taken_0x175294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175294) {
            ctx->pc = 0x1752DCu;
            goto label_1752dc;
        }
    }
    ctx->pc = 0x17529Cu;
    // 0x17529c: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1752a0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1752a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1752a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1752a8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1752a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1752ac: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x1752b0: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1752b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1752b4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1752b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1752b8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1752bc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1752bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1752c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1752c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1752c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1752c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1752c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752cc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1752ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1752d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1752d4: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1752D4u;
    SET_GPR_U32(ctx, 31, 0x1752DCu);
    ctx->pc = 0x1752D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752D4u;
    // 0x1752d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x1752D4u, 0x1752DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752DCu;
label_1752dc:
    // 0x1752dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1752dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1752e0: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1752e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1752e4: 0x24633778  addiu       $v1, $v1, 0x3778
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14200));
    // 0x1752e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1752e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752ec: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1752ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1752f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1752f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1752f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1752f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1752f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1752fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1752fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175300: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175304: 0x2442377c  addiu       $v0, $v0, 0x377C
    ctx->pc = 0x175304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14204));
    // 0x175308: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x175308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17530c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175310: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x175310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175314: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x175314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x175318: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x175318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17531c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17531cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175320: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x175320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175324: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175328: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17532c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17532cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175330: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175334: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175334u;
    SET_GPR_U32(ctx, 31, 0x17533Cu);
    ctx->pc = 0x175338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175334u;
    // 0x175338: 0x24a5d538  addiu       $a1, $a1, -0x2AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x175334u, 0x17533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17533Cu;
label_17533c:
    // 0x17533c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175340: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175344: 0x8463da82  lh          $v1, -0x257E($v1)
    ctx->pc = 0x175344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957698)));
    // 0x175348: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17534c: 0xa443da82  sh          $v1, -0x257E($v0)
    ctx->pc = 0x17534cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957698), (uint16_t)GPR_U32(ctx, 3));
    // 0x175350: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x175354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175358: 0x4430027  bgezl       $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x175358u;
    {
        const bool branch_taken_0x175358 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175358) {
            ctx->pc = 0x17535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175358u;
            // 0x17535c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1753F8u;
            goto label_1753f8;
        }
    }
    ctx->pc = 0x175360u;
    // 0x175360: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x175364: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175368: 0xa443da82  sh          $v1, -0x257E($v0)
    ctx->pc = 0x175368u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957698), (uint16_t)GPR_U32(ctx, 3));
    // 0x17536c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175370: 0x8443da80  lh          $v1, -0x2580($v0)
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957696)));
    // 0x175374: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17537c: 0xa443da80  sh          $v1, -0x2580($v0)
    ctx->pc = 0x17537cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957696), (uint16_t)GPR_U32(ctx, 3));
    // 0x175380: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x175380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x175384: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175388: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x175388u;
    {
        const bool branch_taken_0x175388 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175388) {
            ctx->pc = 0x1753F4u;
            goto label_1753f4;
        }
    }
    ctx->pc = 0x175390u;
    // 0x175390: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175398: 0xa440da80  sh          $zero, -0x2580($v0)
    ctx->pc = 0x175398u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957696), (uint16_t)GPR_U32(ctx, 0));
    // 0x17539c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17539cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1753a0: 0x2431004  sllv        $v0, $v1, $s2
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x1753a4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1753a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1753a8: 0x401827  not         $v1, $v0
    ctx->pc = 0x1753a8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1753ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1753acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1753b0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1753b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1753b4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1753b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1753b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1753bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1753bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1753c0: 0x9047daf0  lbu         $a3, -0x2510($v0)
    ctx->pc = 0x1753c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957808)));
    // 0x1753c4: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1753c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1753c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1753cc: 0xa0a7daf0  sb          $a3, -0x2510($a1)
    ctx->pc = 0x1753ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957808), (uint8_t)GPR_U32(ctx, 7));
    // 0x1753d0: 0x9063daf0  lbu         $v1, -0x2510($v1)
    ctx->pc = 0x1753d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x1753d4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1753d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1753d8: 0xc0682f8  jal         func_1A0BE0
    ctx->pc = 0x1753D8u;
    SET_GPR_U32(ctx, 31, 0x1753E0u);
    ctx->pc = 0x1753DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753D8u;
    // 0x1753dc: 0xa043daf0  sb          $v1, -0x2510($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957808), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BE0u, 0x1753D8u, 0x1753E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753E0u;
label_1753e0:
    // 0x1753e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1753e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1753e4: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1753e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1753e8: 0xa440da78  sh          $zero, -0x2588($v0)
    ctx->pc = 0x1753e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957688), (uint16_t)GPR_U32(ctx, 0));
    // 0x1753ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1753ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1753f0: 0xa443da7a  sh          $v1, -0x2586($v0)
    ctx->pc = 0x1753f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957690), (uint16_t)GPR_U32(ctx, 3));
label_1753f4:
    // 0x1753f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1753f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1753f8:
    // 0x1753f8: 0xc05c72c  jal         func_171CB0
    ctx->pc = 0x1753F8u;
    SET_GPR_U32(ctx, 31, 0x175400u);
    ctx->pc = 0x1753FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753F8u;
    // 0x1753fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CB0u, 0x1753F8u, 0x175400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175400u;
label_175400:
    // 0x175400: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175404: 0x8464da80  lh          $a0, -0x2580($v1)
    ctx->pc = 0x175404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957696)));
    // 0x175408: 0x28810012  slti        $at, $a0, 0x12
    ctx->pc = 0x175408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x17540c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x17540Cu;
    {
        const bool branch_taken_0x17540c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17540Cu;
        // 0x175410: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17540c) {
            ctx->pc = 0x1754BCu;
            goto label_1754bc;
        }
    }
    ctx->pc = 0x175414u;
    // 0x175414: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x175414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x175418: 0x30631f00  andi        $v1, $v1, 0x1F00
    ctx->pc = 0x175418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7936);
    // 0x17541c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x175420: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x175420u;
    {
        const bool branch_taken_0x175420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175420) {
            ctx->pc = 0x175424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175420u;
            // 0x175424: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1754C0u;
            goto label_1754c0;
        }
    }
    ctx->pc = 0x175428u;
    // 0x175428: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x175428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17542c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175430: 0xa464da80  sh          $a0, -0x2580($v1)
    ctx->pc = 0x175430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957696), (uint16_t)GPR_U32(ctx, 4));
    // 0x175434: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x175434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x175438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x175438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17543c: 0x463001d  bgezl       $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17543Cu;
    {
        const bool branch_taken_0x17543c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17543c) {
            ctx->pc = 0x175440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17543Cu;
            // 0x175440: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1754B4u;
            goto label_1754b4;
        }
    }
    ctx->pc = 0x175444u;
    // 0x175444: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175448: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17544c: 0xa460da80  sh          $zero, -0x2580($v1)
    ctx->pc = 0x17544cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957696), (uint16_t)GPR_U32(ctx, 0));
    // 0x175450: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175458: 0xa440da82  sh          $zero, -0x257E($v0)
    ctx->pc = 0x175458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957698), (uint16_t)GPR_U32(ctx, 0));
    // 0x17545c: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x17545cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x175460: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x175460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x175464: 0x601027  not         $v0, $v1
    ctx->pc = 0x175464u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x175468: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x175468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17546c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175470: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175474: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175478: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17547c: 0x9047daf0  lbu         $a3, -0x2510($v0)
    ctx->pc = 0x17547cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957808)));
    // 0x175480: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x175480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x175484: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175488: 0xa0a7daf0  sb          $a3, -0x2510($a1)
    ctx->pc = 0x175488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957808), (uint8_t)GPR_U32(ctx, 7));
    // 0x17548c: 0x9063daf0  lbu         $v1, -0x2510($v1)
    ctx->pc = 0x17548cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x175490: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x175490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x175494: 0xc0682f8  jal         func_1A0BE0
    ctx->pc = 0x175494u;
    SET_GPR_U32(ctx, 31, 0x17549Cu);
    ctx->pc = 0x175498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175494u;
    // 0x175498: 0xa043daf0  sb          $v1, -0x2510($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957808), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BE0u, 0x175494u, 0x17549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17549Cu;
label_17549c:
    // 0x17549c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17549cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1754a0: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1754a4: 0xa460da78  sh          $zero, -0x2588($v1)
    ctx->pc = 0x1754a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957688), (uint16_t)GPR_U32(ctx, 0));
    // 0x1754a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1754a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1754ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1754ACu;
    {
        const bool branch_taken_0x1754ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ACu;
        // 0x1754b0: 0xa464da7a  sh          $a0, -0x2586($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957690), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754ac) {
            ctx->pc = 0x1754BCu;
            goto label_1754bc;
        }
    }
    ctx->pc = 0x1754B4u;
label_1754b4:
    // 0x1754b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1754b8: 0xa464da82  sh          $a0, -0x257E($v1)
    ctx->pc = 0x1754b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957698), (uint16_t)GPR_U32(ctx, 4));
label_1754bc:
    // 0x1754bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1754bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1754c0:
    // 0x1754c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1754c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1754c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1754c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1754c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1754c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1754cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1754CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1754CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1754D4u;
    // 0x1754d4: 0x0  nop
    ctx->pc = 0x1754d4u;
    // NOP
    // 0x1754d8: 0x0  nop
    ctx->pc = 0x1754d8u;
    // NOP
    // 0x1754dc: 0x0  nop
    ctx->pc = 0x1754dcu;
    // NOP
}

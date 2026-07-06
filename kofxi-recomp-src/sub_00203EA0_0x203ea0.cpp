#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203EA0
// Address: 0x203ea0 - 0x204050
void sub_00203EA0_0x203ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203EA0_0x203ea0");
#endif

    switch (ctx->pc) {
        case 0x203ed0u: goto label_203ed0;
        case 0x203eecu: goto label_203eec;
        case 0x203f14u: goto label_203f14;
        case 0x203f20u: goto label_203f20;
        case 0x203f44u: goto label_203f44;
        case 0x203f80u: goto label_203f80;
        case 0x20401cu: goto label_20401c;
        case 0x204040u: goto label_204040;
        default: break;
    }

    ctx->pc = 0x203ea0u;

    // 0x203ea0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x203ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203eb0: 0x2a010018  slti        $at, $s0, 0x18
    ctx->pc = 0x203eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x203eb4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x203EB4u;
    {
        const bool branch_taken_0x203eb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x203eb4) {
            ctx->pc = 0x203ED8u;
            goto label_203ed8;
        }
    }
    ctx->pc = 0x203EBCu;
    // 0x203ebc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x203ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x203ec0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203ec4: 0x24a5f798  addiu       $a1, $a1, -0x868
    ctx->pc = 0x203ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965144));
    // 0x203ec8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x203EC8u;
    SET_GPR_U32(ctx, 31, 0x203ED0u);
    ctx->pc = 0x203ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203EC8u;
            // 0x203ecc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203ED0u; }
        if (ctx->pc != 0x203ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203ED0u; }
        if (ctx->pc != 0x203ED0u) { return; }
    }
    ctx->pc = 0x203ED0u;
label_203ed0:
    // 0x203ed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203ED0u;
    {
        const bool branch_taken_0x203ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ed0) {
            ctx->pc = 0x203EECu;
            goto label_203eec;
        }
    }
    ctx->pc = 0x203ED8u;
label_203ed8:
    // 0x203ed8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x203ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x203edc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203ee0: 0x24a5f7a8  addiu       $a1, $a1, -0x858
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965160));
    // 0x203ee4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x203EE4u;
    SET_GPR_U32(ctx, 31, 0x203EECu);
    ctx->pc = 0x203EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203EE4u;
            // 0x203ee8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EECu; }
        if (ctx->pc != 0x203EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EECu; }
        if (ctx->pc != 0x203EECu) { return; }
    }
    ctx->pc = 0x203EECu;
label_203eec:
    // 0x203eec: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x203eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x203ef0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x203ef4: 0x8c65b7e0  lw          $a1, -0x4820($v1)
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948832)));
    // 0x203ef8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203efc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x203f00: 0xac45bdc8  sw          $a1, -0x4238($v0)
    ctx->pc = 0x203f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 5));
    // 0x203f04: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x203f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x203f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x203f0c: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x203F0Cu;
    SET_GPR_U32(ctx, 31, 0x203F14u);
    ctx->pc = 0x203F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F0Cu;
            // 0x203f10: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F14u; }
        if (ctx->pc != 0x203F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F14u; }
        if (ctx->pc != 0x203F14u) { return; }
    }
    ctx->pc = 0x203F14u;
label_203f14:
    // 0x203f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f18: 0xc063b18  jal         func_18EC60
    ctx->pc = 0x203F18u;
    SET_GPR_U32(ctx, 31, 0x203F20u);
    ctx->pc = 0x203F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F18u;
            // 0x203f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EC60u;
    if (runtime->hasFunction(0x18EC60u)) {
        auto targetFn = runtime->lookupFunction(0x18EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F20u; }
        if (ctx->pc != 0x203F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EC60_0x18ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F20u; }
        if (ctx->pc != 0x203F20u) { return; }
    }
    ctx->pc = 0x203F20u;
label_203f20:
    // 0x203f20: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203f24: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203f28: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x203f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x203f2c: 0xa490090e  sh          $s0, 0x90E($a0)
    ctx->pc = 0x203f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2318), (uint16_t)GPR_U32(ctx, 16));
    // 0x203f30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x203f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x203f34: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203f38: 0xa4600a98  sh          $zero, 0xA98($v1)
    ctx->pc = 0x203f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2712), (uint16_t)GPR_U32(ctx, 0));
    // 0x203f3c: 0xc080f68  jal         func_203DA0
    ctx->pc = 0x203F3Cu;
    SET_GPR_U32(ctx, 31, 0x203F44u);
    ctx->pc = 0x203F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F3Cu;
            // 0x203f40: 0xa040dc9d  sb          $zero, -0x2363($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294958237), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203DA0u;
    if (runtime->hasFunction(0x203DA0u)) {
        auto targetFn = runtime->lookupFunction(0x203DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F44u; }
        if (ctx->pc != 0x203F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203DA0_0x203da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F44u; }
        if (ctx->pc != 0x203F44u) { return; }
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203f48: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203f4c: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x203f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203f50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f54: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x203f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x203f58: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x203f5c: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x203f5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x203f60: 0xa0a00502  sb          $zero, 0x502($a1)
    ctx->pc = 0x203f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1282), (uint8_t)GPR_U32(ctx, 0));
    // 0x203f64: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x203f68: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x203f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x203f6c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x203f70: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x203f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
    // 0x203f74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x203f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x203f78: 0x244298a0  addiu       $v0, $v0, -0x6760
    ctx->pc = 0x203f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x203f7c: 0x8cea9bf8  lw          $t2, -0x6408($a3)
    ctx->pc = 0x203f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941688)));
label_203f80:
    // 0x203f80: 0x8cc8b7c8  lw          $t0, -0x4838($a2)
    ctx->pc = 0x203f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948808)));
    // 0x203f84: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x203f84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x203f88: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x203f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x203f8c: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x203f8cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x203f90: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x203f94: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x203f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x203f98: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x203f98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x203f9c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x203f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x203fa0: 0x950c0000  lhu         $t4, 0x0($t0)
    ctx->pc = 0x203fa0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x203fa4: 0x118b000c  beq         $t4, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x203FA4u;
    {
        const bool branch_taken_0x203fa4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 11));
        if (branch_taken_0x203fa4) {
            ctx->pc = 0x203FD8u;
            goto label_203fd8;
        }
    }
    ctx->pc = 0x203FACu;
    // 0x203fac: 0x91480502  lbu         $t0, 0x502($t2)
    ctx->pc = 0x203facu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1282)));
    // 0x203fb0: 0x6a4821  addu        $t1, $v1, $t2
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x203fb4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x203fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x203fb8: 0xa1040524  sb          $a0, 0x524($t0)
    ctx->pc = 0x203fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1316), (uint8_t)GPR_U32(ctx, 4));
    // 0x203fbc: 0x8caa9bf8  lw          $t2, -0x6408($a1)
    ctx->pc = 0x203fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x203fc0: 0x91480502  lbu         $t0, 0x502($t2)
    ctx->pc = 0x203fc0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1282)));
    // 0x203fc4: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x203fc8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x203fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x203fcc: 0xa1490502  sb          $t1, 0x502($t2)
    ctx->pc = 0x203fccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1282), (uint8_t)GPR_U32(ctx, 9));
    // 0x203fd0: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x203fd4: 0xa50c0504  sh          $t4, 0x504($t0)
    ctx->pc = 0x203fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1284), (uint16_t)GPR_U32(ctx, 12));
label_203fd8:
    // 0x203fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203fdc: 0x28880010  slti        $t0, $a0, 0x10
    ctx->pc = 0x203fdcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x203fe0: 0x5500ffe7  bnel        $t0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x203FE0u;
    {
        const bool branch_taken_0x203fe0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x203fe0) {
            ctx->pc = 0x203FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203FE0u;
            // 0x203fe4: 0x8cea9bf8  lw          $t2, -0x6408($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941688)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203f80;
        }
    }
    ctx->pc = 0x203FE8u;
    // 0x203fe8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203fec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x203ff0: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x203ff4: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x203ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x203ff8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x203ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203ffc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x204000: 0x8c42b7c8  lw          $v0, -0x4838($v0)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x204004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204008: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x204008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20400c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x204010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204014: 0xc080f90  jal         func_203E40
    ctx->pc = 0x204014u;
    SET_GPR_U32(ctx, 31, 0x20401Cu);
    ctx->pc = 0x204018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204014u;
            // 0x204018: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203E40u;
    if (runtime->hasFunction(0x203E40u)) {
        auto targetFn = runtime->lookupFunction(0x203E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20401Cu; }
        if (ctx->pc != 0x20401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203E40_0x203e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20401Cu; }
        if (ctx->pc != 0x20401Cu) { return; }
    }
    ctx->pc = 0x20401Cu;
label_20401c:
    // 0x20401c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204020: 0x101a80  sll         $v1, $s0, 10
    ctx->pc = 0x204020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x204024: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204028: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x204028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20402c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x204030: 0x2484008e  addiu       $a0, $a0, 0x8E
    ctx->pc = 0x204030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 142));
    // 0x204034: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x204038: 0xc049c48  jal         func_127120
    ctx->pc = 0x204038u;
    SET_GPR_U32(ctx, 31, 0x204040u);
    ctx->pc = 0x20403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204038u;
            // 0x20403c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204040u; }
        if (ctx->pc != 0x204040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204040u; }
        if (ctx->pc != 0x204040u) { return; }
    }
    ctx->pc = 0x204040u;
label_204040:
    // 0x204040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204048: 0x3e00008  jr          $ra
    ctx->pc = 0x204048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204048u;
            // 0x20404c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204050u;
    ctx->pc = 0x204050u;
}

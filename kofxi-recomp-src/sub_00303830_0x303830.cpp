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

// Function: sub_00303830
// Address: 0x303830 - 0x303a30
void sub_00303830_0x303830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303830_0x303830");
#endif

    switch (ctx->pc) {
        case 0x303864u: goto label_303864;
        case 0x30386cu: goto label_30386c;
        case 0x303874u: goto label_303874;
        case 0x30388cu: goto label_30388c;
        case 0x3038e4u: goto label_3038e4;
        case 0x3038f8u: goto label_3038f8;
        case 0x303900u: goto label_303900;
        case 0x303908u: goto label_303908;
        case 0x30391cu: goto label_30391c;
        case 0x3039b8u: goto label_3039b8;
        case 0x3039c8u: goto label_3039c8;
        case 0x3039d8u: goto label_3039d8;
        case 0x303a0cu: goto label_303a0c;
        default: break;
    }

    ctx->pc = 0x303830u;

    // 0x303830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x303830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x303834: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x303834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x303838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x303838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30383c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303848: 0x9063d9c8  lbu         $v1, -0x2638($v1)
    ctx->pc = 0x303848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957512)));
    // 0x30384c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30384cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x303850: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x303850u;
    {
        const bool branch_taken_0x303850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303850) {
            ctx->pc = 0x303874u;
            goto label_303874;
        }
    }
    ctx->pc = 0x303858u;
    // 0x303858: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x303858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30385c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x30385Cu;
    SET_GPR_U32(ctx, 31, 0x303864u);
    ctx->pc = 0x303860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30385Cu;
    // 0x303860: 0xc44cd9c0  lwc1        $f12, -0x2640($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x30385Cu, 0x303864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303864u;
label_303864:
    // 0x303864: 0xc067d38  jal         func_19F4E0
    ctx->pc = 0x303864u;
    SET_GPR_U32(ctx, 31, 0x30386Cu);
    ctx->pc = 0x303868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303864u;
    // 0x303868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4E0u, 0x303864u, 0x30386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30386Cu;
label_30386c:
    // 0x30386c: 0xc067d40  jal         func_19F500
    ctx->pc = 0x30386Cu;
    SET_GPR_U32(ctx, 31, 0x303874u);
    ctx->pc = 0x19F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F500u, 0x30386Cu, 0x303874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303874u;
label_303874:
    // 0x303874: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x303874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x303878: 0x94631530  lhu         $v1, 0x1530($v1)
    ctx->pc = 0x303878u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5424)));
    // 0x30387c: 0x1860005c  blez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x30387Cu;
    {
        const bool branch_taken_0x30387c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x303880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30387Cu;
        // 0x303880: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30387c) {
            ctx->pc = 0x3039F0u;
            goto label_3039f0;
        }
    }
    ctx->pc = 0x303884u;
    // 0x303884: 0x3c1101d1  lui         $s1, 0x1D1
    ctx->pc = 0x303884u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)465 << 16));
    // 0x303888: 0x26311540  addiu       $s1, $s1, 0x1540
    ctx->pc = 0x303888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
label_30388c:
    // 0x30388c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x30388cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303890: 0x12000051  beqz        $s0, . + 4 + (0x51 << 2)
    ctx->pc = 0x303890u;
    {
        const bool branch_taken_0x303890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x303890) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x303898u;
    // 0x303898: 0x9204008b  lbu         $a0, 0x8B($s0)
    ctx->pc = 0x303898u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x30389c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3038a0: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3038A0u;
    {
        const bool branch_taken_0x3038a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3038a0) {
            ctx->pc = 0x3039D0u;
            goto label_3039d0;
        }
    }
    ctx->pc = 0x3038A8u;
    // 0x3038a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3038a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3038ac: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3038ACu;
    {
        const bool branch_taken_0x3038ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3038ac) {
            ctx->pc = 0x3039C0u;
            goto label_3039c0;
        }
    }
    ctx->pc = 0x3038B4u;
    // 0x3038b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3038b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3038b8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3038B8u;
    {
        const bool branch_taken_0x3038b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3038b8) {
            ctx->pc = 0x303928u;
            goto label_303928;
        }
    }
    ctx->pc = 0x3038C0u;
    // 0x3038c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3038C0u;
    {
        const bool branch_taken_0x3038c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038c0) {
            ctx->pc = 0x3038D0u;
            goto label_3038d0;
        }
    }
    ctx->pc = 0x3038C8u;
    // 0x3038c8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3038C8u;
    {
        const bool branch_taken_0x3038c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038c8) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x3038D0u;
label_3038d0:
    // 0x3038d0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3038d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3038D4u;
    {
        const bool branch_taken_0x3038d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038d4) {
            ctx->pc = 0x3038F0u;
            goto label_3038f0;
        }
    }
    ctx->pc = 0x3038DCu;
    // 0x3038dc: 0xc067ca4  jal         func_19F290
    ctx->pc = 0x3038DCu;
    SET_GPR_U32(ctx, 31, 0x3038E4u);
    ctx->pc = 0x3038E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038DCu;
    // 0x3038e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F290u, 0x3038DCu, 0x3038E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038E4u;
label_3038e4:
    // 0x3038e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3038E4u;
    {
        const bool branch_taken_0x3038e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038e4) {
            ctx->pc = 0x3038F8u;
            goto label_3038f8;
        }
    }
    ctx->pc = 0x3038ECu;
    // 0x3038ec: 0x0  nop
    ctx->pc = 0x3038ecu;
    // NOP
label_3038f0:
    // 0x3038f0: 0xc067ca4  jal         func_19F290
    ctx->pc = 0x3038F0u;
    SET_GPR_U32(ctx, 31, 0x3038F8u);
    ctx->pc = 0x3038F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038F0u;
    // 0x3038f4: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F290u, 0x3038F0u, 0x3038F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038F8u;
label_3038f8:
    // 0x3038f8: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x3038F8u;
    SET_GPR_U32(ctx, 31, 0x303900u);
    ctx->pc = 0x3038FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038F8u;
    // 0x3038fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x3038F8u, 0x303900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303900u;
label_303900:
    // 0x303900: 0xc067cdc  jal         func_19F370
    ctx->pc = 0x303900u;
    SET_GPR_U32(ctx, 31, 0x303908u);
    ctx->pc = 0x303904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303900u;
    // 0x303904: 0x86040080  lh          $a0, 0x80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F370u, 0x303900u, 0x303908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303908u;
label_303908:
    // 0x303908: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x303908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x30390c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x30390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x303910: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303914: 0xc0c0f58  jal         func_303D60
    ctx->pc = 0x303914u;
    SET_GPR_U32(ctx, 31, 0x30391Cu);
    ctx->pc = 0x303918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303914u;
    // 0x303918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303D60u, 0x303914u, 0x30391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30391Cu;
label_30391c:
    // 0x30391c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x30391Cu;
    {
        const bool branch_taken_0x30391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30391c) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x303924u;
    // 0x303924: 0x0  nop
    ctx->pc = 0x303924u;
    // NOP
label_303928:
    // 0x303928: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x303928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30392c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x30392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303930: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x303930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x303934: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x303934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303938: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x303938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30393c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x30393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303940: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x303940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x303944: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x303944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x303948: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x303948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x30394c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x30394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303950: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x303950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x303954: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x303954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303958: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x303958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30395c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x30395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303960: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x303960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x303964: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x303968: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x303968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x30396c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x30396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303970: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x303970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x303974: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x303974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303978: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x303978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30397c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x30397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303980: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x303980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x303984: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x303984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x303988: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x303988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x30398c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x30398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303990: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x303990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x303994: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x303994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303998: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x303998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30399c: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x30399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3039a0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3039a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3039a4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3039a8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3039a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x3039ac: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x3039acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3039b0: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x3039B0u;
    SET_GPR_U32(ctx, 31, 0x3039B8u);
    ctx->pc = 0x3039B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3039B0u;
    // 0x3039b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304B30u, 0x3039B0u, 0x3039B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039B8u;
label_3039b8:
    // 0x3039b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3039B8u;
    {
        const bool branch_taken_0x3039b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039b8) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x3039C0u;
label_3039c0:
    // 0x3039c0: 0xc0c0e8c  jal         func_303A30
    ctx->pc = 0x3039C0u;
    SET_GPR_U32(ctx, 31, 0x3039C8u);
    ctx->pc = 0x3039C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3039C0u;
    // 0x3039c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303A30u, 0x3039C0u, 0x3039C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039C8u;
label_3039c8:
    // 0x3039c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3039C8u;
    {
        const bool branch_taken_0x3039c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039c8) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x3039D0u;
label_3039d0:
    // 0x3039d0: 0xc0c0ec8  jal         func_303B20
    ctx->pc = 0x3039D0u;
    SET_GPR_U32(ctx, 31, 0x3039D8u);
    ctx->pc = 0x3039D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3039D0u;
    // 0x3039d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303B20u, 0x3039D0u, 0x3039D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039D8u;
label_3039d8:
    // 0x3039d8: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3039d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3039dc: 0x94631530  lhu         $v1, 0x1530($v1)
    ctx->pc = 0x3039dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5424)));
    // 0x3039e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3039e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3039e4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x3039e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3039e8: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x3039E8u;
    {
        const bool branch_taken_0x3039e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3039ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E8u;
        // 0x3039ec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039e8) {
            ctx->pc = 0x30388Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30388c;
        }
    }
    ctx->pc = 0x3039F0u;
label_3039f0:
    // 0x3039f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3039f4: 0x9063d9c8  lbu         $v1, -0x2638($v1)
    ctx->pc = 0x3039f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957512)));
    // 0x3039f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3039f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3039fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3039FCu;
    {
        const bool branch_taken_0x3039fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039fc) {
            ctx->pc = 0x303A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3039FCu;
            // 0x303a00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303A10u;
            goto label_303a10;
        }
    }
    ctx->pc = 0x303A04u;
    // 0x303a04: 0xc067d3c  jal         func_19F4F0
    ctx->pc = 0x303A04u;
    SET_GPR_U32(ctx, 31, 0x303A0Cu);
    ctx->pc = 0x19F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4F0u, 0x303A04u, 0x303A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A0Cu;
label_303a0c:
    // 0x303a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x303a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_303a10:
    // 0x303a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x303A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A1Cu;
        // 0x303a20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303A24u;
    // 0x303a24: 0x0  nop
    ctx->pc = 0x303a24u;
    // NOP
    // 0x303a28: 0x0  nop
    ctx->pc = 0x303a28u;
    // NOP
    // 0x303a2c: 0x0  nop
    ctx->pc = 0x303a2cu;
    // NOP
    if (ctx->pc == 0x303a2cu) { ctx->pc = 0x303a30u; }
}

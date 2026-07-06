#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024E460
// Address: 0x24e460 - 0x24e818
void sub_0024E460_0x24e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E460_0x24e460");
#endif

    switch (ctx->pc) {
        case 0x24e468u: goto label_24e468;
        case 0x24e4c4u: goto label_24e4c4;
        case 0x24e4d8u: goto label_24e4d8;
        case 0x24e4e8u: goto label_24e4e8;
        case 0x24e4f8u: goto label_24e4f8;
        case 0x24e548u: goto label_24e548;
        case 0x24e580u: goto label_24e580;
        case 0x24e630u: goto label_24e630;
        case 0x24e640u: goto label_24e640;
        case 0x24e664u: goto label_24e664;
        case 0x24e678u: goto label_24e678;
        case 0x24e680u: goto label_24e680;
        case 0x24e690u: goto label_24e690;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e748u: goto label_24e748;
        case 0x24e7c4u: goto label_24e7c4;
        case 0x24e7e0u: goto label_24e7e0;
        default: break;
    }

    ctx->pc = 0x24e460u;

    // 0x24e460: 0x3e00008  jr          $ra
    ctx->pc = 0x24E460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E460u;
            // 0x24e464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24E468u;
label_24e468:
    // 0x24e468: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24e468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24e46c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x24e470: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e474: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24e478: 0xaca00db8  sw          $zero, 0xDB8($a1)
    ctx->pc = 0x24e478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3512), GPR_U32(ctx, 0));
    // 0x24e47c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24e480: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24e484: 0x24840e98  addiu       $a0, $a0, 0xE98
    ctx->pc = 0x24e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3736));
    // 0x24e488: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x24e488u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x24e48c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24e48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24e490: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24e490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24e494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e498: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24e49c: 0x24060170  addiu       $a2, $zero, 0x170
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x24e4a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24e4a4: 0x26b30dc8  addiu       $s3, $s5, 0xDC8
    ctx->pc = 0x24e4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 3528));
    // 0x24e4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e4ac: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x24e4acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x24e4b0: 0xac620dbc  sw          $v0, 0xDBC($v1)
    ctx->pc = 0x24e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 2));
    // 0x24e4b4: 0x26920dd8  addiu       $s2, $s4, 0xDD8
    ctx->pc = 0x24e4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3544));
    // 0x24e4b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24e4bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E4BCu;
    SET_GPR_U32(ctx, 31, 0x24E4C4u);
    ctx->pc = 0x24E4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4BCu;
            // 0x24e4c0: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4C4u; }
        if (ctx->pc != 0x24E4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4C4u; }
        if (ctx->pc != 0x24E4C4u) { return; }
    }
    ctx->pc = 0x24E4C4u;
label_24e4c4:
    // 0x24e4c4: 0x26300de8  addiu       $s0, $s1, 0xDE8
    ctx->pc = 0x24e4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3560));
    // 0x24e4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4d0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E4D0u;
    SET_GPR_U32(ctx, 31, 0x24E4D8u);
    ctx->pc = 0x24E4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4D0u;
            // 0x24e4d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4D8u; }
        if (ctx->pc != 0x24E4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4D8u; }
        if (ctx->pc != 0x24E4D8u) { return; }
    }
    ctx->pc = 0x24E4D8u;
label_24e4d8:
    // 0x24e4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4e0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E4E0u;
    SET_GPR_U32(ctx, 31, 0x24E4E8u);
    ctx->pc = 0x24E4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4E0u;
            // 0x24e4e4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4E8u; }
        if (ctx->pc != 0x24E4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4E8u; }
        if (ctx->pc != 0x24E4E8u) { return; }
    }
    ctx->pc = 0x24E4E8u;
label_24e4e8:
    // 0x24e4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E4F0u;
    SET_GPR_U32(ctx, 31, 0x24E4F8u);
    ctx->pc = 0x24E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4F0u;
            // 0x24e4f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4F8u; }
        if (ctx->pc != 0x24E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4F8u; }
        if (ctx->pc != 0x24E4F8u) { return; }
    }
    ctx->pc = 0x24E4F8u;
label_24e4f8:
    // 0x24e4f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24e4fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e500: 0xa2a30dc8  sb          $v1, 0xDC8($s5)
    ctx->pc = 0x24e500u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3528), (uint8_t)GPR_U32(ctx, 3));
    // 0x24e504: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x24e504u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x24e508: 0xa2230de8  sb          $v1, 0xDE8($s1)
    ctx->pc = 0x24e508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3560), (uint8_t)GPR_U32(ctx, 3));
    // 0x24e50c: 0xa2830dd8  sb          $v1, 0xDD8($s4)
    ctx->pc = 0x24e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3544), (uint8_t)GPR_U32(ctx, 3));
    // 0x24e510: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x24e510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x24e514: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x24e514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x24e518: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e51c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e520: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24e520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e524: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24e524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e528: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24e528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e52c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24e52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e530: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24e530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e538: 0xac400dc0  sw          $zero, 0xDC0($v0)
    ctx->pc = 0x24e538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3520), GPR_U32(ctx, 0));
    // 0x24e53c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E53Cu;
            // 0x24e540: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24E544u;
    // 0x24e544: 0x0  nop
    ctx->pc = 0x24e544u;
    // NOP
label_24e548:
    // 0x24e548: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24e54c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x24e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24e550: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24e554: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x24e554u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x24e558: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24e55c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24e560: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24e564: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24e568: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24e56c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24e570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e574: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24e578: 0xc092c78  jal         func_24B1E0
    ctx->pc = 0x24E578u;
    SET_GPR_U32(ctx, 31, 0x24E580u);
    ctx->pc = 0x24E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E578u;
            // 0x24e57c: 0x3c17003a  lui         $s7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B1E0u;
    if (runtime->hasFunction(0x24B1E0u)) {
        auto targetFn = runtime->lookupFunction(0x24B1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E580u; }
        if (ctx->pc != 0x24E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B1E0_0x24b1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E580u; }
        if (ctx->pc != 0x24E580u) { return; }
    }
    ctx->pc = 0x24E580u;
label_24e580:
    // 0x24e580: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24e580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24e584: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x24e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x24e588: 0xace31034  sw          $v1, 0x1034($a3)
    ctx->pc = 0x24e588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4148), GPR_U32(ctx, 3));
    // 0x24e58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e590: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x24e590u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x24e594: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e598: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x24e598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x24e59c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x24e59cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x24e5a0: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x24e5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x24e5a4: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x24e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x24e5a8: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x24e5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x24e5ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x24e5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24e5b0: 0xae82100c  sw          $v0, 0x100C($s4)
    ctx->pc = 0x24e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4108), GPR_U32(ctx, 2));
    // 0x24e5b4: 0x24150258  addiu       $s5, $zero, 0x258
    ctx->pc = 0x24e5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x24e5b8: 0xade21014  sw          $v0, 0x1014($t7)
    ctx->pc = 0x24e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4116), GPR_U32(ctx, 2));
    // 0x24e5bc: 0x3c0d003a  lui         $t5, 0x3A
    ctx->pc = 0x24e5bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)58 << 16));
    // 0x24e5c0: 0xae22101c  sw          $v0, 0x101C($s1)
    ctx->pc = 0x24e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4124), GPR_U32(ctx, 2));
    // 0x24e5c4: 0x340bc000  ori         $t3, $zero, 0xC000
    ctx->pc = 0x24e5c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x24e5c8: 0xac621020  sw          $v0, 0x1020($v1)
    ctx->pc = 0x24e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4128), GPR_U32(ctx, 2));
    // 0x24e5cc: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x24e5ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x24e5d0: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x24e5d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e5d4: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x24e5d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x24e5d8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24e5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24e5dc: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x24e5dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x24e5e0: 0xad4501cc  sw          $a1, 0x1CC($t2)
    ctx->pc = 0x24e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 460), GPR_U32(ctx, 5));
    // 0x24e5e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e5e8: 0xad061010  sw          $a2, 0x1010($t0)
    ctx->pc = 0x24e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4112), GPR_U32(ctx, 6));
    // 0x24e5ec: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x24e5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x24e5f0: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x24e5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x24e5f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24e5f8: 0xaed501c8  sw          $s5, 0x1C8($s6)
    ctx->pc = 0x24e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 456), GPR_U32(ctx, 21));
    // 0x24e5fc: 0x248411c0  addiu       $a0, $a0, 0x11C0
    ctx->pc = 0x24e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4544));
    // 0x24e600: 0xae001018  sw          $zero, 0x1018($s0)
    ctx->pc = 0x24e600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4120), GPR_U32(ctx, 0));
    // 0x24e604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e608: 0xadab01c0  sw          $t3, 0x1C0($t5)
    ctx->pc = 0x24e608u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 448), GPR_U32(ctx, 11));
    // 0x24e60c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x24e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24e610: 0xad8901c4  sw          $t1, 0x1C4($t4)
    ctx->pc = 0x24e610u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 452), GPR_U32(ctx, 9));
    // 0x24e614: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x24e614u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x24e618: 0xae601008  sw          $zero, 0x1008($s3)
    ctx->pc = 0x24e618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4104), GPR_U32(ctx, 0));
    // 0x24e61c: 0xafd51024  sw          $s5, 0x1024($fp)
    ctx->pc = 0x24e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4132), GPR_U32(ctx, 21));
    // 0x24e620: 0xae401030  sw          $zero, 0x1030($s2)
    ctx->pc = 0x24e620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4144), GPR_U32(ctx, 0));
    // 0x24e624: 0xadc01038  sw          $zero, 0x1038($t6)
    ctx->pc = 0x24e624u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4152), GPR_U32(ctx, 0));
    // 0x24e628: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E628u;
    SET_GPR_U32(ctx, 31, 0x24E630u);
    ctx->pc = 0x24E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E628u;
            // 0x24e62c: 0xac401028  sw          $zero, 0x1028($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E630u; }
        if (ctx->pc != 0x24E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E630u; }
        if (ctx->pc != 0x24E630u) { return; }
    }
    ctx->pc = 0x24E630u;
label_24e630:
    // 0x24e630: 0x26e411a8  addiu       $a0, $s7, 0x11A8
    ctx->pc = 0x24e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4520));
    // 0x24e634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e638: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E638u;
    SET_GPR_U32(ctx, 31, 0x24E640u);
    ctx->pc = 0x24E63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E638u;
            // 0x24e63c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E640u; }
        if (ctx->pc != 0x24E640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E640u; }
        if (ctx->pc != 0x24E640u) { return; }
    }
    ctx->pc = 0x24E640u;
label_24e640:
    // 0x24e640: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e644: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x24e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24e648: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24e648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24e64c: 0xac6011d4  sw          $zero, 0x11D4($v1)
    ctx->pc = 0x24e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 0));
    // 0x24e650: 0xaec2102c  sw          $v0, 0x102C($s6)
    ctx->pc = 0x24e650u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4140), GPR_U32(ctx, 2));
    // 0x24e654: 0x248410a8  addiu       $a0, $a0, 0x10A8
    ctx->pc = 0x24e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4264));
    // 0x24e658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e65c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E65Cu;
    SET_GPR_U32(ctx, 31, 0x24E664u);
    ctx->pc = 0x24E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E65Cu;
            // 0x24e660: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E664u; }
        if (ctx->pc != 0x24E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E664u; }
        if (ctx->pc != 0x24E664u) { return; }
    }
    ctx->pc = 0x24E664u;
label_24e664:
    // 0x24e664: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x24e664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x24e668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e66c: 0x2484ae60  addiu       $a0, $a0, -0x51A0
    ctx->pc = 0x24e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946400));
    // 0x24e670: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24E670u;
    SET_GPR_U32(ctx, 31, 0x24E678u);
    ctx->pc = 0x24E674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E670u;
            // 0x24e674: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E678u; }
        if (ctx->pc != 0x24E678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E678u; }
        if (ctx->pc != 0x24E678u) { return; }
    }
    ctx->pc = 0x24E678u;
label_24e678:
    // 0x24e678: 0xc093384  jal         func_24CE10
    ctx->pc = 0x24E678u;
    SET_GPR_U32(ctx, 31, 0x24E680u);
    ctx->pc = 0x24CE10u;
    if (runtime->hasFunction(0x24CE10u)) {
        auto targetFn = runtime->lookupFunction(0x24CE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E680u; }
        if (ctx->pc != 0x24E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CE10_0x24ce10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E680u; }
        if (ctx->pc != 0x24E680u) { return; }
    }
    ctx->pc = 0x24E680u;
label_24e680:
    // 0x24e680: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24e680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e684: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x24e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x24e688: 0xc08a160  jal         func_228580
    ctx->pc = 0x24E688u;
    SET_GPR_U32(ctx, 31, 0x24E690u);
    ctx->pc = 0x24E68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E688u;
            // 0x24e68c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228580u;
    if (runtime->hasFunction(0x228580u)) {
        auto targetFn = runtime->lookupFunction(0x228580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E690u; }
        if (ctx->pc != 0x24E690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228580_0x228580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E690u; }
        if (ctx->pc != 0x24E690u) { return; }
    }
    ctx->pc = 0x24E690u;
label_24e690:
    // 0x24e690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e694: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E694u;
    {
        const bool branch_taken_0x24e694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E694u;
            // 0x24e698: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e694) {
            ctx->pc = 0x24E6ACu;
            goto label_24e6ac;
        }
    }
    ctx->pc = 0x24E69Cu;
    // 0x24e69c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x24e6a0: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x24E6A0u;
    SET_GPR_U32(ctx, 31, 0x24E6A8u);
    ctx->pc = 0x24E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E6A0u;
            // 0x24e6a4: 0x24846c80  addiu       $a0, $a0, 0x6C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6A8u; }
        if (ctx->pc != 0x24E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6A8u; }
        if (ctx->pc != 0x24E6A8u) { return; }
    }
    ctx->pc = 0x24E6A8u;
label_24e6a8:
    // 0x24e6a8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24e6ac:
    // 0x24e6ac: 0x3c04c4ec  lui         $a0, 0xC4EC
    ctx->pc = 0x24e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50412 << 16));
    // 0x24e6b0: 0x246301d8  addiu       $v1, $v1, 0x1D8
    ctx->pc = 0x24e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
    // 0x24e6b4: 0x34844ec5  ori         $a0, $a0, 0x4EC5
    ctx->pc = 0x24e6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20165);
    // 0x24e6b8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x24e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24e6bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e6c0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x24e6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24e6c4: 0x24420390  addiu       $v0, $v0, 0x390
    ctx->pc = 0x24e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x24e6c8: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x24e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x24e6cc: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x24e6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x24e6d0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24e6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24e6d4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x24e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x24e6d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x24e6d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x24e6dc: 0x0  nop
    ctx->pc = 0x24e6dcu;
    // NOP
label_24e6e0:
    // 0x24e6e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x24e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24e6e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24e6e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e6ec: 0x0  nop
    ctx->pc = 0x24e6ecu;
    // NOP
    // 0x24e6f0: 0x0  nop
    ctx->pc = 0x24e6f0u;
    // NOP
    // 0x24e6f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E6F4u;
    {
        const bool branch_taken_0x24e6f4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x24e6f4) {
            ctx->pc = 0x24E6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e6e0;
        }
    }
    ctx->pc = 0x24E6FCu;
    // 0x24e6fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e700: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x24e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
    // 0x24e704: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x24e704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24e708: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x24e708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24e70c: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x24e70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24e710: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x24E710u;
    {
        const bool branch_taken_0x24e710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E710u;
            // 0x24e714: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e710) {
            ctx->pc = 0x24E784u;
            goto label_24e784;
        }
    }
    ctx->pc = 0x24E718u;
    // 0x24e718: 0x3c03c4ec  lui         $v1, 0xC4EC
    ctx->pc = 0x24e718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50412 << 16));
    // 0x24e71c: 0x3c023b13  lui         $v0, 0x3B13
    ctx->pc = 0x24e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15123 << 16));
    // 0x24e720: 0x248401d8  addiu       $a0, $a0, 0x1D8
    ctx->pc = 0x24e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x24e724: 0x3442b13b  ori         $v0, $v0, 0xB13B
    ctx->pc = 0x24e724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45371);
    // 0x24e728: 0x34634ec5  ori         $v1, $v1, 0x4EC5
    ctx->pc = 0x24e728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20165);
    // 0x24e72c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x24e72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24e730: 0x72031818  mult1       $v1, $s0, $v1
    ctx->pc = 0x24e730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24e734: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e738: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24e738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e73c: 0x24490390  addiu       $t1, $v0, 0x390
    ctx->pc = 0x24e73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x24e740: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x24e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x24e744: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x24e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24e748:
    // 0x24e748: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24e74c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e750: 0x54680009  bnel        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E750u;
    {
        const bool branch_taken_0x24e750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x24e750) {
            ctx->pc = 0x24E754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24E750u;
            // 0x24e754: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24E778u;
            goto label_24e778;
        }
    }
    ctx->pc = 0x24E758u;
    // 0x24e758: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x24e758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24e75c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E75Cu;
    {
        const bool branch_taken_0x24e75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e75c) {
            ctx->pc = 0x24E760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24E75Cu;
            // 0x24e760: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24E778u;
            goto label_24e778;
        }
    }
    ctx->pc = 0x24E764u;
    // 0x24e764: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E764u;
    {
        const bool branch_taken_0x24e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x24E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E764u;
            // 0x24e768: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e764) {
            ctx->pc = 0x24E774u;
            goto label_24e774;
        }
    }
    ctx->pc = 0x24E76Cu;
    // 0x24e76c: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x24e770: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x24e770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_24e774:
    // 0x24e774: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x24e774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_24e778:
    // 0x24e778: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x24e778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24e77c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24E77Cu;
    {
        const bool branch_taken_0x24e77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E77Cu;
            // 0x24e780: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e77c) {
            ctx->pc = 0x24E748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e748;
        }
    }
    ctx->pc = 0x24E784u;
label_24e784:
    // 0x24e784: 0xad401190  sw          $zero, 0x1190($t2)
    ctx->pc = 0x24e784u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4496), GPR_U32(ctx, 0));
    // 0x24e788: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e78c: 0x944317c0  lhu         $v1, 0x17C0($v0)
    ctx->pc = 0x24e78cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x24e790: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24e794: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24e798: 0x8ec5102c  lw          $a1, 0x102C($s6)
    ctx->pc = 0x24e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4140)));
    // 0x24e79c: 0xa4431194  sh          $v1, 0x1194($v0)
    ctx->pc = 0x24e79cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4500), (uint16_t)GPR_U32(ctx, 3));
    // 0x24e7a0: 0x26e411a8  addiu       $a0, $s7, 0x11A8
    ctx->pc = 0x24e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4520));
    // 0x24e7a4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x24e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x24e7a8: 0x24e211a0  addiu       $v0, $a3, 0x11A0
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4512));
    // 0x24e7ac: 0xace011a0  sw          $zero, 0x11A0($a3)
    ctx->pc = 0x24e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4512), GPR_U32(ctx, 0));
    // 0x24e7b0: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x24e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x24e7b4: 0x240401fd  addiu       $a0, $zero, 0x1FD
    ctx->pc = 0x24e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    // 0x24e7b8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x24e7bc: 0xc08c6f0  jal         func_231BC0
    ctx->pc = 0x24E7BCu;
    SET_GPR_U32(ctx, 31, 0x24E7C4u);
    ctx->pc = 0x24E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E7BCu;
            // 0x24e7c0: 0x24a501a8  addiu       $a1, $a1, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7C4u; }
        if (ctx->pc != 0x24E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7C4u; }
        if (ctx->pc != 0x24E7C4u) { return; }
    }
    ctx->pc = 0x24E7C4u;
label_24e7c4:
    // 0x24e7c4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e7c8: 0x8c641020  lw          $a0, 0x1020($v1)
    ctx->pc = 0x24e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x24e7cc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e7d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E7D0u;
    {
        const bool branch_taken_0x24e7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7d0) {
            ctx->pc = 0x24E7E8u;
            goto label_24e7e8;
        }
    }
    ctx->pc = 0x24E7D8u;
    // 0x24e7d8: 0xc09101c  jal         func_244070
    ctx->pc = 0x24E7D8u;
    SET_GPR_U32(ctx, 31, 0x24E7E0u);
    ctx->pc = 0x24E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E7D8u;
            // 0x24e7dc: 0x8fc41024  lw          $a0, 0x1024($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244070u;
    if (runtime->hasFunction(0x244070u)) {
        auto targetFn = runtime->lookupFunction(0x244070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7E0u; }
        if (ctx->pc != 0x24E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244070_0x244070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7E0u; }
        if (ctx->pc != 0x24E7E0u) { return; }
    }
    ctx->pc = 0x24E7E0u;
label_24e7e0:
    // 0x24e7e0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24e7e4: 0xac621028  sw          $v0, 0x1028($v1)
    ctx->pc = 0x24e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4136), GPR_U32(ctx, 2));
label_24e7e8:
    // 0x24e7e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24e7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e7ec: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24e7ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e7f0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24e7f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e7f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24e7f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e7f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24e7f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e7fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24e7fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e800: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24e800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e804: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24e804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e808: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24e808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e810: 0x3e00008  jr          $ra
    ctx->pc = 0x24E810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E810u;
            // 0x24e814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24E818u;
    ctx->pc = 0x24e818u;
}

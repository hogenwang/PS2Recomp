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

// Function: sub_00321490
// Address: 0x321490 - 0x3215d0
void sub_00321490_0x321490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321490_0x321490");
#endif

    switch (ctx->pc) {
        case 0x3214f0u: goto label_3214f0;
        case 0x32151cu: goto label_32151c;
        case 0x321540u: goto label_321540;
        case 0x321588u: goto label_321588;
        default: break;
    }

    ctx->pc = 0x321490u;

    // 0x321490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321494: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32149c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3214a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3214a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3214a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3214a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214a8: 0x8044d9a0  lb          $a0, -0x2660($v0)
    ctx->pc = 0x3214a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957472)));
    // 0x3214ac: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3214ACu;
    {
        const bool branch_taken_0x3214ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3214ac) {
            ctx->pc = 0x3215A8u;
            goto label_3215a8;
        }
    }
    ctx->pc = 0x3214B4u;
    // 0x3214b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3214b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3214b8: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3214B8u;
    {
        const bool branch_taken_0x3214b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3214b8) {
            ctx->pc = 0x32157Cu;
            goto label_32157c;
        }
    }
    ctx->pc = 0x3214C0u;
    // 0x3214c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3214c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3214c4: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3214C4u;
    {
        const bool branch_taken_0x3214c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3214c4) {
            ctx->pc = 0x321558u;
            goto label_321558;
        }
    }
    ctx->pc = 0x3214CCu;
    // 0x3214cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3214ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3214d0: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3214D0u;
    {
        const bool branch_taken_0x3214d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3214d0) {
            ctx->pc = 0x321534u;
            goto label_321534;
        }
    }
    ctx->pc = 0x3214D8u;
    // 0x3214d8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3214D8u;
    {
        const bool branch_taken_0x3214d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3214d8) {
            ctx->pc = 0x3214DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214D8u;
            // 0x3214dc: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3214E8u;
            goto label_3214e8;
        }
    }
    ctx->pc = 0x3214E0u;
    // 0x3214e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3214E0u;
    {
        const bool branch_taken_0x3214e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3214E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214E0u;
        // 0x3214e4: 0x3c02009c  lui         $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214e0) {
            ctx->pc = 0x3215B8u;
            goto label_3215b8;
        }
    }
    ctx->pc = 0x3214E8u;
label_3214e8:
    // 0x3214e8: 0xc063a04  jal         func_18E810
    ctx->pc = 0x3214E8u;
    SET_GPR_U32(ctx, 31, 0x3214F0u);
    ctx->pc = 0x18E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E810u, 0x3214E8u, 0x3214F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214F0u;
label_3214f0:
    // 0x3214f0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3214F0u;
    {
        const bool branch_taken_0x3214f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3214f0) {
            ctx->pc = 0x3214F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214F0u;
            // 0x3214f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3215C0u;
            goto label_3215c0;
        }
    }
    ctx->pc = 0x3214F8u;
    // 0x3214f8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3214f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3214fc: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3214fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x321500: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x321504: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x321504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x321508: 0x24a50a18  addiu       $a1, $a1, 0xA18
    ctx->pc = 0x321508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2584));
    // 0x32150c: 0x24c67010  addiu       $a2, $a2, 0x7010
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28688));
    // 0x321510: 0x24e70410  addiu       $a3, $a3, 0x410
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1040));
    // 0x321514: 0xc063bf0  jal         func_18EFC0
    ctx->pc = 0x321514u;
    SET_GPR_U32(ctx, 31, 0x32151Cu);
    ctx->pc = 0x321518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321514u;
    // 0x321518: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFC0u, 0x321514u, 0x32151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32151Cu;
label_32151c:
    // 0x32151c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x321520: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321524: 0x8063d9a0  lb          $v1, -0x2660($v1)
    ctx->pc = 0x321524u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957472)));
    // 0x321528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32152c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x32152Cu;
    {
        const bool branch_taken_0x32152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32152Cu;
        // 0x321530: 0xa043d9a0  sb          $v1, -0x2660($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32152c) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x321534u;
label_321534:
    // 0x321534: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x321538: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x321538u;
    SET_GPR_U32(ctx, 31, 0x321540u);
    ctx->pc = 0x32153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321538u;
    // 0x32153c: 0x24840a18  addiu       $a0, $a0, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x321538u, 0x321540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321540u;
label_321540:
    // 0x321540: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x321544: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321548: 0x8063d9a0  lb          $v1, -0x2660($v1)
    ctx->pc = 0x321548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957472)));
    // 0x32154c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321550: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x321550u;
    {
        const bool branch_taken_0x321550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321550u;
        // 0x321554: 0xa043d9a0  sb          $v1, -0x2660($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321550) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x321558u;
label_321558:
    // 0x321558: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x32155c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321560: 0x8c4263c0  lw          $v0, 0x63C0($v0)
    ctx->pc = 0x321560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25536)));
    // 0x321564: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x321564u;
    {
        const bool branch_taken_0x321564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x321564) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x32156Cu;
    // 0x32156c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x32156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x321570: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321574: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x321574u;
    {
        const bool branch_taken_0x321574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321574u;
        // 0x321578: 0xa043d9a0  sb          $v1, -0x2660($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321574) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x32157Cu;
label_32157c:
    // 0x32157c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32157cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x321580: 0xc0c0d84  jal         func_303610
    ctx->pc = 0x321580u;
    SET_GPR_U32(ctx, 31, 0x321588u);
    ctx->pc = 0x321584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321580u;
    // 0x321584: 0x24843ec8  addiu       $a0, $a0, 0x3EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303610u, 0x321580u, 0x321588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321588u;
label_321588:
    // 0x321588: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x321588u;
    {
        const bool branch_taken_0x321588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321588) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x321590u;
    // 0x321590: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x321590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x321594: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321598: 0x8063d9a0  lb          $v1, -0x2660($v1)
    ctx->pc = 0x321598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957472)));
    // 0x32159c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3215a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3215A0u;
    {
        const bool branch_taken_0x3215a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215A0u;
        // 0x3215a4: 0xa043d9a0  sb          $v1, -0x2660($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215a0) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x3215A8u;
label_3215a8:
    // 0x3215a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3215a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3215ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3215acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3215b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3215B0u;
    {
        const bool branch_taken_0x3215b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215B0u;
        // 0x3215b4: 0xa060d9a0  sb          $zero, -0x2660($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215b0) {
            ctx->pc = 0x3215C0u;
            goto label_3215c0;
        }
    }
    ctx->pc = 0x3215B8u;
label_3215b8:
    // 0x3215b8: 0xa040d9a0  sb          $zero, -0x2660($v0)
    ctx->pc = 0x3215b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 0));
label_3215bc:
    // 0x3215bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3215bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3215c0:
    // 0x3215c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3215c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3215c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3215c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3215c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3215CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215C8u;
        // 0x3215cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215D0u;
}

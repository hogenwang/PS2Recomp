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

// Function: sub_001E1860
// Address: 0x1e1860 - 0x1e1a18
void sub_001E1860_0x1e1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1860_0x1e1860");
#endif

    switch (ctx->pc) {
        case 0x1e1884u: goto label_1e1884;
        case 0x1e189cu: goto label_1e189c;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18e4u: goto label_1e18e4;
        case 0x1e18fcu: goto label_1e18fc;
        case 0x1e1910u: goto label_1e1910;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e192cu: goto label_1e192c;
        case 0x1e1958u: goto label_1e1958;
        case 0x1e1964u: goto label_1e1964;
        case 0x1e1970u: goto label_1e1970;
        case 0x1e19b4u: goto label_1e19b4;
        case 0x1e19e8u: goto label_1e19e8;
        case 0x1e19f4u: goto label_1e19f4;
        default: break;
    }

    ctx->pc = 0x1e1860u;

    // 0x1e1860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1864: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e1868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e186c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e1870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e1870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e1874: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e1874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e1878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e187c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E187Cu;
    SET_GPR_U32(ctx, 31, 0x1E1884u);
    ctx->pc = 0x1E1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E187Cu;
    // 0x1e1880: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E187Cu, 0x1E1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1884u;
label_1e1884:
    // 0x1e1884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e1884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e188c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E188Cu;
    {
        const bool branch_taken_0x1e188c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E188Cu;
        // 0x1e1890: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e188c) {
            ctx->pc = 0x1E18A8u;
            goto label_1e18a8;
        }
    }
    ctx->pc = 0x1E1894u;
    // 0x1e1894: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1894u;
    SET_GPR_U32(ctx, 31, 0x1E189Cu);
    ctx->pc = 0x1E1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1894u;
    // 0x1e1898: 0x2484d2f0  addiu       $a0, $a0, -0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1894u, 0x1E189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E189Cu;
label_1e189c:
    // 0x1e189c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E189Cu;
    {
        const bool branch_taken_0x1e189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E189Cu;
        // 0x1e18a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e189c) {
            ctx->pc = 0x1E1978u;
            goto label_1e1978;
        }
    }
    ctx->pc = 0x1E18A4u;
    // 0x1e18a4: 0x0  nop
    ctx->pc = 0x1e18a4u;
    // NOP
label_1e18a8:
    // 0x1e18a8: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x1e18ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E18ACu;
    {
        const bool branch_taken_0x1e18ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ACu;
        // 0x1e18b0: 0x8e13003c  lw          $s3, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18ac) {
            ctx->pc = 0x1E18BCu;
            goto label_1e18bc;
        }
    }
    ctx->pc = 0x1E18B4u;
    // 0x1e18b4: 0x52400030  beql        $s2, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E18B4u;
    {
        const bool branch_taken_0x1e18b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18b4) {
            ctx->pc = 0x1E18B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E18B4u;
            // 0x1e18b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1978u;
            goto label_1e1978;
        }
    }
    ctx->pc = 0x1E18BCu;
label_1e18bc:
    // 0x1e18bc: 0xc0782b6  jal         func_1E0AD8
    ctx->pc = 0x1E18BCu;
    SET_GPR_U32(ctx, 31, 0x1E18C4u);
    ctx->pc = 0x1E0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0AD8u, 0x1E18BCu, 0x1E18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18C4u;
label_1e18c4:
    // 0x1e18c4: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E18C4u;
    {
        const bool branch_taken_0x1e18c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18C4u;
        // 0x1e18c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18c4) {
            ctx->pc = 0x1E1914u;
            goto label_1e1914;
        }
    }
    ctx->pc = 0x1E18CCu;
    // 0x1e18cc: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e18d0: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E18D0u;
    {
        const bool branch_taken_0x1e18d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e18d0) {
            ctx->pc = 0x1E1914u;
            goto label_1e1914;
        }
    }
    ctx->pc = 0x1E18D8u;
    // 0x1e18d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e18d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e18dc: 0xc07ebda  jal         func_1FAF68
    ctx->pc = 0x1E18DCu;
    SET_GPR_U32(ctx, 31, 0x1E18E4u);
    ctx->pc = 0x1E18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18DCu;
    // 0x1e18e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF68u, 0x1E18DCu, 0x1E18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18E4u;
label_1e18e4:
    // 0x1e18e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E18E4u;
    {
        const bool branch_taken_0x1e18e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18E4u;
        // 0x1e18e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18e4) {
            ctx->pc = 0x1E1908u;
            goto label_1e1908;
        }
    }
    ctx->pc = 0x1E18ECu;
    // 0x1e18ec: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E18ECu;
    {
        const bool branch_taken_0x1e18ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1e18ec) {
            ctx->pc = 0x1E18F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E18ECu;
            // 0x1e18f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1914u;
            goto label_1e1914;
        }
    }
    ctx->pc = 0x1E18F4u;
    // 0x1e18f4: 0xc079e64  jal         func_1E7990
    ctx->pc = 0x1E18F4u;
    SET_GPR_U32(ctx, 31, 0x1E18FCu);
    ctx->pc = 0x1E18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18F4u;
    // 0x1e18f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7990u, 0x1E18F4u, 0x1E18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18FCu;
label_1e18fc:
    // 0x1e18fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E18FCu;
    {
        const bool branch_taken_0x1e18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18FCu;
        // 0x1e1900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18fc) {
            ctx->pc = 0x1E1914u;
            goto label_1e1914;
        }
    }
    ctx->pc = 0x1E1904u;
    // 0x1e1904: 0x0  nop
    ctx->pc = 0x1e1904u;
    // NOP
label_1e1908:
    // 0x1e1908: 0xc079e64  jal         func_1E7990
    ctx->pc = 0x1E1908u;
    SET_GPR_U32(ctx, 31, 0x1E1910u);
    ctx->pc = 0x1E190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1908u;
    // 0x1e190c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7990u, 0x1E1908u, 0x1E1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1910u;
label_1e1910:
    // 0x1e1910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e1910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e1914:
    // 0x1e1914: 0xc07dc40  jal         func_1F7100
    ctx->pc = 0x1E1914u;
    SET_GPR_U32(ctx, 31, 0x1E191Cu);
    ctx->pc = 0x1E1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1914u;
    // 0x1e1918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7100u, 0x1E1914u, 0x1E191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E191Cu;
label_1e191c:
    // 0x1e191c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E191Cu;
    {
        const bool branch_taken_0x1e191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e191c) {
            ctx->pc = 0x1E1920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E191Cu;
            // 0x1e1920: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E195Cu;
            goto label_1e195c;
        }
    }
    ctx->pc = 0x1E1924u;
    // 0x1e1924: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E1924u;
    SET_GPR_U32(ctx, 31, 0x1E192Cu);
    ctx->pc = 0x1E1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1924u;
    // 0x1e1928: 0x2404feca  addiu       $a0, $zero, -0x136 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966986));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E1924u, 0x1E192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E192Cu;
label_1e192c:
    // 0x1e192c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1e1930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1934: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1934u;
    {
        const bool branch_taken_0x1e1934 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1934u;
        // 0x1e1938: 0x2464d318  addiu       $a0, $v1, -0x2CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1934) {
            ctx->pc = 0x1E1948u;
            goto label_1e1948;
        }
    }
    ctx->pc = 0x1E193Cu;
    // 0x1e193c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e1940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1940u;
    {
        const bool branch_taken_0x1e1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1940u;
        // 0x1e1944: 0x2445d340  addiu       $a1, $v0, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1940) {
            ctx->pc = 0x1E1950u;
            goto label_1e1950;
        }
    }
    ctx->pc = 0x1E1948u;
label_1e1948:
    // 0x1e1948: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e194c: 0x2445d348  addiu       $a1, $v0, -0x2CB8
    ctx->pc = 0x1e194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955848));
label_1e1950:
    // 0x1e1950: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1950u;
    SET_GPR_U32(ctx, 31, 0x1E1958u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1950u, 0x1E1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1958u;
label_1e1958:
    // 0x1e1958: 0x26040488  addiu       $a0, $s0, 0x488
    ctx->pc = 0x1e1958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
label_1e195c:
    // 0x1e195c: 0xc0798ea  jal         func_1E63A8
    ctx->pc = 0x1E195Cu;
    SET_GPR_U32(ctx, 31, 0x1E1964u);
    ctx->pc = 0x1E1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E195Cu;
    // 0x1e1960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A8u, 0x1E195Cu, 0x1E1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1964u;
label_1e1964:
    // 0x1e1964: 0x260404a8  addiu       $a0, $s0, 0x4A8
    ctx->pc = 0x1e1964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    // 0x1e1968: 0xc0798ea  jal         func_1E63A8
    ctx->pc = 0x1E1968u;
    SET_GPR_U32(ctx, 31, 0x1E1970u);
    ctx->pc = 0x1E196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1968u;
    // 0x1e196c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A8u, 0x1E1968u, 0x1E1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1970u;
label_1e1970:
    // 0x1e1970: 0xa2120072  sb          $s2, 0x72($s0)
    ctx->pc = 0x1e1970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e1974: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e1974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1978:
    // 0x1e1978: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e1978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e197c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e197cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1980: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e1980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1984: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e1984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1988: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1988u;
        // 0x1e198c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1990u;
    // 0x1e1990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e199c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e19a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e19a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e19a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e19ac: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E19ACu;
    SET_GPR_U32(ctx, 31, 0x1E19B4u);
    ctx->pc = 0x1E19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19ACu;
    // 0x1e19b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E19ACu, 0x1E19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19B4u;
label_1e19b4:
    // 0x1e19b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e19b8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E19B8u;
    {
        const bool branch_taken_0x1e19b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19B8u;
        // 0x1e19bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19b8) {
            ctx->pc = 0x1E19E0u;
            goto label_1e19e0;
        }
    }
    ctx->pc = 0x1E19C0u;
    // 0x1e19c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e19c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e19c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e19c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e19c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e19cc: 0x2484d350  addiu       $a0, $a0, -0x2CB0
    ctx->pc = 0x1e19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x1e19d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e19d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e19d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e19d8: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E19D8u;
    ctx->pc = 0x1E19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19D8u;
    // 0x1e19dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E19E0u;
label_1e19e0:
    // 0x1e19e0: 0xc078ce2  jal         func_1E3388
    ctx->pc = 0x1E19E0u;
    SET_GPR_U32(ctx, 31, 0x1E19E8u);
    ctx->pc = 0x1E3388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3388u, 0x1E19E0u, 0x1E19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19E8u;
label_1e19e8:
    // 0x1e19e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19ec: 0xc07858e  jal         func_1E1638
    ctx->pc = 0x1E19ECu;
    SET_GPR_U32(ctx, 31, 0x1E19F4u);
    ctx->pc = 0x1E19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19ECu;
    // 0x1e19f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1638u, 0x1E19ECu, 0x1E19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19F4u;
label_1e19f4:
    // 0x1e19f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e19f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e19f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e19fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1a00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e1a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1a10: 0x80786ec  j           func_1E1BB0
    ctx->pc = 0x1E1A10u;
    ctx->pc = 0x1E1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A10u;
    // 0x1e1a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BB0u, 0x1E1A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1A18u;
}

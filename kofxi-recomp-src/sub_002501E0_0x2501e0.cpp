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

// Function: sub_002501E0
// Address: 0x2501e0 - 0x250660
void sub_002501E0_0x2501e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002501E0_0x2501e0");
#endif

    switch (ctx->pc) {
        case 0x250248u: goto label_250248;
        case 0x2502e8u: goto label_2502e8;
        case 0x2502f0u: goto label_2502f0;
        case 0x250374u: goto label_250374;
        case 0x2503f8u: goto label_2503f8;
        case 0x250414u: goto label_250414;
        case 0x25044cu: goto label_25044c;
        case 0x2504ecu: goto label_2504ec;
        default: break;
    }

    ctx->pc = 0x2501e0u;

    // 0x2501e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2501e4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2501e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2501e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2501e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2501ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2501ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2501f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2501f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2501f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2501f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2501fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2501fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250200: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x250200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x250204: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x250204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x250208: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x250208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25020c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x250210: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x250210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x250214: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x250214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x250218: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x250218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x25021c: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x25021cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x250220: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x250220u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x250224: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x250224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x250228: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250228u;
    {
        const bool branch_taken_0x250228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250228u;
        // 0x25022c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250228) {
            ctx->pc = 0x250250u;
            goto label_250250;
        }
    }
    ctx->pc = 0x250230u;
    // 0x250230: 0x8a420013  lwl         $v0, 0x13($s2)
    ctx->pc = 0x250230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x250234: 0x9a420010  lwr         $v0, 0x10($s2)
    ctx->pc = 0x250234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x250238: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x250238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x25023c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x25023cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x250240: 0xc09253c  jal         func_2494F0
    ctx->pc = 0x250240u;
    SET_GPR_U32(ctx, 31, 0x250248u);
    ctx->pc = 0x250244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250240u;
    // 0x250244: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2494F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2494F0u, 0x250240u, 0x250248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250248u;
label_250248:
    // 0x250248: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x250248u;
    {
        const bool branch_taken_0x250248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250248) {
            ctx->pc = 0x25024Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250248u;
            // 0x25024c: 0x92430008  lbu         $v1, 0x8($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250298u;
            goto label_250298;
        }
    }
    ctx->pc = 0x250250u;
label_250250:
    // 0x250250: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x250250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x250254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x250254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250258: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x25025c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250260: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x250260u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x250264: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x250264u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250268: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250268u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25026c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25026cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250270: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x250270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250274: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x250274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250278: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x250278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25027c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25027cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250280: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x250280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250284: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x250284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x250288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25028c: 0xfc620058  sd          $v0, 0x58($v1)
    ctx->pc = 0x25028cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
    // 0x250290: 0x808a9d6  j           func_22A758
    ctx->pc = 0x250290u;
    ctx->pc = 0x250294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250290u;
    // 0x250294: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x250298u;
label_250298:
    // 0x250298: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x250298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25029c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25029Cu;
    {
        const bool branch_taken_0x25029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25029Cu;
        // 0x2502a0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25029c) {
            ctx->pc = 0x2502F8u;
            goto label_2502f8;
        }
    }
    ctx->pc = 0x2502A4u;
    // 0x2502a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2502a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2502a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2502ac: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2502acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2502b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2502b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2502b4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2502b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2502b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2502b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2502bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2502c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2502c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2502c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2502c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2502c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2502ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2502d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2502d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2502d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2502d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2502d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2502d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2502dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2502dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2502e0: 0x80933c4  j           func_24CF10
    ctx->pc = 0x2502E0u;
    ctx->pc = 0x2502E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502E0u;
    // 0x2502e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    sub_0024CF10_0x24cf10(rdram, ctx, runtime); return;
    ctx->pc = 0x2502E8u;
label_2502e8:
    // 0x2502e8: 0xc090c4c  jal         func_243130
    ctx->pc = 0x2502E8u;
    SET_GPR_U32(ctx, 31, 0x2502F0u);
    ctx->pc = 0x2502ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502E8u;
    // 0x2502ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x2502E8u, 0x2502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2502F0u;
    {
        const bool branch_taken_0x2502f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502F0u;
        // 0x2502f4: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502f0) {
            ctx->pc = 0x250348u;
            goto label_250348;
        }
    }
    ctx->pc = 0x2502F8u;
label_2502f8:
    // 0x2502f8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2502f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2502fc: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x2502fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x250300: 0x247011c4  addiu       $s0, $v1, 0x11C4
    ctx->pc = 0x250300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4548));
    // 0x250304: 0x8e11fffc  lw          $s1, -0x4($s0)
    ctx->pc = 0x250304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x250308: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x250308u;
    {
        const bool branch_taken_0x250308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250308u;
        // 0x25030c: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250308) {
            ctx->pc = 0x25034Cu;
            goto label_25034c;
        }
    }
    ctx->pc = 0x250310u;
    // 0x250310: 0x8a430013  lwl         $v1, 0x13($s2)
    ctx->pc = 0x250310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x250314: 0x9a430010  lwr         $v1, 0x10($s2)
    ctx->pc = 0x250314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x250318: 0x8a020007  lwl         $v0, 0x7($s0)
    ctx->pc = 0x250318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25031c: 0x9a020004  lwr         $v0, 0x4($s0)
    ctx->pc = 0x25031cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x250320: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x250320u;
    {
        const bool branch_taken_0x250320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250320) {
            ctx->pc = 0x2503C4u;
            goto label_2503c4;
        }
    }
    ctx->pc = 0x250328u;
    // 0x250328: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x250328u;
    {
        const bool branch_taken_0x250328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250328u;
        // 0x25032c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250328) {
            ctx->pc = 0x250350u;
            goto label_250350;
        }
    }
    ctx->pc = 0x250330u;
    // 0x250330: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x250330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x250334: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x250334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x250338: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x250338u;
    {
        const bool branch_taken_0x250338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250338u;
        // 0x25033c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250338) {
            ctx->pc = 0x2502E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2502e8;
        }
    }
    ctx->pc = 0x250340u;
    // 0x250340: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x250340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x250344: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
label_250348:
    // 0x250348: 0xafc011c0  sw          $zero, 0x11C0($fp)
    ctx->pc = 0x250348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4544), GPR_U32(ctx, 0));
label_25034c:
    // 0x25034c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_250350:
    // 0x250350: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x250350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x250354: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x250354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x250358: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x250358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x25035c: 0x8a420013  lwl         $v0, 0x13($s2)
    ctx->pc = 0x25035cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x250360: 0x9a420010  lwr         $v0, 0x10($s2)
    ctx->pc = 0x250360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x250364: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x250364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x250368: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x250368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25036c: 0xc090bda  jal         func_242F68
    ctx->pc = 0x25036Cu;
    SET_GPR_U32(ctx, 31, 0x250374u);
    ctx->pc = 0x250370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25036Cu;
    // 0x250370: 0x27c411c0  addiu       $a0, $fp, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242F68u, 0x25036Cu, 0x250374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250374u;
label_250374:
    // 0x250374: 0x8fc411c0  lw          $a0, 0x11C0($fp)
    ctx->pc = 0x250374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4544)));
    // 0x250378: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x250378u;
    {
        const bool branch_taken_0x250378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250378u;
        // 0x25037c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250378) {
            ctx->pc = 0x2503C4u;
            goto label_2503c4;
        }
    }
    ctx->pc = 0x250380u;
    // 0x250380: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x250380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250384: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x250384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250388: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x250388u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25038c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250390: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x250390u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x250394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250398: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x250398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25039c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2503a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2503a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2503a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503a8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2503a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2503ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2503acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2503b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2503b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2503b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2503b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2503b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2503b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2503bc: 0x80933c4  j           func_24CF10
    ctx->pc = 0x2503BCu;
    ctx->pc = 0x2503C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503BCu;
    // 0x2503c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    sub_0024CF10_0x24cf10(rdram, ctx, runtime); return;
    ctx->pc = 0x2503C4u;
label_2503c4:
    // 0x2503c4: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x2503c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2503c8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2503c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2503cc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2503ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2503d0: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x2503d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2503d4: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x2503d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x2503d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2503d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2503dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2503e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2503e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503e4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2503e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2503e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2503e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2503ec: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2503ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2503f0: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x2503F0u;
    SET_GPR_U32(ctx, 31, 0x2503F8u);
    ctx->pc = 0x2503F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503F0u;
    // 0x2503f4: 0x102300b  movn        $a2, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x2503F0u, 0x2503F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503F8u;
label_2503f8:
    // 0x2503f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2503f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503fc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2503FCu;
    {
        const bool branch_taken_0x2503fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x250400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503FCu;
        // 0x250400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503fc) {
            ctx->pc = 0x250418u;
            goto label_250418;
        }
    }
    ctx->pc = 0x250404u;
    // 0x250404: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x250404u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x250408: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x250408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25040c: 0xc08acea  jal         func_22B3A8
    ctx->pc = 0x25040Cu;
    SET_GPR_U32(ctx, 31, 0x250414u);
    ctx->pc = 0x250410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25040Cu;
    // 0x250410: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x25040Cu, 0x250414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250414u;
label_250414:
    // 0x250414: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x250414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250418:
    // 0x250418: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x250418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x25041c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x250420: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x250420u;
    {
        const bool branch_taken_0x250420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x250424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250420u;
        // 0x250424: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250420) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x250428u;
    // 0x250428: 0x8e350034  lw          $s5, 0x34($s1)
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25042c: 0x32a20030  andi        $v0, $s5, 0x30
    ctx->pc = 0x25042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)48);
    // 0x250430: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x250430u;
    {
        const bool branch_taken_0x250430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250430u;
        // 0x250434: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250430) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x250438u;
    // 0x250438: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x250438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25043c: 0x88500007  lwl         $s0, 0x7($v0)
    ctx->pc = 0x25043cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x250440: 0x98500004  lwr         $s0, 0x4($v0)
    ctx->pc = 0x250440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x250444: 0xc08a254  jal         func_228950
    ctx->pc = 0x250444u;
    SET_GPR_U32(ctx, 31, 0x25044Cu);
    ctx->pc = 0x250448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250444u;
    // 0x250448: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250444u, 0x25044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25044Cu;
label_25044c:
    // 0x25044c: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25044Cu;
    {
        const bool branch_taken_0x25044c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x250450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25044Cu;
        // 0x250450: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25044c) {
            ctx->pc = 0x2504C4u;
            goto label_2504c4;
        }
    }
    ctx->pc = 0x250454u;
    // 0x250454: 0x8c43100c  lw          $v1, 0x100C($v0)
    ctx->pc = 0x250454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4108)));
    // 0x250458: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x250458u;
    {
        const bool branch_taken_0x250458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250458u;
        // 0x25045c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250458) {
            ctx->pc = 0x2504C4u;
            goto label_2504c4;
        }
    }
    ctx->pc = 0x250460u;
    // 0x250460: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x250460u;
    {
        const bool branch_taken_0x250460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250460u;
        // 0x250464: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250460) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x250468u;
    // 0x250468: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x250468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25046c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25046Cu;
    {
        const bool branch_taken_0x25046c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25046Cu;
        // 0x250470: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25046c) {
            ctx->pc = 0x2504CCu;
            goto label_2504cc;
        }
    }
    ctx->pc = 0x250474u;
    // 0x250474: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x250474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x250478: 0x8a42000f  lwl         $v0, 0xF($s2)
    ctx->pc = 0x250478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25047c: 0x9a42000c  lwr         $v0, 0xC($s2)
    ctx->pc = 0x25047cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x250480: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x250484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x250484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250488: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x250488u;
    {
        const bool branch_taken_0x250488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250488u;
        // 0x25048c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250488) {
            ctx->pc = 0x2504CCu;
            goto label_2504cc;
        }
    }
    ctx->pc = 0x250490u;
    // 0x250490: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x250490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x250494: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250494u;
    {
        const bool branch_taken_0x250494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250494) {
            ctx->pc = 0x2504B0u;
            goto label_2504b0;
        }
    }
    ctx->pc = 0x25049Cu;
    // 0x25049c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x25049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2504a0: 0x88430007  lwl         $v1, 0x7($v0)
    ctx->pc = 0x2504a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2504a4: 0x98430004  lwr         $v1, 0x4($v0)
    ctx->pc = 0x2504a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2504a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2504A8u;
    {
        const bool branch_taken_0x2504a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A8u;
        // 0x2504ac: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504a8) {
            ctx->pc = 0x2504BCu;
            goto label_2504bc;
        }
    }
    ctx->pc = 0x2504B0u;
label_2504b0:
    // 0x2504b0: 0x8a450013  lwl         $a1, 0x13($s2)
    ctx->pc = 0x2504b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2504b4: 0x9a450010  lwr         $a1, 0x10($s2)
    ctx->pc = 0x2504b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2504b8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2504b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2504bc:
    // 0x2504bc: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2504bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2504c0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2504c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504c4:
    // 0x2504c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2504c8:
    // 0x2504c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2504c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504cc:
    // 0x2504cc: 0x8c431018  lw          $v1, 0x1018($v0)
    ctx->pc = 0x2504ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4120)));
    // 0x2504d0: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x2504d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2504d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2504d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2504d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504dc: 0xc3380a  movz        $a3, $a2, $v1
    ctx->pc = 0x2504dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x2504e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2504e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504e4: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x2504E4u;
    SET_GPR_U32(ctx, 31, 0x2504ECu);
    ctx->pc = 0x2504E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2504E4u;
    // 0x2504e8: 0x27c611c0  addiu       $a2, $fp, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B50u, 0x2504E4u, 0x2504ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504ECu;
label_2504ec:
    // 0x2504ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2504ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504f0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2504F0u;
    {
        const bool branch_taken_0x2504f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504F0u;
        // 0x2504f4: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504f0) {
            ctx->pc = 0x25050Cu;
            goto label_25050c;
        }
    }
    ctx->pc = 0x2504F8u;
    // 0x2504f8: 0x24a310a8  addiu       $v1, $a1, 0x10A8
    ctx->pc = 0x2504f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    // 0x2504fc: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x2504fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x250500: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250500u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x250504: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x250504u;
    {
        const bool branch_taken_0x250504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250504u;
        // 0x250508: 0xfc620058  sd          $v0, 0x58($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250504) {
            ctx->pc = 0x250568u;
            goto label_250568;
        }
    }
    ctx->pc = 0x25050Cu;
label_25050c:
    // 0x25050c: 0x24a310a8  addiu       $v1, $a1, 0x10A8
    ctx->pc = 0x25050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    // 0x250510: 0xdc620048  ld          $v0, 0x48($v1)
    ctx->pc = 0x250510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x250514: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250514u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x250518: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x250518u;
    {
        const bool branch_taken_0x250518 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250518u;
        // 0x25051c: 0xfc620048  sd          $v0, 0x48($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250518) {
            ctx->pc = 0x250530u;
            goto label_250530;
        }
    }
    ctx->pc = 0x250520u;
    // 0x250520: 0xdc620060  ld          $v0, 0x60($v1)
    ctx->pc = 0x250520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x250524: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250524u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x250528: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x250528u;
    {
        const bool branch_taken_0x250528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250528u;
        // 0x25052c: 0xfc620060  sd          $v0, 0x60($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250528) {
            ctx->pc = 0x250568u;
            goto label_250568;
        }
    }
    ctx->pc = 0x250530u;
label_250530:
    // 0x250530: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x250530u;
    {
        const bool branch_taken_0x250530 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x250534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250530u;
        // 0x250534: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250530) {
            ctx->pc = 0x250634u;
            goto label_250634;
        }
    }
    ctx->pc = 0x250538u;
    // 0x250538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x250538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25053c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x25053cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250540: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x250540u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250544: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x250544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250548: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x250548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25054c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25054cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250550: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x250550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250554: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x250554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250558: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x250558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25055c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25055cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250560: 0x808a9d6  j           func_22A758
    ctx->pc = 0x250560u;
    ctx->pc = 0x250564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250560u;
    // 0x250564: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x250568u;
label_250568:
    // 0x250568: 0x12600031  beqz        $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x250568u;
    {
        const bool branch_taken_0x250568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250568u;
        // 0x25056c: 0x28820074  slti        $v0, $a0, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250568) {
            ctx->pc = 0x250630u;
            goto label_250630;
        }
    }
    ctx->pc = 0x250570u;
    // 0x250570: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x250570u;
    {
        const bool branch_taken_0x250570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250570u;
        // 0x250574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250570) {
            ctx->pc = 0x25059Cu;
            goto label_25059c;
        }
    }
    ctx->pc = 0x250578u;
    // 0x250578: 0x28820072  slti        $v0, $a0, 0x72
    ctx->pc = 0x250578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)114) ? 1 : 0);
    // 0x25057c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x25057Cu;
    {
        const bool branch_taken_0x25057c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25057c) {
            ctx->pc = 0x250580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25057Cu;
            // 0x250580: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2505C0u;
            goto label_2505c0;
        }
    }
    ctx->pc = 0x250584u;
    // 0x250584: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x250584u;
    {
        const bool branch_taken_0x250584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250584u;
        // 0x250588: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250584) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x25058Cu;
    // 0x25058c: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25058Cu;
    {
        const bool branch_taken_0x25058c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x250590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25058Cu;
        // 0x250590: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25058c) {
            ctx->pc = 0x2505E8u;
            goto label_2505e8;
        }
    }
    ctx->pc = 0x250594u;
    // 0x250594: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x250594u;
    {
        const bool branch_taken_0x250594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250594u;
        // 0x250598: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250594) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x25059Cu;
label_25059c:
    // 0x25059c: 0x28820075  slti        $v0, $a0, 0x75
    ctx->pc = 0x25059cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)117) ? 1 : 0);
    // 0x2505a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2505A0u;
    {
        const bool branch_taken_0x2505a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2505A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A0u;
        // 0x2505a4: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505a0) {
            ctx->pc = 0x2505C0u;
            goto label_2505c0;
        }
    }
    ctx->pc = 0x2505A8u;
    // 0x2505a8: 0x28820077  slti        $v0, $a0, 0x77
    ctx->pc = 0x2505a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)119) ? 1 : 0);
    // 0x2505ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2505ACu;
    {
        const bool branch_taken_0x2505ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2505B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505ACu;
        // 0x2505b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505ac) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x2505B4u;
    // 0x2505b4: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2505b8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2505B8u;
    {
        const bool branch_taken_0x2505b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2505BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505B8u;
        // 0x2505bc: 0x8fc411c0  lw          $a0, 0x11C0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505b8) {
            ctx->pc = 0x2505C8u;
            goto label_2505c8;
        }
    }
    ctx->pc = 0x2505C0u;
label_2505c0:
    // 0x2505c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2505C0u;
    {
        const bool branch_taken_0x2505c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C0u;
        // 0x2505c4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505c0) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x2505C8u;
label_2505c8:
    // 0x2505c8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2505C8u;
    {
        const bool branch_taken_0x2505c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C8u;
        // 0x2505cc: 0x24170004  addiu       $s7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505c8) {
            ctx->pc = 0x2505D4u;
            goto label_2505d4;
        }
    }
    ctx->pc = 0x2505D0u;
    // 0x2505d0: 0x8c880048  lw          $t0, 0x48($a0)
    ctx->pc = 0x2505d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2505d4:
    // 0x2505d4: 0x24a310a8  addiu       $v1, $a1, 0x10A8
    ctx->pc = 0x2505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    // 0x2505d8: 0xdc6200a0  ld          $v0, 0xA0($v1)
    ctx->pc = 0x2505d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2505dc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2505dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2505e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2505E0u;
    {
        const bool branch_taken_0x2505e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505E0u;
        // 0x2505e4: 0xfc6200a0  sd          $v0, 0xA0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505e0) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x2505E8u;
label_2505e8:
    // 0x2505e8: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x2505e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2505ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2505ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2505f0:
    // 0x2505f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2505f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2505f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505f8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2505f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505fc: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2505fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x250600: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x250600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250604: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x250604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250608: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x250608u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25060c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25060cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250610: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x250610u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250614: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x250614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250618: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x250618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25061c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25061cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250620: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x250620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250624: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x250624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250628: 0x80933c4  j           func_24CF10
    ctx->pc = 0x250628u;
    ctx->pc = 0x25062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250628u;
    // 0x25062c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    sub_0024CF10_0x24cf10(rdram, ctx, runtime); return;
    ctx->pc = 0x250630u;
label_250630:
    // 0x250630: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x250630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_250634:
    // 0x250634: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x250634u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250638: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x250638u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25063c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25063cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250640: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x250640u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250644: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x250644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250648: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x250648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25064c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25064cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250650: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x250650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x250654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250658: 0x3e00008  jr          $ra
    ctx->pc = 0x250658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250658u;
        // 0x25065c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250660u;
}

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

// Function: sub_00171160
// Address: 0x171160 - 0x171790
void sub_00171160_0x171160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171160_0x171160");
#endif

    switch (ctx->pc) {
        case 0x171170u: goto label_171170;
        case 0x17117cu: goto label_17117c;
        case 0x171184u: goto label_171184;
        case 0x171190u: goto label_171190;
        case 0x17119cu: goto label_17119c;
        case 0x171230u: goto label_171230;
        case 0x171248u: goto label_171248;
        case 0x171254u: goto label_171254;
        case 0x171264u: goto label_171264;
        case 0x17128cu: goto label_17128c;
        case 0x171294u: goto label_171294;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712d4u: goto label_1712d4;
        case 0x1712dcu: goto label_1712dc;
        case 0x1712e4u: goto label_1712e4;
        case 0x1712fcu: goto label_1712fc;
        case 0x171310u: goto label_171310;
        case 0x17133cu: goto label_17133c;
        case 0x171350u: goto label_171350;
        case 0x171368u: goto label_171368;
        case 0x1713a8u: goto label_1713a8;
        case 0x171478u: goto label_171478;
        case 0x171480u: goto label_171480;
        case 0x1714a4u: goto label_1714a4;
        case 0x1714d4u: goto label_1714d4;
        case 0x1714e4u: goto label_1714e4;
        case 0x1714f8u: goto label_1714f8;
        case 0x17151cu: goto label_17151c;
        case 0x171548u: goto label_171548;
        case 0x171568u: goto label_171568;
        case 0x171588u: goto label_171588;
        case 0x1715a8u: goto label_1715a8;
        case 0x171704u: goto label_171704;
        case 0x17170cu: goto label_17170c;
        case 0x17171cu: goto label_17171c;
        case 0x171738u: goto label_171738;
        case 0x171750u: goto label_171750;
        default: break;
    }

    ctx->pc = 0x171160u;

    // 0x171160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171168: 0xc055684  jal         func_155A10
    ctx->pc = 0x171168u;
    SET_GPR_U32(ctx, 31, 0x171170u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x171168u, 0x171170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171170u;
label_171170:
    // 0x171170: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x171170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x171174: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x171174u;
    SET_GPR_U32(ctx, 31, 0x17117Cu);
    ctx->pc = 0x171178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171174u;
    // 0x171178: 0x24843420  addiu       $a0, $a0, 0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x171174u, 0x17117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17117Cu;
label_17117c:
    // 0x17117c: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x17117Cu;
    SET_GPR_U32(ctx, 31, 0x171184u);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x17117Cu, 0x171184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171184u;
label_171184:
    // 0x171184: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x171188: 0xc063d08  jal         func_18F420
    ctx->pc = 0x171188u;
    SET_GPR_U32(ctx, 31, 0x171190u);
    ctx->pc = 0x17118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171188u;
    // 0x17118c: 0x24844870  addiu       $a0, $a0, 0x4870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x171188u, 0x171190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171190u;
label_171190:
    // 0x171190: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x171190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x171194: 0xc063d08  jal         func_18F420
    ctx->pc = 0x171194u;
    SET_GPR_U32(ctx, 31, 0x17119Cu);
    ctx->pc = 0x171198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171194u;
    // 0x171198: 0x24844874  addiu       $a0, $a0, 0x4874 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x171194u, 0x17119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17119Cu;
label_17119c:
    // 0x17119c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17119cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1711a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1711A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711A0u;
        // 0x1711a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1711A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1711A8u;
    // 0x1711a8: 0x0  nop
    ctx->pc = 0x1711a8u;
    // NOP
    // 0x1711ac: 0x0  nop
    ctx->pc = 0x1711acu;
    // NOP
    // 0x1711b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1711b4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1711b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1711b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1711b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1711bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1711bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1711c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1711c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1711c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1711c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1711c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1711cc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1711d0: 0x8c654828  lw          $a1, 0x4828($v1)
    ctx->pc = 0x1711d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18472)));
    // 0x1711d4: 0x10a40045  beq         $a1, $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1711D4u;
    {
        const bool branch_taken_0x1711d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1711d4) {
            ctx->pc = 0x1712ECu;
            goto label_1712ec;
        }
    }
    ctx->pc = 0x1711DCu;
    // 0x1711dc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1711dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1711e0: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1711E0u;
    {
        const bool branch_taken_0x1711e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1711e0) {
            ctx->pc = 0x1712B4u;
            goto label_1712b4;
        }
    }
    ctx->pc = 0x1711E8u;
    // 0x1711e8: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1711e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1711ec: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1711ECu;
    {
        const bool branch_taken_0x1711ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1711ec) {
            ctx->pc = 0x171280u;
            goto label_171280;
        }
    }
    ctx->pc = 0x1711F4u;
    // 0x1711f4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1711f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1711f8: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1711F8u;
    {
        const bool branch_taken_0x1711f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1711f8) {
            ctx->pc = 0x171264u;
            goto label_171264;
        }
    }
    ctx->pc = 0x171200u;
    // 0x171200: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x171200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171204: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x171204u;
    {
        const bool branch_taken_0x171204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x171204) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x17120Cu;
    // 0x17120c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17120Cu;
    {
        const bool branch_taken_0x17120c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17120c) {
            ctx->pc = 0x17121Cu;
            goto label_17121c;
        }
    }
    ctx->pc = 0x171214u;
    // 0x171214: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x171214u;
    {
        const bool branch_taken_0x171214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171214u;
        // 0x171218: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171214) {
            ctx->pc = 0x17136Cu;
            goto label_17136c;
        }
    }
    ctx->pc = 0x17121Cu;
label_17121c:
    // 0x17121c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171220: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171224: 0xac604838  sw          $zero, 0x4838($v1)
    ctx->pc = 0x171224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18488), GPR_U32(ctx, 0));
    // 0x171228: 0xc0c880c  jal         func_322030
    ctx->pc = 0x171228u;
    SET_GPR_U32(ctx, 31, 0x171230u);
    ctx->pc = 0x17122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171228u;
    // 0x17122c: 0xac40483c  sw          $zero, 0x483C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x171228u, 0x171230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171230u;
label_171230:
    // 0x171230: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171234: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171238: 0xac434828  sw          $v1, 0x4828($v0)
    ctx->pc = 0x171238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 3));
label_17123c:
    // 0x17123c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x171240: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x171240u;
    SET_GPR_U32(ctx, 31, 0x171248u);
    ctx->pc = 0x171244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171240u;
    // 0x171244: 0x8c4435b0  lw          $a0, 0x35B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x171240u, 0x171248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171248u;
label_171248:
    // 0x171248: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x171248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x17124c: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x17124Cu;
    SET_GPR_U32(ctx, 31, 0x171254u);
    ctx->pc = 0x171250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17124Cu;
    // 0x171250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x17124Cu, 0x171254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171254u;
label_171254:
    // 0x171254: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171258: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17125c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x17125Cu;
    SET_GPR_U32(ctx, 31, 0x171264u);
    ctx->pc = 0x171260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17125Cu;
    // 0x171260: 0xac624838  sw          $v0, 0x4838($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 18488), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x17125Cu, 0x171264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171264u;
label_171264:
    // 0x171264: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171268: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17126c: 0x8c454838  lw          $a1, 0x4838($v0)
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18488)));
    // 0x171270: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x171274: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171278: 0xac654848  sw          $a1, 0x4848($v1)
    ctx->pc = 0x171278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 5));
    // 0x17127c: 0xac444828  sw          $a0, 0x4828($v0)
    ctx->pc = 0x17127cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 4));
label_171280:
    // 0x171280: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x171284: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x171284u;
    SET_GPR_U32(ctx, 31, 0x17128Cu);
    ctx->pc = 0x171288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171284u;
    // 0x171288: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x171284u, 0x17128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17128Cu;
label_17128c:
    // 0x17128c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x17128Cu;
    SET_GPR_U32(ctx, 31, 0x171294u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x17128Cu, 0x171294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171294u;
label_171294:
    // 0x171294: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x171298: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17129c: 0xac644828  sw          $a0, 0x4828($v1)
    ctx->pc = 0x17129cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
    // 0x1712a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1712a4: 0xac60bb70  sw          $zero, -0x4490($v1)
    ctx->pc = 0x1712a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949744), GPR_U32(ctx, 0));
    // 0x1712a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1712a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1712ac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1712ACu;
    {
        const bool branch_taken_0x1712ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ACu;
        // 0x1712b0: 0xac60bb74  sw          $zero, -0x448C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ac) {
            ctx->pc = 0x171368u;
            goto label_171368;
        }
    }
    ctx->pc = 0x1712B4u;
label_1712b4:
    // 0x1712b4: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x1712B4u;
    SET_GPR_U32(ctx, 31, 0x1712BCu);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x1712B4u, 0x1712BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712BCu;
label_1712bc:
    // 0x1712bc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1712BCu;
    {
        const bool branch_taken_0x1712bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712bc) {
            ctx->pc = 0x171368u;
            goto label_171368;
        }
    }
    ctx->pc = 0x1712C4u;
    // 0x1712c4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1712c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1712c8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1712cc: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x1712CCu;
    SET_GPR_U32(ctx, 31, 0x1712D4u);
    ctx->pc = 0x1712D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712CCu;
    // 0x1712d0: 0xac434828  sw          $v1, 0x4828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x1712CCu, 0x1712D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712D4u;
label_1712d4:
    // 0x1712d4: 0xc063d18  jal         func_18F460
    ctx->pc = 0x1712D4u;
    SET_GPR_U32(ctx, 31, 0x1712DCu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x1712D4u, 0x1712DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712DCu;
label_1712dc:
    // 0x1712dc: 0xc0c880c  jal         func_322030
    ctx->pc = 0x1712DCu;
    SET_GPR_U32(ctx, 31, 0x1712E4u);
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x1712DCu, 0x1712E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712E4u;
label_1712e4:
    // 0x1712e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1712E4u;
    {
        const bool branch_taken_0x1712e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712e4) {
            ctx->pc = 0x171368u;
            goto label_171368;
        }
    }
    ctx->pc = 0x1712ECu;
label_1712ec:
    // 0x1712ec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1712ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1712f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1712f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1712f4: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x1712F4u;
    SET_GPR_U32(ctx, 31, 0x1712FCu);
    ctx->pc = 0x1712F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712F4u;
    // 0x1712f8: 0x248435b8  addiu       $a0, $a0, 0x35B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4B0u, 0x1712F4u, 0x1712FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712FCu;
label_1712fc:
    // 0x1712fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1712FCu;
    {
        const bool branch_taken_0x1712fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712fc) {
            ctx->pc = 0x171368u;
            goto label_171368;
        }
    }
    ctx->pc = 0x171304u;
    // 0x171304: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x171304u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x171308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17130c: 0x2610bb70  addiu       $s0, $s0, -0x4490
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949744));
label_171310:
    // 0x171310: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171314: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x171314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x171318: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x17131c: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x171320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171324: 0x24c635c0  addiu       $a2, $a2, 0x35C0
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13760));
    // 0x171328: 0x24e73428  addiu       $a3, $a3, 0x3428
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13352));
    // 0x17132c: 0x25083430  addiu       $t0, $t0, 0x3430
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13360));
    // 0x171330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171334: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x171334u;
    SET_GPR_U32(ctx, 31, 0x17133Cu);
    ctx->pc = 0x171338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171334u;
    // 0x171338: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x171334u, 0x17133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17133Cu;
label_17133c:
    // 0x17133c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x171340: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x171340u;
    {
        const bool branch_taken_0x171340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x171344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171340u;
        // 0x171344: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171340) {
            ctx->pc = 0x171310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171310;
        }
    }
    ctx->pc = 0x171348u;
    // 0x171348: 0xc063d18  jal         func_18F460
    ctx->pc = 0x171348u;
    SET_GPR_U32(ctx, 31, 0x171350u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x171348u, 0x171350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171350u;
label_171350:
    // 0x171350: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171354: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x171358: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17135c: 0xac404828  sw          $zero, 0x4828($v0)
    ctx->pc = 0x17135cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 0));
    // 0x171360: 0xc055768  jal         func_155DA0
    ctx->pc = 0x171360u;
    SET_GPR_U32(ctx, 31, 0x171368u);
    ctx->pc = 0x171364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171360u;
    // 0x171364: 0x24841380  addiu       $a0, $a0, 0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x171360u, 0x171368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171368u;
label_171368:
    // 0x171368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x171368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17136c:
    // 0x17136c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17136cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171378: 0x3e00008  jr          $ra
    ctx->pc = 0x171378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171378u;
        // 0x17137c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171380u;
    // 0x171380: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x171380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x171384: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x171384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x171388: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x171388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17138c: 0x24e735d0  addiu       $a3, $a3, 0x35D0
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13776));
    // 0x171390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171394: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x171394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x171398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17139c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17139cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1713a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1713a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1713a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1713a8:
    // 0x1713a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1713a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1713ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1713acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1713b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1713b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1713b4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1713b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1713b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1713bc: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1713BCu;
    {
        const bool branch_taken_0x1713bc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1713bc) {
            ctx->pc = 0x1713A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1713a8;
        }
    }
    ctx->pc = 0x1713C4u;
    // 0x1713c4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1713c8: 0x9063f35f  lbu         $v1, -0xCA1($v1)
    ctx->pc = 0x1713c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x1713cc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1713ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1713d0: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1713D0u;
    {
        const bool branch_taken_0x1713d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1713D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D0u;
        // 0x1713d4: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d0) {
            ctx->pc = 0x171404u;
            goto label_171404;
        }
    }
    ctx->pc = 0x1713D8u;
    // 0x1713d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1713d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1713dc: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1713DCu;
    {
        const bool branch_taken_0x1713dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1713dc) {
            ctx->pc = 0x171404u;
            goto label_171404;
        }
    }
    ctx->pc = 0x1713E4u;
    // 0x1713e4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1713E4u;
    {
        const bool branch_taken_0x1713e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1713e4) {
            ctx->pc = 0x1713E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1713E4u;
            // 0x1713e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171404u;
            goto label_171404;
        }
    }
    ctx->pc = 0x1713ECu;
    // 0x1713ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1713ECu;
    {
        const bool branch_taken_0x1713ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713ECu;
        // 0x1713f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713ec) {
            ctx->pc = 0x171404u;
            goto label_171404;
        }
    }
    ctx->pc = 0x1713F4u;
    // 0x1713f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1713f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1713F8u;
    {
        const bool branch_taken_0x1713f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1713f8) {
            ctx->pc = 0x171404u;
            goto label_171404;
        }
    }
    ctx->pc = 0x171400u;
    // 0x171400: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171404:
    // 0x171404: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171408: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x171408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17140c: 0x8c654828  lw          $a1, 0x4828($v1)
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18472)));
    // 0x171410: 0x50a400d4  beql        $a1, $a0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x171410u;
    {
        const bool branch_taken_0x171410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x171410) {
            ctx->pc = 0x171414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171410u;
            // 0x171414: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171764u;
            goto label_171764;
        }
    }
    ctx->pc = 0x171418u;
    // 0x171418: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17141c: 0x50a300c4  beql        $a1, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x17141Cu;
    {
        const bool branch_taken_0x17141c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17141c) {
            ctx->pc = 0x171420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17141Cu;
            // 0x171420: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x171424u;
    // 0x171424: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x171424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x171428: 0x50a300b4  beql        $a1, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x171428u;
    {
        const bool branch_taken_0x171428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x171428) {
            ctx->pc = 0x17142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171428u;
            // 0x17142c: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1716FCu;
            goto label_1716fc;
        }
    }
    ctx->pc = 0x171430u;
    // 0x171430: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x171430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x171434: 0x10a3003c  beq         $a1, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x171434u;
    {
        const bool branch_taken_0x171434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x171434) {
            ctx->pc = 0x171528u;
            goto label_171528;
        }
    }
    ctx->pc = 0x17143Cu;
    // 0x17143c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171440: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x171440u;
    {
        const bool branch_taken_0x171440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x171440) {
            ctx->pc = 0x1714F0u;
            goto label_1714f0;
        }
    }
    ctx->pc = 0x171448u;
    // 0x171448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17144c: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x17144Cu;
    {
        const bool branch_taken_0x17144c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17144c) {
            ctx->pc = 0x171450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17144Cu;
            // 0x171450: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1714CCu;
            goto label_1714cc;
        }
    }
    ctx->pc = 0x171454u;
    // 0x171454: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x171454u;
    {
        const bool branch_taken_0x171454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171454) {
            ctx->pc = 0x171458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171454u;
            // 0x171458: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171468u;
            goto label_171468;
        }
    }
    ctx->pc = 0x17145Cu;
    // 0x17145c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x17145Cu;
    {
        const bool branch_taken_0x17145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17145Cu;
        // 0x171460: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17145c) {
            ctx->pc = 0x171770u;
            goto label_171770;
        }
    }
    ctx->pc = 0x171464u;
    // 0x171464: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x171464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_171468:
    // 0x171468: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17146c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171470: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x171470u;
    SET_GPR_U32(ctx, 31, 0x171478u);
    ctx->pc = 0x171474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171470u;
    // 0x171474: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x171470u, 0x171478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171478u;
label_171478:
    // 0x171478: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x171478u;
    SET_GPR_U32(ctx, 31, 0x171480u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x171478u, 0x171480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171480u;
label_171480:
    // 0x171480: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x171484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171488: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17148c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171494: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x171494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x171498: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17149c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x17149Cu;
    SET_GPR_U32(ctx, 31, 0x1714A4u);
    ctx->pc = 0x1714A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17149Cu;
    // 0x1714a0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x17149Cu, 0x1714A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714A4u;
label_1714a4:
    // 0x1714a4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1714a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1714a8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1714ac: 0xac434858  sw          $v1, 0x4858($v0)
    ctx->pc = 0x1714acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18520), GPR_U32(ctx, 3));
    // 0x1714b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1714b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1714b4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1714b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1714b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1714bc: 0xac444860  sw          $a0, 0x4860($v0)
    ctx->pc = 0x1714bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18528), GPR_U32(ctx, 4));
    // 0x1714c0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1714c4: 0xac434828  sw          $v1, 0x4828($v0)
    ctx->pc = 0x1714c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 3));
    // 0x1714c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1714c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1714cc:
    // 0x1714cc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1714CCu;
    SET_GPR_U32(ctx, 31, 0x1714D4u);
    ctx->pc = 0x1714D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714CCu;
    // 0x1714d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x1714CCu, 0x1714D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714D4u;
label_1714d4:
    // 0x1714d4: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1714D4u;
    {
        const bool branch_taken_0x1714d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1714d4) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x1714DCu;
    // 0x1714dc: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x1714DCu;
    SET_GPR_U32(ctx, 31, 0x1714E4u);
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x1714DCu, 0x1714E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714E4u;
label_1714e4:
    // 0x1714e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1714e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1714e8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1714ec: 0xac434828  sw          $v1, 0x4828($v0)
    ctx->pc = 0x1714ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 3));
label_1714f0:
    // 0x1714f0: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x1714F0u;
    SET_GPR_U32(ctx, 31, 0x1714F8u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x1714F0u, 0x1714F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714F8u;
label_1714f8:
    // 0x1714f8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1714f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1714fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171500: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17150c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x171510: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x171514: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x171514u;
    SET_GPR_U32(ctx, 31, 0x17151Cu);
    ctx->pc = 0x171518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171514u;
    // 0x171518: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x171514u, 0x17151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17151Cu;
label_17151c:
    // 0x17151c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x171520: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171524: 0xac644828  sw          $a0, 0x4828($v1)
    ctx->pc = 0x171524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
label_171528:
    // 0x171528: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x171528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17152c: 0x9064db10  lbu         $a0, -0x24F0($v1)
    ctx->pc = 0x17152cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x171530: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x171530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x171534: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171534u;
    {
        const bool branch_taken_0x171534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171534) {
            ctx->pc = 0x171538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171534u;
            // 0x171538: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171554u;
            goto label_171554;
        }
    }
    ctx->pc = 0x17153Cu;
    // 0x17153c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171540: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x171540u;
    SET_GPR_U32(ctx, 31, 0x171548u);
    ctx->pc = 0x171544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171540u;
    // 0x171544: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x171540u, 0x171548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171548u;
label_171548:
    // 0x171548: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x171548u;
    {
        const bool branch_taken_0x171548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171548u;
        // 0x17154c: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171548) {
            ctx->pc = 0x1715ACu;
            goto label_1715ac;
        }
    }
    ctx->pc = 0x171550u;
    // 0x171550: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x171550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_171554:
    // 0x171554: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171554u;
    {
        const bool branch_taken_0x171554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171554) {
            ctx->pc = 0x171558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171554u;
            // 0x171558: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171574u;
            goto label_171574;
        }
    }
    ctx->pc = 0x17155Cu;
    // 0x17155c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171560: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x171560u;
    SET_GPR_U32(ctx, 31, 0x171568u);
    ctx->pc = 0x171564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171560u;
    // 0x171564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x171560u, 0x171568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171568u;
label_171568:
    // 0x171568: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171568u;
    {
        const bool branch_taken_0x171568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171568u;
        // 0x17156c: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171568) {
            ctx->pc = 0x1715ACu;
            goto label_1715ac;
        }
    }
    ctx->pc = 0x171570u;
    // 0x171570: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x171570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_171574:
    // 0x171574: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171574u;
    {
        const bool branch_taken_0x171574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171574) {
            ctx->pc = 0x171578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171574u;
            // 0x171578: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171594u;
            goto label_171594;
        }
    }
    ctx->pc = 0x17157Cu;
    // 0x17157c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171580: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x171580u;
    SET_GPR_U32(ctx, 31, 0x171588u);
    ctx->pc = 0x171584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171580u;
    // 0x171584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x171580u, 0x171588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171588u;
label_171588:
    // 0x171588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171588u;
    {
        const bool branch_taken_0x171588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171588u;
        // 0x17158c: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171588) {
            ctx->pc = 0x1715ACu;
            goto label_1715ac;
        }
    }
    ctx->pc = 0x171590u;
    // 0x171590: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x171590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_171594:
    // 0x171594: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171594u;
    {
        const bool branch_taken_0x171594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171594) {
            ctx->pc = 0x1715ACu;
            goto label_1715ac;
        }
    }
    ctx->pc = 0x17159Cu;
    // 0x17159c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1715a0: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x1715A0u;
    SET_GPR_U32(ctx, 31, 0x1715A8u);
    ctx->pc = 0x1715A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715A0u;
    // 0x1715a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x1715A0u, 0x1715A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715A8u;
label_1715a8:
    // 0x1715a8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1715a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1715ac:
    // 0x1715ac: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1715acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1715b0: 0x8c654858  lw          $a1, 0x4858($v1)
    ctx->pc = 0x1715b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18520)));
    // 0x1715b4: 0x4a30008  bgezl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1715B4u;
    {
        const bool branch_taken_0x1715b4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1715b4) {
            ctx->pc = 0x1715B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1715B4u;
            // 0x1715b8: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1715D8u;
            goto label_1715d8;
        }
    }
    ctx->pc = 0x1715BCu;
    // 0x1715bc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1715bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1715c0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1715c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1715c4: 0x8c644860  lw          $a0, 0x4860($v1)
    ctx->pc = 0x1715c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18528)));
    // 0x1715c8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1715c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1715cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1715ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1715d0: 0xac644860  sw          $a0, 0x4860($v1)
    ctx->pc = 0x1715d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18528), GPR_U32(ctx, 4));
    // 0x1715d4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1715d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_1715d8:
    // 0x1715d8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x1715d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x1715dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1715dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1715e0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1715e4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1715e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1715e8: 0x8c634860  lw          $v1, 0x4860($v1)
    ctx->pc = 0x1715e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18528)));
    // 0x1715ec: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1715ECu;
    {
        const bool branch_taken_0x1715ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1715F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715ECu;
        // 0x1715f0: 0xac854858  sw          $a1, 0x4858($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 18520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715ec) {
            ctx->pc = 0x171604u;
            goto label_171604;
        }
    }
    ctx->pc = 0x1715F4u;
    // 0x1715f4: 0x36440800  ori         $a0, $s2, 0x800
    ctx->pc = 0x1715f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2048);
    // 0x1715f8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1715fc: 0xac604860  sw          $zero, 0x4860($v1)
    ctx->pc = 0x1715fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18528), GPR_U32(ctx, 0));
    // 0x171600: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x171600u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_171604:
    // 0x171604: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x171604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x171608: 0x30830700  andi        $v1, $a0, 0x700
    ctx->pc = 0x171608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1792);
    // 0x17160c: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x17160Cu;
    {
        const bool branch_taken_0x17160c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17160c) {
            ctx->pc = 0x171610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17160Cu;
            // 0x171610: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1716C0u;
            goto label_1716c0;
        }
    }
    ctx->pc = 0x171614u;
    // 0x171614: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x171614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x171618: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x171618u;
    {
        const bool branch_taken_0x171618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171618) {
            ctx->pc = 0x17161Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171618u;
            // 0x17161c: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17164Cu;
            goto label_17164c;
        }
    }
    ctx->pc = 0x171620u;
    // 0x171620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171624: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x171628: 0xa064d9d8  sb          $a0, -0x2628($v1)
    ctx->pc = 0x171628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 4));
    // 0x17162c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x171630: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171638: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x17163c: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x17163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x171640: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x171640u;
    {
        const bool branch_taken_0x171640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171640u;
        // 0x171644: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171640) {
            ctx->pc = 0x1716ACu;
            goto label_1716ac;
        }
    }
    ctx->pc = 0x171648u;
    // 0x171648: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x171648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_17164c:
    // 0x17164c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17164Cu;
    {
        const bool branch_taken_0x17164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17164c) {
            ctx->pc = 0x171650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17164Cu;
            // 0x171650: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171680u;
            goto label_171680;
        }
    }
    ctx->pc = 0x171654u;
    // 0x171654: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x171654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171658: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x171658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17165c: 0xa064d9d8  sb          $a0, -0x2628($v1)
    ctx->pc = 0x17165cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 4));
    // 0x171660: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x171660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x171664: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x171664u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17166c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x17166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x171670: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x171674: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x171674u;
    {
        const bool branch_taken_0x171674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171674u;
        // 0x171678: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171674) {
            ctx->pc = 0x1716ACu;
            goto label_1716ac;
        }
    }
    ctx->pc = 0x17167Cu;
    // 0x17167c: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x17167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_171680:
    // 0x171680: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x171680u;
    {
        const bool branch_taken_0x171680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171680) {
            ctx->pc = 0x171684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171680u;
            // 0x171684: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1716B0u;
            goto label_1716b0;
        }
    }
    ctx->pc = 0x171688u;
    // 0x171688: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x171688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17168c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x171690: 0xa064d9d8  sb          $a0, -0x2628($v1)
    ctx->pc = 0x171690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 4));
    // 0x171694: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x171698: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x171698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17169c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1716a0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1716a4: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1716a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1716a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1716ac:
    // 0x1716ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1716acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1716b0:
    // 0x1716b0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1716b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1716b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1716B4u;
    {
        const bool branch_taken_0x1716b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716B4u;
        // 0x1716b8: 0xac644828  sw          $a0, 0x4828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716b4) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x1716BCu;
    // 0x1716bc: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x1716bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_1716c0:
    // 0x1716c0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1716C0u;
    {
        const bool branch_taken_0x1716c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1716c0) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x1716C8u;
    // 0x1716c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1716cc: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1716d0: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1716d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1716d4: 0xa060d9d8  sb          $zero, -0x2628($v1)
    ctx->pc = 0x1716d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    // 0x1716d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1716d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1716dc: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1716e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1716e4: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1716e8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1716ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1716ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1716f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1716F0u;
    {
        const bool branch_taken_0x1716f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716F0u;
        // 0x1716f4: 0xac644828  sw          $a0, 0x4828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716f0) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x1716F8u;
    // 0x1716f8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x1716f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_1716fc:
    // 0x1716fc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1716FCu;
    SET_GPR_U32(ctx, 31, 0x171704u);
    ctx->pc = 0x171700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716FCu;
    // 0x171700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x1716FCu, 0x171704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171704u;
label_171704:
    // 0x171704: 0xc0538d0  jal         func_14E340
    ctx->pc = 0x171704u;
    SET_GPR_U32(ctx, 31, 0x17170Cu);
    ctx->pc = 0x14E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E340u, 0x171704u, 0x17170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17170Cu;
label_17170c:
    // 0x17170c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171714: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x171714u;
    SET_GPR_U32(ctx, 31, 0x17171Cu);
    ctx->pc = 0x171718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171714u;
    // 0x171718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x171714u, 0x17171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17171Cu;
label_17171c:
    // 0x17171c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x17171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x171720: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171724: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x171724u;
    {
        const bool branch_taken_0x171724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171724u;
        // 0x171728: 0xac644828  sw          $a0, 0x4828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171724) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x17172Cu;
    // 0x17172c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171730:
    // 0x171730: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x171730u;
    SET_GPR_U32(ctx, 31, 0x171738u);
    ctx->pc = 0x171734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171730u;
    // 0x171734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x171730u, 0x171738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171738u;
label_171738:
    // 0x171738: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x171738u;
    {
        const bool branch_taken_0x171738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171738) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x171740u;
    // 0x171740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171748: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x171748u;
    SET_GPR_U32(ctx, 31, 0x171750u);
    ctx->pc = 0x17174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171748u;
    // 0x17174c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x171748u, 0x171750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171750u;
label_171750:
    // 0x171750: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x171750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x171754: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171758: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171758u;
    {
        const bool branch_taken_0x171758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171758u;
        // 0x17175c: 0xac644828  sw          $a0, 0x4828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171758) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x171760u;
    // 0x171760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171764:
    // 0x171764: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171768: 0xa0644830  sb          $a0, 0x4830($v1)
    ctx->pc = 0x171768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18480), (uint8_t)GPR_U32(ctx, 4));
label_17176c:
    // 0x17176c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171770:
    // 0x171770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17177c: 0x3e00008  jr          $ra
    ctx->pc = 0x17177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17177Cu;
        // 0x171780: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171784u;
    // 0x171784: 0x0  nop
    ctx->pc = 0x171784u;
    // NOP
    // 0x171788: 0x0  nop
    ctx->pc = 0x171788u;
    // NOP
    // 0x17178c: 0x0  nop
    ctx->pc = 0x17178cu;
    // NOP
}

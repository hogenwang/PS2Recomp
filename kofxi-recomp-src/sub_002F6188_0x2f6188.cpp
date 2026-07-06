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

// Function: sub_002F6188
// Address: 0x2f6188 - 0x2f6510
void sub_002F6188_0x2f6188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6188_0x2f6188");
#endif

    switch (ctx->pc) {
        case 0x2f6294u: goto label_2f6294;
        default: break;
    }

    ctx->pc = 0x2f6188u;

    // 0x2f6188: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f618c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2f618cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6190: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x2f6190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x2f6194: 0x2ca2001a  sltiu       $v0, $a1, 0x1A
    ctx->pc = 0x2f6194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2f6198: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f6198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f619c: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x2f619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x2f61a0: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x2f61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x2f61a4: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x2f61a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x2f61a8: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x2f61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x2f61ac: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2F61ACu;
    {
        const bool branch_taken_0x2f61ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61ACu;
        // 0x2f61b0: 0xffab0068  sd          $t3, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61ac) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F61B4u;
    // 0x2f61b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f61b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f61bc: 0x24422330  addiu       $v0, $v0, 0x2330
    ctx->pc = 0x2f61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x2f61c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f61c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f61c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f61c8: 0x800008  jr          $a0
    ctx->pc = 0x2F61C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F61D0u: goto label_2f61d0;
            case 0x2F61E8u: goto label_2f61e8;
            case 0x2F6200u: goto label_2f6200;
            case 0x2F6218u: goto label_2f6218;
            case 0x2F6230u: goto label_2f6230;
            case 0x2F6248u: goto label_2f6248;
            case 0x2F6260u: goto label_2f6260;
            case 0x2F6290u: goto label_2f6290;
            case 0x2F62A8u: goto label_2f62a8;
            case 0x2F62C0u: goto label_2f62c0;
            case 0x2F62D8u: goto label_2f62d8;
            case 0x2F62F0u: goto label_2f62f0;
            case 0x2F6310u: goto label_2f6310;
            case 0x2F6340u: goto label_2f6340;
            case 0x2F6370u: goto label_2f6370;
            case 0x2F63A0u: goto label_2f63a0;
            case 0x2F63D0u: goto label_2f63d0;
            case 0x2F63E8u: goto label_2f63e8;
            case 0x2F6418u: goto label_2f6418;
            case 0x2F6448u: goto label_2f6448;
            case 0x2F6460u: goto label_2f6460;
            case 0x2F6478u: goto label_2f6478;
            case 0x2F6490u: goto label_2f6490;
            case 0x2F64C0u: goto label_2f64c0;
            case 0x2F64D8u: goto label_2f64d8;
            case 0x2F64F4u: goto label_2f64f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F61D0u;
label_2f61d0:
    // 0x2f61d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f61d4: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2F61D4u;
    {
        const bool branch_taken_0x2f61d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61D4u;
        // 0x2f61d8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61d4) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F61DCu;
    // 0x2f61dc: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2F61DCu;
    {
        const bool branch_taken_0x2f61dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61DCu;
        // 0x2f61e0: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61dc) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F61E4u;
    // 0x2f61e4: 0x0  nop
    ctx->pc = 0x2f61e4u;
    // NOP
label_2f61e8:
    // 0x2f61e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f61ec: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2F61ECu;
    {
        const bool branch_taken_0x2f61ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61ECu;
        // 0x2f61f0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61ec) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F61F4u;
    // 0x2f61f4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2F61F4u;
    {
        const bool branch_taken_0x2f61f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61F4u;
        // 0x2f61f8: 0x8d820008  lw          $v0, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61f4) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F61FCu;
    // 0x2f61fc: 0x0  nop
    ctx->pc = 0x2f61fcu;
    // NOP
label_2f6200:
    // 0x2f6200: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6204: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x2F6204u;
    {
        const bool branch_taken_0x2f6204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6204u;
        // 0x2f6208: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6204) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F620Cu;
    // 0x2f620c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2F620Cu;
    {
        const bool branch_taken_0x2f620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F620Cu;
        // 0x2f6210: 0x8d8200b4  lw          $v0, 0xB4($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f620c) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F6214u;
    // 0x2f6214: 0x0  nop
    ctx->pc = 0x2f6214u;
    // NOP
label_2f6218:
    // 0x2f6218: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f621c: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2F621Cu;
    {
        const bool branch_taken_0x2f621c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F621Cu;
        // 0x2f6220: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f621c) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F6224u;
    // 0x2f6224: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2F6224u;
    {
        const bool branch_taken_0x2f6224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6224u;
        // 0x2f6228: 0x8d8200b8  lw          $v0, 0xB8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6224) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F622Cu;
    // 0x2f622c: 0x0  nop
    ctx->pc = 0x2f622cu;
    // NOP
label_2f6230:
    // 0x2f6230: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6234: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2F6234u;
    {
        const bool branch_taken_0x2f6234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6234u;
        // 0x2f6238: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6234) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F623Cu;
    // 0x2f623c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2F623Cu;
    {
        const bool branch_taken_0x2f623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F623Cu;
        // 0x2f6240: 0x8d820090  lw          $v0, 0x90($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f623c) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F6244u;
    // 0x2f6244: 0x0  nop
    ctx->pc = 0x2f6244u;
    // NOP
label_2f6248:
    // 0x2f6248: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f624c: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2F624Cu;
    {
        const bool branch_taken_0x2f624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F624Cu;
        // 0x2f6250: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f624c) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F6254u;
    // 0x2f6254: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2F6254u;
    {
        const bool branch_taken_0x2f6254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6254u;
        // 0x2f6258: 0x8d8200bc  lw          $v0, 0xBC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6254) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F625Cu;
    // 0x2f625c: 0x0  nop
    ctx->pc = 0x2f625cu;
    // NOP
label_2f6260:
    // 0x2f6260: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f6264: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6268: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F6268u;
    {
        const bool branch_taken_0x2f6268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6268u;
        // 0x2f626c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6268) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6270u;
    // 0x2f6270: 0x108000a0  beqz        $a0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2F6270u;
    {
        const bool branch_taken_0x2f6270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6270u;
        // 0x2f6274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6270) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6278u;
    // 0x2f6278: 0x8d8300c0  lw          $v1, 0xC0($t4)
    ctx->pc = 0x2f6278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 192)));
    // 0x2f627c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f627cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6280: 0x8d8200c4  lw          $v0, 0xC4($t4)
    ctx->pc = 0x2f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
    // 0x2f6284: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2F6284u;
    {
        const bool branch_taken_0x2f6284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6284u;
        // 0x2f6288: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6284) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F628Cu;
    // 0x2f628c: 0x0  nop
    ctx->pc = 0x2f628cu;
    // NOP
label_2f6290:
    // 0x2f6290: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f6294:
    // 0x2f6294: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2F6294u;
    {
        const bool branch_taken_0x2f6294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6294u;
        // 0x2f6298: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6294) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F629Cu;
    // 0x2f629c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2F629Cu;
    {
        const bool branch_taken_0x2f629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F629Cu;
        // 0x2f62a0: 0x8d820040  lw          $v0, 0x40($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f629c) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F62A4u;
    // 0x2f62a4: 0x0  nop
    ctx->pc = 0x2f62a4u;
    // NOP
label_2f62a8:
    // 0x2f62a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f62ac: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x2F62ACu;
    {
        const bool branch_taken_0x2f62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62ACu;
        // 0x2f62b0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62ac) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F62B4u;
    // 0x2f62b4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2F62B4u;
    {
        const bool branch_taken_0x2f62b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62B4u;
        // 0x2f62b8: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62b4) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F62BCu;
    // 0x2f62bc: 0x0  nop
    ctx->pc = 0x2f62bcu;
    // NOP
label_2f62c0:
    // 0x2f62c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f62c4: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2F62C4u;
    {
        const bool branch_taken_0x2f62c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62C4u;
        // 0x2f62c8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62c4) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F62CCu;
    // 0x2f62cc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2F62CCu;
    {
        const bool branch_taken_0x2f62cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62CCu;
        // 0x2f62d0: 0x8d820010  lw          $v0, 0x10($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62cc) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F62D4u;
    // 0x2f62d4: 0x0  nop
    ctx->pc = 0x2f62d4u;
    // NOP
label_2f62d8:
    // 0x2f62d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f62dc: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2F62DCu;
    {
        const bool branch_taken_0x2f62dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62DCu;
        // 0x2f62e0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62dc) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F62E4u;
    // 0x2f62e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F62E4u;
    {
        const bool branch_taken_0x2f62e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62E4u;
        // 0x2f62e8: 0x8d820038  lw          $v0, 0x38($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62e4) {
            ctx->pc = 0x2F6300u;
            goto label_2f6300;
        }
    }
    ctx->pc = 0x2F62ECu;
    // 0x2f62ec: 0x0  nop
    ctx->pc = 0x2f62ecu;
    // NOP
label_2f62f0:
    // 0x2f62f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f62f4: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2F62F4u;
    {
        const bool branch_taken_0x2f62f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62F4u;
        // 0x2f62f8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62f4) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F62FCu;
    // 0x2f62fc: 0x8d8200b0  lw          $v0, 0xB0($t4)
    ctx->pc = 0x2f62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 176)));
label_2f6300:
    // 0x2f6300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6304: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f6308: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2F6308u;
    {
        const bool branch_taken_0x2f6308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6308u;
        // 0x2f630c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6308) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F6310u;
label_2f6310:
    // 0x2f6310: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f6314: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6318: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2F6318u;
    {
        const bool branch_taken_0x2f6318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6318u;
        // 0x2f631c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6318) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6320u;
    // 0x2f6320: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2F6320u;
    {
        const bool branch_taken_0x2f6320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6320u;
        // 0x2f6324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6320) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6328u;
    // 0x2f6328: 0x8d830068  lw          $v1, 0x68($t4)
    ctx->pc = 0x2f6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 104)));
    // 0x2f632c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f632cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6330: 0x8d82006c  lw          $v0, 0x6C($t4)
    ctx->pc = 0x2f6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 108)));
    // 0x2f6334: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2F6334u;
    {
        const bool branch_taken_0x2f6334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6334u;
        // 0x2f6338: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6334) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F633Cu;
    // 0x2f633c: 0x0  nop
    ctx->pc = 0x2f633cu;
    // NOP
label_2f6340:
    // 0x2f6340: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f6344: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6348: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2F6348u;
    {
        const bool branch_taken_0x2f6348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6348u;
        // 0x2f634c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6348) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6350u;
    // 0x2f6350: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F6350u;
    {
        const bool branch_taken_0x2f6350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6350u;
        // 0x2f6354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6350) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6358u;
    // 0x2f6358: 0x8d830120  lw          $v1, 0x120($t4)
    ctx->pc = 0x2f6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 288)));
    // 0x2f635c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f635cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6360: 0x8d820124  lw          $v0, 0x124($t4)
    ctx->pc = 0x2f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 292)));
    // 0x2f6364: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2F6364u;
    {
        const bool branch_taken_0x2f6364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6364u;
        // 0x2f6368: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6364) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F636Cu;
    // 0x2f636c: 0x0  nop
    ctx->pc = 0x2f636cu;
    // NOP
label_2f6370:
    // 0x2f6370: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f6374: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6378: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2F6378u;
    {
        const bool branch_taken_0x2f6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6378u;
        // 0x2f637c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6378) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6380u;
    // 0x2f6380: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F6380u;
    {
        const bool branch_taken_0x2f6380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6380u;
        // 0x2f6384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6380) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6388u;
    // 0x2f6388: 0x8d8300a4  lw          $v1, 0xA4($t4)
    ctx->pc = 0x2f6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 164)));
    // 0x2f638c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f638cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6390: 0x8d8200a8  lw          $v0, 0xA8($t4)
    ctx->pc = 0x2f6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 168)));
    // 0x2f6394: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2F6394u;
    {
        const bool branch_taken_0x2f6394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6394u;
        // 0x2f6398: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6394) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F639Cu;
    // 0x2f639c: 0x0  nop
    ctx->pc = 0x2f639cu;
    // NOP
label_2f63a0:
    // 0x2f63a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f63a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f63a4: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f63a8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F63A8u;
    {
        const bool branch_taken_0x2f63a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63A8u;
        // 0x2f63ac: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63a8) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F63B0u;
    // 0x2f63b0: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2F63B0u;
    {
        const bool branch_taken_0x2f63b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63B0u;
        // 0x2f63b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63b0) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F63B8u;
    // 0x2f63b8: 0x8d830054  lw          $v1, 0x54($t4)
    ctx->pc = 0x2f63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x2f63bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f63c0: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x2f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x2f63c4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2F63C4u;
    {
        const bool branch_taken_0x2f63c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63C4u;
        // 0x2f63c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63c4) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F63CCu;
    // 0x2f63cc: 0x0  nop
    ctx->pc = 0x2f63ccu;
    // NOP
label_2f63d0:
    // 0x2f63d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f63d4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F63D4u;
    {
        const bool branch_taken_0x2f63d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D4u;
        // 0x2f63d8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d4) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F63DCu;
    // 0x2f63dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F63DCu;
    {
        const bool branch_taken_0x2f63dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63DCu;
        // 0x2f63e0: 0x8d820174  lw          $v0, 0x174($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63dc) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F63E4u;
    // 0x2f63e4: 0x0  nop
    ctx->pc = 0x2f63e4u;
    // NOP
label_2f63e8:
    // 0x2f63e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f63e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f63ec: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f63f0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F63F0u;
    {
        const bool branch_taken_0x2f63f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63F0u;
        // 0x2f63f4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f0) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F63F8u;
    // 0x2f63f8: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F63F8u;
    {
        const bool branch_taken_0x2f63f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63F8u;
        // 0x2f63fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f8) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6400u;
    // 0x2f6400: 0x8d830030  lw          $v1, 0x30($t4)
    ctx->pc = 0x2f6400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x2f6404: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f6404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6408: 0x8d820034  lw          $v0, 0x34($t4)
    ctx->pc = 0x2f6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x2f640c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F640Cu;
    {
        const bool branch_taken_0x2f640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f640c) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F6414u;
    // 0x2f6414: 0x0  nop
    ctx->pc = 0x2f6414u;
    // NOP
label_2f6418:
    // 0x2f6418: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f641c: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6420: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F6420u;
    {
        const bool branch_taken_0x2f6420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6420u;
        // 0x2f6424: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6420) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6428u;
    // 0x2f6428: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F6428u;
    {
        const bool branch_taken_0x2f6428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6428u;
        // 0x2f642c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6428) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F6430u;
    // 0x2f6430: 0x8d830078  lw          $v1, 0x78($t4)
    ctx->pc = 0x2f6430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 120)));
    // 0x2f6434: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f6434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6438: 0x8d82007c  lw          $v0, 0x7C($t4)
    ctx->pc = 0x2f6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 124)));
    // 0x2f643c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F643Cu;
    {
        const bool branch_taken_0x2f643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F643Cu;
        // 0x2f6440: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f643c) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F6444u;
    // 0x2f6444: 0x0  nop
    ctx->pc = 0x2f6444u;
    // NOP
label_2f6448:
    // 0x2f6448: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f644c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F644Cu;
    {
        const bool branch_taken_0x2f644c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F644Cu;
        // 0x2f6450: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f644c) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F6454u;
    // 0x2f6454: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F6454u;
    {
        const bool branch_taken_0x2f6454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6454u;
        // 0x2f6458: 0x8d820084  lw          $v0, 0x84($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6454) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F645Cu;
    // 0x2f645c: 0x0  nop
    ctx->pc = 0x2f645cu;
    // NOP
label_2f6460:
    // 0x2f6460: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6464: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F6464u;
    {
        const bool branch_taken_0x2f6464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6464u;
        // 0x2f6468: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6464) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F646Cu;
    // 0x2f646c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F646Cu;
    {
        const bool branch_taken_0x2f646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F646Cu;
        // 0x2f6470: 0x8d8200cc  lw          $v0, 0xCC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f646c) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F6474u;
    // 0x2f6474: 0x0  nop
    ctx->pc = 0x2f6474u;
    // NOP
label_2f6478:
    // 0x2f6478: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f6478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f647c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F647Cu;
    {
        const bool branch_taken_0x2f647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F647Cu;
        // 0x2f6480: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f647c) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F6484u;
    // 0x2f6484: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F6484u;
    {
        const bool branch_taken_0x2f6484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6484u;
        // 0x2f6488: 0x8d8200d0  lw          $v0, 0xD0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6484) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F648Cu;
    // 0x2f648c: 0x0  nop
    ctx->pc = 0x2f648cu;
    // NOP
label_2f6490:
    // 0x2f6490: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2f6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f6494: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x2f6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2f6498: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F6498u;
    {
        const bool branch_taken_0x2f6498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6498u;
        // 0x2f649c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6498) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F64A0u;
    // 0x2f64a0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F64A0u;
    {
        const bool branch_taken_0x2f64a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A0u;
        // 0x2f64a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64a0) {
            ctx->pc = 0x2F64F4u;
            goto label_2f64f4;
        }
    }
    ctx->pc = 0x2F64A8u;
    // 0x2f64a8: 0x8d8300d0  lw          $v1, 0xD0($t4)
    ctx->pc = 0x2f64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 208)));
    // 0x2f64ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f64acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f64b0: 0x8d82017c  lw          $v0, 0x17C($t4)
    ctx->pc = 0x2f64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 380)));
    // 0x2f64b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F64B4u;
    {
        const bool branch_taken_0x2f64b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64B4u;
        // 0x2f64b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64b4) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F64BCu;
    // 0x2f64bc: 0x0  nop
    ctx->pc = 0x2f64bcu;
    // NOP
label_2f64c0:
    // 0x2f64c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f64c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F64C4u;
    {
        const bool branch_taken_0x2f64c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64C4u;
        // 0x2f64c8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64c4) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F64CCu;
    // 0x2f64cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F64CCu;
    {
        const bool branch_taken_0x2f64cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64CCu;
        // 0x2f64d0: 0x8d8200d8  lw          $v0, 0xD8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64cc) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F64D4u;
    // 0x2f64d4: 0x0  nop
    ctx->pc = 0x2f64d4u;
    // NOP
label_2f64d8:
    // 0x2f64d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f64dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F64DCu;
    {
        const bool branch_taken_0x2f64dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64DCu;
        // 0x2f64e0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64dc) {
            ctx->pc = 0x2F64F8u;
            goto label_2f64f8;
        }
    }
    ctx->pc = 0x2F64E4u;
    // 0x2f64e4: 0x8d820180  lw          $v0, 0x180($t4)
    ctx->pc = 0x2f64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 384)));
label_2f64e8:
    // 0x2f64e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f64e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F64ECu;
    {
        const bool branch_taken_0x2f64ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64ECu;
        // 0x2f64f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64ec) {
            ctx->pc = 0x2F6500u;
            goto label_2f6500;
        }
    }
    ctx->pc = 0x2F64F4u;
label_2f64f4:
    // 0x2f64f4: 0x2402fc14  addiu       $v0, $zero, -0x3EC
    ctx->pc = 0x2f64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
label_2f64f8:
    // 0x2f64f8: 0xad820020  sw          $v0, 0x20($t4)
    ctx->pc = 0x2f64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 2));
    // 0x2f64fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6500:
    // 0x2f6500: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f6500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6504: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6504u;
        // 0x2f6508: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F650Cu;
    // 0x2f650c: 0x0  nop
    ctx->pc = 0x2f650cu;
    // NOP
}

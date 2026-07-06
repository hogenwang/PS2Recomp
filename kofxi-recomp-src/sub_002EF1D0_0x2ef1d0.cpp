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

// Function: sub_002EF1D0
// Address: 0x2ef1d0 - 0x2efce8
void sub_002EF1D0_0x2ef1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF1D0_0x2ef1d0");
#endif

    switch (ctx->pc) {
        case 0x2ef224u: goto label_2ef224;
        case 0x2ef230u: goto label_2ef230;
        case 0x2ef254u: goto label_2ef254;
        case 0x2ef278u: goto label_2ef278;
        case 0x2ef280u: goto label_2ef280;
        case 0x2ef290u: goto label_2ef290;
        case 0x2ef30cu: goto label_2ef30c;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef494u: goto label_2ef494;
        case 0x2ef4a8u: goto label_2ef4a8;
        case 0x2ef4d4u: goto label_2ef4d4;
        case 0x2ef4ecu: goto label_2ef4ec;
        case 0x2ef4f4u: goto label_2ef4f4;
        case 0x2ef524u: goto label_2ef524;
        case 0x2ef528u: goto label_2ef528;
        case 0x2ef534u: goto label_2ef534;
        case 0x2ef544u: goto label_2ef544;
        case 0x2ef5a0u: goto label_2ef5a0;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5dcu: goto label_2ef5dc;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef610u: goto label_2ef610;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6e4u: goto label_2ef6e4;
        case 0x2ef6f8u: goto label_2ef6f8;
        case 0x2ef700u: goto label_2ef700;
        case 0x2ef70cu: goto label_2ef70c;
        case 0x2ef720u: goto label_2ef720;
        case 0x2ef728u: goto label_2ef728;
        case 0x2ef738u: goto label_2ef738;
        case 0x2ef768u: goto label_2ef768;
        case 0x2ef77cu: goto label_2ef77c;
        case 0x2ef7d4u: goto label_2ef7d4;
        case 0x2ef7e0u: goto label_2ef7e0;
        case 0x2ef7f4u: goto label_2ef7f4;
        case 0x2ef7fcu: goto label_2ef7fc;
        case 0x2ef81cu: goto label_2ef81c;
        case 0x2ef83cu: goto label_2ef83c;
        case 0x2ef850u: goto label_2ef850;
        case 0x2ef85cu: goto label_2ef85c;
        case 0x2ef86cu: goto label_2ef86c;
        case 0x2ef874u: goto label_2ef874;
        case 0x2ef8a4u: goto label_2ef8a4;
        case 0x2ef8b8u: goto label_2ef8b8;
        case 0x2ef8c0u: goto label_2ef8c0;
        case 0x2ef8f0u: goto label_2ef8f0;
        case 0x2ef908u: goto label_2ef908;
        case 0x2ef91cu: goto label_2ef91c;
        case 0x2ef928u: goto label_2ef928;
        case 0x2ef930u: goto label_2ef930;
        case 0x2ef93cu: goto label_2ef93c;
        case 0x2ef950u: goto label_2ef950;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef9a4u: goto label_2ef9a4;
        case 0x2ef9c8u: goto label_2ef9c8;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2efa14u: goto label_2efa14;
        case 0x2efa28u: goto label_2efa28;
        case 0x2efa44u: goto label_2efa44;
        case 0x2efa54u: goto label_2efa54;
        case 0x2efa68u: goto label_2efa68;
        case 0x2efa74u: goto label_2efa74;
        case 0x2efa80u: goto label_2efa80;
        case 0x2efa9cu: goto label_2efa9c;
        case 0x2efad8u: goto label_2efad8;
        case 0x2efaecu: goto label_2efaec;
        case 0x2efaf8u: goto label_2efaf8;
        case 0x2efb04u: goto label_2efb04;
        case 0x2efb1cu: goto label_2efb1c;
        case 0x2efb48u: goto label_2efb48;
        case 0x2efb84u: goto label_2efb84;
        case 0x2efbb8u: goto label_2efbb8;
        case 0x2efbccu: goto label_2efbcc;
        case 0x2efbf4u: goto label_2efbf4;
        case 0x2efc04u: goto label_2efc04;
        case 0x2efc28u: goto label_2efc28;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc54u: goto label_2efc54;
        case 0x2efc70u: goto label_2efc70;
        case 0x2efc78u: goto label_2efc78;
        case 0x2efcbcu: goto label_2efcbc;
        case 0x2efcd4u: goto label_2efcd4;
        default: break;
    }

    ctx->pc = 0x2ef1d0u;

    // 0x2ef1d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ef1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ef1d4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ef1d8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2ef1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2ef1dc: 0x25efeca8  addiu       $t7, $t7, -0x1358
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef1e0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2ef1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2ef1e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1e8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2ef1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2ef1ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ef1ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ef1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ef1f4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ef1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ef1f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ef1f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ef1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ef200: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ef200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ef204: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ef204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ef208: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2ef208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2ef20c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2ef20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2ef210: 0x8df30090  lw          $s3, 0x90($t7)
    ctx->pc = 0x2ef210u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 144)));
    // 0x2ef214: 0x8dee005c  lw          $t6, 0x5C($t7)
    ctx->pc = 0x2ef214u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 92)));
    // 0x2ef218: 0x8df40098  lw          $s4, 0x98($t7)
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
    // 0x2ef21c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF21Cu;
    SET_GPR_U32(ctx, 31, 0x2EF224u);
    ctx->pc = 0x2EF220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF21Cu;
    // 0x2ef220: 0x26eb021  addu        $s6, $s3, $t6 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF21Cu, 0x2EF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF224u;
label_2ef224:
    // 0x2ef224: 0x276782b  sltu        $t7, $s3, $s6
    ctx->pc = 0x2ef224u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2ef228: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EF228u;
    {
        const bool branch_taken_0x2ef228 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF228u;
        // 0x2ef22c: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef228) {
            ctx->pc = 0x2EF290u;
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF230u;
label_2ef230:
    // 0x2ef230: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef230u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ef234: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ef234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef238: 0x8e0e037c  lw          $t6, 0x37C($s0)
    ctx->pc = 0x2ef238u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x2ef23c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2ef23cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef240: 0x15cf0021  bne         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EF240u;
    {
        const bool branch_taken_0x2ef240 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF240u;
        // 0x2ef244: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef240) {
            ctx->pc = 0x2EF2C8u;
            goto label_2ef2c8;
        }
    }
    ctx->pc = 0x2EF248u;
    // 0x2ef248: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2ef248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ef24c: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x2EF24Cu;
    SET_GPR_U32(ctx, 31, 0x2EF254u);
    ctx->pc = 0x2EF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF24Cu;
    // 0x2ef250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x2EF24Cu, 0x2EF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF254u;
label_2ef254:
    // 0x2ef254: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EF254u;
    {
        const bool branch_taken_0x2ef254 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF254u;
        // 0x2ef258: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef254) {
            ctx->pc = 0x2EF290u;
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF25Cu;
    // 0x2ef25c: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EF25Cu;
    {
        const bool branch_taken_0x2ef25c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF25Cu;
        // 0x2ef260: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef25c) {
            ctx->pc = 0x2EF2C4u;
            goto label_2ef2c4;
        }
    }
    ctx->pc = 0x2EF264u;
    // 0x2ef264: 0x8e0f005c  lw          $t7, 0x5C($s0)
    ctx->pc = 0x2ef264u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ef268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ef268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef270: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x2ef270u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2ef274: 0xae0f005c  sw          $t7, 0x5C($s0)
    ctx->pc = 0x2ef274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 15));
label_2ef278:
    // 0x2ef278: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x2EF278u;
    SET_GPR_U32(ctx, 31, 0x2EF280u);
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x2EF278u, 0x2EF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF280u;
label_2ef280:
    // 0x2ef280: 0x56782b  sltu        $t7, $v0, $s6
    ctx->pc = 0x2ef280u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2ef284: 0x15e0ffea  bnez        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EF284u;
    {
        const bool branch_taken_0x2ef284 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF284u;
        // 0x2ef288: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef284) {
            ctx->pc = 0x2EF230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef230;
        }
    }
    ctx->pc = 0x2EF28Cu;
    // 0x2ef28c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2ef28cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef290:
    // 0x2ef290: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ef290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef294: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2ef294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef298: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ef298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ef29c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ef29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef2a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ef2a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ef2a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ef2a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef2a8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ef2a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ef2ac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2ef2acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef2b0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2ef2b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ef2b4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2ef2b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef2b8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2ef2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ef2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2BCu;
        // 0x2ef2c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF2C4u;
label_2ef2c4:
    // 0x2ef2c4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ef2c8:
    // 0x2ef2c8: 0x92690001  lbu         $t1, 0x1($s3)
    ctx->pc = 0x2ef2c8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2ef2cc: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ef2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef2d0: 0x8e08005c  lw          $t0, 0x5C($s0)
    ctx->pc = 0x2ef2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ef2d4: 0x1097823  subu        $t7, $t0, $t1
    ctx->pc = 0x2ef2d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2ef2d8: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x2ef2d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x2ef2dc: 0x5c00003  bltz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF2DCu;
    {
        const bool branch_taken_0x2ef2dc = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x2EF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2DCu;
        // 0x2ef2e0: 0x2d0f0004  sltiu       $t7, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2dc) {
            ctx->pc = 0x2EF2ECu;
            goto label_2ef2ec;
        }
    }
    ctx->pc = 0x2EF2E4u;
    // 0x2ef2e4: 0x51e00012  beql        $t7, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EF2E4u;
    {
        const bool branch_taken_0x2ef2e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2e4) {
            ctx->pc = 0x2EF2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2E4u;
            // 0x2ef2e8: 0xae0e005c  sw          $t6, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF330u;
            goto label_2ef330;
        }
    }
    ctx->pc = 0x2EF2ECu;
label_2ef2ec:
    // 0x2ef2ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef2f0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef2f4: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef2f8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ef2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ef2fc: 0x24e71180  addiu       $a3, $a3, 0x1180
    ctx->pc = 0x2ef2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4480));
    // 0x2ef300: 0x240509dc  addiu       $a1, $zero, 0x9DC
    ctx->pc = 0x2ef300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2524));
    // 0x2ef304: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF304u;
    SET_GPR_U32(ctx, 31, 0x2EF30Cu);
    ctx->pc = 0x2EF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF304u;
    // 0x2ef308: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF304u, 0x2EF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF30Cu;
label_2ef30c:
    // 0x2ef30c: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x2ef30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2ef310: 0x5093ffdf  beql        $a0, $s3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2EF310u;
    {
        const bool branch_taken_0x2ef310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x2ef310) {
            ctx->pc = 0x2EF314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF310u;
            // 0x2ef314: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF318u;
    // 0x2ef318: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x2ef318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ef31c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x2EF31Cu;
    SET_GPR_U32(ctx, 31, 0x2EF324u);
    ctx->pc = 0x2EF320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF31Cu;
    // 0x2ef320: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x2EF31Cu, 0x2EF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF324u;
label_2ef324:
    // 0x2ef324: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x2EF324u;
    {
        const bool branch_taken_0x2ef324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF324u;
        // 0x2ef328: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef324) {
            ctx->pc = 0x2EF290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF32Cu;
    // 0x2ef32c: 0x0  nop
    ctx->pc = 0x2ef32cu;
    // NOP
label_2ef330:
    // 0x2ef330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef334: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef338: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x2ef338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2ef33c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EF33Cu;
    SET_GPR_U32(ctx, 31, 0x2EF344u);
    ctx->pc = 0x2EF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF33Cu;
    // 0x2ef340: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2EF33Cu, 0x2EF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF344u;
label_2ef344:
    // 0x2ef344: 0x928f0000  lbu         $t7, 0x0($s4)
    ctx->pc = 0x2ef344u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef348: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2ef348u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2ef34c: 0x2dee000d  sltiu       $t6, $t7, 0xD
    ctx->pc = 0x2ef34cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2ef350: 0x11c0009a  beqz        $t6, . + 4 + (0x9A << 2)
    ctx->pc = 0x2EF350u;
    {
        const bool branch_taken_0x2ef350 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF350u;
        // 0x2ef354: 0x3c0e0040  lui         $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef350) {
            ctx->pc = 0x2EF5BCu;
            goto label_2ef5bc;
        }
    }
    ctx->pc = 0x2EF358u;
    // 0x2ef358: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2ef358u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2ef35c: 0x25ce14a0  addiu       $t6, $t6, 0x14A0
    ctx->pc = 0x2ef35cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 5280));
    // 0x2ef360: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x2ef360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2ef364: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x2ef364u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2ef368: 0x1a00008  jr          $t5
    ctx->pc = 0x2EF368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF370u: goto label_2ef370;
            case 0x2EF42Cu: goto label_2ef42c;
            case 0x2EF4A4u: goto label_2ef4a4;
            case 0x2EF5B0u: goto label_2ef5b0;
            case 0x2EF5BCu: goto label_2ef5bc;
            case 0x2EF5ECu: goto label_2ef5ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF368u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EF370u;
label_2ef370:
    // 0x2ef370: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ef370u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ef374: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef374u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef378: 0x25f01168  addiu       $s0, $t7, 0x1168
    ctx->pc = 0x2ef378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4456));
    // 0x2ef37c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef380: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef380u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef384: 0x24e711a8  addiu       $a3, $a3, 0x11A8
    ctx->pc = 0x2ef384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4520));
    // 0x2ef388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef38c: 0x240509ec  addiu       $a1, $zero, 0x9EC
    ctx->pc = 0x2ef38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2540));
    // 0x2ef390: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF390u;
    SET_GPR_U32(ctx, 31, 0x2EF398u);
    ctx->pc = 0x2EF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF390u;
    // 0x2ef394: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF390u, 0x2EF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF398u;
label_2ef398:
    // 0x2ef398: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ef398u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef39c: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EF39Cu;
    SET_GPR_U32(ctx, 31, 0x2EF3A4u);
    ctx->pc = 0x2EF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF39Cu;
    // 0x2ef3a0: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EF39Cu, 0x2EF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3A4u;
label_2ef3a4:
    // 0x2ef3a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF3A4u;
    {
        const bool branch_taken_0x2ef3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A4u;
        // 0x2ef3a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3a4) {
            ctx->pc = 0x2EF3D8u;
            goto label_2ef3d8;
        }
    }
    ctx->pc = 0x2EF3ACu;
    // 0x2ef3ac: 0x92890000  lbu         $t1, 0x0($s4)
    ctx->pc = 0x2ef3acu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2ef3b0:
    // 0x2ef3b0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ef3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ef3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3b8: 0x250811c8  addiu       $t0, $t0, 0x11C8
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4552));
    // 0x2ef3bc: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x2ef3bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x2ef3c0: 0x240509f1  addiu       $a1, $zero, 0x9F1
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2545));
    // 0x2ef3c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef3c8:
    // 0x2ef3c8: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EF3C8u;
    SET_GPR_U32(ctx, 31, 0x2EF3D0u);
    ctx->pc = 0x2EF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3C8u;
    // 0x2ef3cc: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EF3C8u, 0x2EF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3D0u;
label_2ef3d0:
    // 0x2ef3d0: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x2EF3D0u;
    {
        const bool branch_taken_0x2ef3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3D0u;
        // 0x2ef3d4: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3d0) {
            ctx->pc = 0x2EF290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF3D8u;
label_2ef3d8:
    // 0x2ef3d8: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EF3D8u;
    SET_GPR_U32(ctx, 31, 0x2EF3E0u);
    ctx->pc = 0x2F1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DE0u, 0x2EF3D8u, 0x2EF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3E0u;
label_2ef3e0:
    // 0x2ef3e0: 0xdfaf0000  ld          $t7, 0x0($sp)
    ctx->pc = 0x2ef3e0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef3e4: 0x240eff0f  addiu       $t6, $zero, -0xF1
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x2ef3e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2ef3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2ef3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3f0: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2ef3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2ef3f4: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2ef3f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2ef3f8: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x2ef3f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x2ef3fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef400: 0xffaf0000  sd          $t7, 0x0($sp)
    ctx->pc = 0x2ef400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
    // 0x2ef404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef408: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2EF408u;
    SET_GPR_U32(ctx, 31, 0x2EF410u);
    ctx->pc = 0x2EF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF408u;
    // 0x2ef40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0778u, 0x2EF408u, 0x2EF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF410u;
label_2ef410:
    // 0x2ef410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef414:
    // 0x2ef414: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EF414u;
    SET_GPR_U32(ctx, 31, 0x2EF41Cu);
    ctx->pc = 0x2EF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF414u;
    // 0x2ef418: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EF414u, 0x2EF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF41Cu;
label_2ef41c:
    // 0x2ef41c: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2ef41cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2ef420:
    // 0x2ef420: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ef424: 0x1000ff94  b           . + 4 + (-0x6C << 2)
    ctx->pc = 0x2EF424u;
    {
        const bool branch_taken_0x2ef424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF424u;
        // 0x2ef428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef424) {
            ctx->pc = 0x2EF278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef278;
        }
    }
    ctx->pc = 0x2EF42Cu;
label_2ef42c:
    // 0x2ef42c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ef430:
    // 0x2ef430: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef430u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef434: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ef434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef438: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef438u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef43c: 0x8e0e039c  lw          $t6, 0x39C($s0)
    ctx->pc = 0x2ef43cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x2ef440: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ef440u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ef444: 0x25f11168  addiu       $s1, $t7, 0x1168
    ctx->pc = 0x2ef444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4456));
    // 0x2ef448: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef44c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2ef44cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2ef450: 0x24e711e0  addiu       $a3, $a3, 0x11E0
    ctx->pc = 0x2ef450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4576));
    // 0x2ef454: 0xae0e039c  sw          $t6, 0x39C($s0)
    ctx->pc = 0x2ef454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 14));
    // 0x2ef458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef45c: 0x24050a0b  addiu       $a1, $zero, 0xA0B
    ctx->pc = 0x2ef45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x2ef460: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF460u;
    SET_GPR_U32(ctx, 31, 0x2EF468u);
    ctx->pc = 0x2EF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF460u;
    // 0x2ef464: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF460u, 0x2EF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF468u;
label_2ef468:
    // 0x2ef468: 0x8e08039c  lw          $t0, 0x39C($s0)
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x2ef46c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x2ef46cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ef470: 0x10f782b  sltu        $t7, $t0, $t7
    ctx->pc = 0x2ef470u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2ef474: 0x55e0ffea  bnel        $t7, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EF474u;
    {
        const bool branch_taken_0x2ef474 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef474) {
            ctx->pc = 0x2EF478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF474u;
            // 0x2ef478: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF47Cu;
    // 0x2ef47c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef47cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef484: 0x24e71200  addiu       $a3, $a3, 0x1200
    ctx->pc = 0x2ef484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4608));
    // 0x2ef488: 0x24050a0d  addiu       $a1, $zero, 0xA0D
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x2ef48c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF48Cu;
    SET_GPR_U32(ctx, 31, 0x2EF494u);
    ctx->pc = 0x2EF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF48Cu;
    // 0x2ef490: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF48Cu, 0x2EF494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF494u;
label_2ef494:
    // 0x2ef494: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x2ef494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x2ef498: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2ef498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2ef49c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2EF49Cu;
    {
        const bool branch_taken_0x2ef49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF49Cu;
        // 0x2ef4a0: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef49c) {
            ctx->pc = 0x2EF41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef41c;
        }
    }
    ctx->pc = 0x2EF4A4u;
label_2ef4a4:
    // 0x2ef4a4: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2ef4a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
label_2ef4a8:
    // 0x2ef4a8: 0x8dcfeca8  lw          $t7, -0x1358($t6)
    ctx->pc = 0x2ef4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2ef4ac: 0x25effff9  addiu       $t7, $t7, -0x7
    ctx->pc = 0x2ef4acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967289));
    // 0x2ef4b0: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2ef4b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ef4b4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF4B4u;
    {
        const bool branch_taken_0x2ef4b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4B4u;
        // 0x2ef4b8: 0x25ceeca8  addiu       $t6, $t6, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4b4) {
            ctx->pc = 0x2EF4C8u;
            goto label_2ef4c8;
        }
    }
    ctx->pc = 0x2EF4BCu;
    // 0x2ef4bc: 0x8dcf038c  lw          $t7, 0x38C($t6)
    ctx->pc = 0x2ef4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 908)));
    // 0x2ef4c0: 0x51e0001e  beql        $t7, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EF4C0u;
    {
        const bool branch_taken_0x2ef4c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef4c0) {
            ctx->pc = 0x2EF4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF4C0u;
            // 0x2ef4c4: 0x92840000  lbu         $a0, 0x0($s4) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF53Cu;
            goto label_2ef53c;
        }
    }
    ctx->pc = 0x2EF4C8u;
label_2ef4c8:
    // 0x2ef4c8: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ef4c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef4cc: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EF4CCu;
    SET_GPR_U32(ctx, 31, 0x2EF4D4u);
    ctx->pc = 0x2EF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4CCu;
    // 0x2ef4d0: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EF4CCu, 0x2EF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4D4u;
label_2ef4d4:
    // 0x2ef4d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF4D4u;
    {
        const bool branch_taken_0x2ef4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4d4) {
            ctx->pc = 0x2EF4FCu;
            goto label_2ef4fc;
        }
    }
    ctx->pc = 0x2EF4DCu;
    // 0x2ef4dc: 0x968f0002  lhu         $t7, 0x2($s4)
    ctx->pc = 0x2ef4dcu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ef4e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef4e4: 0xa44f0020  sh          $t7, 0x20($v0)
    ctx->pc = 0x2ef4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ef4e8: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x2ef4e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_2ef4ec:
    // 0x2ef4ec: 0xc0bc3b0  jal         func_2F0EC0
    ctx->pc = 0x2EF4ECu;
    SET_GPR_U32(ctx, 31, 0x2EF4F4u);
    ctx->pc = 0x2EF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4ECu;
    // 0x2ef4f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0EC0u, 0x2EF4ECu, 0x2EF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4F4u;
label_2ef4f4:
    // 0x2ef4f4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x2EF4F4u;
    {
        const bool branch_taken_0x2ef4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4F4u;
        // 0x2ef4f8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4f4) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF4FCu;
label_2ef4fc:
    // 0x2ef4fc: 0x968e0002  lhu         $t6, 0x2($s4)
    ctx->pc = 0x2ef4fcu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ef500: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x2ef500u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef504: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef504u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef508: 0x2efb824  and         $s7, $s7, $t7
    ctx->pc = 0x2ef508u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 15));
    // 0x2ef50c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef510: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef514: 0x2eeb825  or          $s7, $s7, $t6
    ctx->pc = 0x2ef514u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
    // 0x2ef518: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef51c: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef520: 0x24e71220  addiu       $a3, $a3, 0x1220
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4640));
label_2ef524:
    // 0x2ef524: 0x24050a27  addiu       $a1, $zero, 0xA27
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2599));
label_2ef528:
    // 0x2ef528: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef52c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF52Cu;
    SET_GPR_U32(ctx, 31, 0x2EF534u);
    ctx->pc = 0x2EF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF52Cu;
    // 0x2ef530: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF52Cu, 0x2EF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF534u;
label_2ef534:
    // 0x2ef534: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x2EF534u;
    {
        const bool branch_taken_0x2ef534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF534u;
        // 0x2ef538: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef534) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF53Cu;
label_2ef53c:
    // 0x2ef53c: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EF53Cu;
    SET_GPR_U32(ctx, 31, 0x2EF544u);
    ctx->pc = 0x2EF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF53Cu;
    // 0x2ef540: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EF53Cu, 0x2EF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF544u;
label_2ef544:
    // 0x2ef544: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF544u;
    {
        const bool branch_taken_0x2ef544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF544u;
        // 0x2ef548: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef544) {
            ctx->pc = 0x2EF57Cu;
            goto label_2ef57c;
        }
    }
    ctx->pc = 0x2EF54Cu;
    // 0x2ef54c: 0x968e0002  lhu         $t6, 0x2($s4)
    ctx->pc = 0x2ef54cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ef550: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x2ef550u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef554: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef554u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef558: 0x2efb824  and         $s7, $s7, $t7
    ctx->pc = 0x2ef558u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 15));
    // 0x2ef55c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef560: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef564: 0x2eeb825  or          $s7, $s7, $t6
    ctx->pc = 0x2ef564u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
    // 0x2ef568: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef56c: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef570: 0x24e71248  addiu       $a3, $a3, 0x1248
    ctx->pc = 0x2ef570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4680));
    // 0x2ef574: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2EF574u;
    {
        const bool branch_taken_0x2ef574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF574u;
        // 0x2ef578: 0x24050a31  addiu       $a1, $zero, 0xA31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2609));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef574) {
            ctx->pc = 0x2EF528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef528;
        }
    }
    ctx->pc = 0x2EF57Cu;
label_2ef57c:
    // 0x2ef57c: 0x968e0002  lhu         $t6, 0x2($s4)
    ctx->pc = 0x2ef57cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ef580: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x2ef580u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef584: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef584u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef588: 0x2efb824  and         $s7, $s7, $t7
    ctx->pc = 0x2ef588u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 15));
    // 0x2ef58c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef590: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef594: 0x2eeb825  or          $s7, $s7, $t6
    ctx->pc = 0x2ef594u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
    // 0x2ef598: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef59c: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
label_2ef5a0:
    // 0x2ef5a0: 0x24e71270  addiu       $a3, $a3, 0x1270
    ctx->pc = 0x2ef5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4720));
    // 0x2ef5a4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2EF5A4u;
    {
        const bool branch_taken_0x2ef5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5A4u;
        // 0x2ef5a8: 0x24050a37  addiu       $a1, $zero, 0xA37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2615));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5a4) {
            ctx->pc = 0x2EF528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef528;
        }
    }
    ctx->pc = 0x2EF5ACu;
    // 0x2ef5ac: 0x0  nop
    ctx->pc = 0x2ef5acu;
    // NOP
label_2ef5b0:
    // 0x2ef5b0: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x2ef5b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2ef5b4: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x2EF5B4u;
    {
        const bool branch_taken_0x2ef5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5b4) {
            ctx->pc = 0x2EF4ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF5BCu;
label_2ef5bc:
    // 0x2ef5bc: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef5bcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef5c0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef5c4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef5c8: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef5cc: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef5ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef5d0: 0x24e71298  addiu       $a3, $a3, 0x1298
    ctx->pc = 0x2ef5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4760));
    // 0x2ef5d4: 0x24050b27  addiu       $a1, $zero, 0xB27
    ctx->pc = 0x2ef5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2855));
label_2ef5d8:
    // 0x2ef5d8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ef5dc:
    // 0x2ef5dc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF5DCu;
    SET_GPR_U32(ctx, 31, 0x2EF5E4u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF5DCu, 0x2EF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5E4u;
label_2ef5e4:
    // 0x2ef5e4: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x2EF5E4u;
    {
        const bool branch_taken_0x2ef5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e4) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF5ECu;
label_2ef5ec:
    // 0x2ef5ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5f0: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF5F0u;
    SET_GPR_U32(ctx, 31, 0x2EF5F8u);
    ctx->pc = 0x2EF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5F0u;
    // 0x2ef5f4: 0x26900004  addiu       $s0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF5F0u, 0x2EF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5F8u;
label_2ef5f8:
    // 0x2ef5f8: 0x928f0004  lbu         $t7, 0x4($s4)
    ctx->pc = 0x2ef5f8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ef5fc: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EF5FCu;
    {
        const bool branch_taken_0x2ef5fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5FCu;
        // 0x2ef600: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5fc) {
            ctx->pc = 0x2EF658u;
            goto label_2ef658;
        }
    }
    ctx->pc = 0x2EF604u;
    // 0x2ef604: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ef604u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef608: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EF608u;
    SET_GPR_U32(ctx, 31, 0x2EF610u);
    ctx->pc = 0x2EF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF608u;
    // 0x2ef60c: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EF608u, 0x2EF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF610u;
label_2ef610:
    // 0x2ef610: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EF610u;
    {
        const bool branch_taken_0x2ef610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF610u;
        // 0x2ef614: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef610) {
            ctx->pc = 0x2EF650u;
            goto label_2ef650;
        }
    }
    ctx->pc = 0x2EF618u;
    // 0x2ef618: 0x92890000  lbu         $t1, 0x0($s4)
    ctx->pc = 0x2ef618u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef61c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef620: 0x928a0004  lbu         $t2, 0x4($s4)
    ctx->pc = 0x2ef620u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ef624: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ef624u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ef628: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x2ef628u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x2ef62c: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef630: 0x250812b0  addiu       $t0, $t0, 0x12B0
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4784));
    // 0x2ef634: 0x24050a50  addiu       $a1, $zero, 0xA50
    ctx->pc = 0x2ef634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
    // 0x2ef638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef63c: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EF63Cu;
    SET_GPR_U32(ctx, 31, 0x2EF644u);
    ctx->pc = 0x2EF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF63Cu;
    // 0x2ef640: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EF63Cu, 0x2EF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF644u;
label_2ef644:
    // 0x2ef644: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x2EF644u;
    {
        const bool branch_taken_0x2ef644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF644u;
        // 0x2ef648: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef644) {
            ctx->pc = 0x2EF290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF64Cu;
    // 0x2ef64c: 0x0  nop
    ctx->pc = 0x2ef64cu;
    // NOP
label_2ef650:
    // 0x2ef650: 0x928f0004  lbu         $t7, 0x4($s4)
    ctx->pc = 0x2ef650u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ef654: 0xac4f001c  sw          $t7, 0x1C($v0)
    ctx->pc = 0x2ef654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 15));
label_2ef658:
    // 0x2ef658: 0x920e0000  lbu         $t6, 0x0($s0)
    ctx->pc = 0x2ef658u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ef65c: 0x2dcf000d  sltiu       $t7, $t6, 0xD
    ctx->pc = 0x2ef65cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2ef660: 0x11e00199  beqz        $t7, . + 4 + (0x199 << 2)
    ctx->pc = 0x2EF660u;
    {
        const bool branch_taken_0x2ef660 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF660u;
        // 0x2ef664: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef660) {
            ctx->pc = 0x2EFCC8u;
            goto label_2efcc8;
        }
    }
    ctx->pc = 0x2EF668u;
    // 0x2ef668: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x2ef668u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x2ef66c: 0x25ce14d4  addiu       $t6, $t6, 0x14D4
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 5332));
    // 0x2ef670: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x2ef670u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2ef674: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x2ef674u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2ef678: 0x1a00008  jr          $t5
    ctx->pc = 0x2EF678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF680u: goto label_2ef680;
            case 0x2EF740u: goto label_2ef740;
            case 0x2EF87Cu: goto label_2ef87c;
            case 0x2EF97Cu: goto label_2ef97c;
            case 0x2EF9E8u: goto label_2ef9e8;
            case 0x2EFB0Cu: goto label_2efb0c;
            case 0x2EFB94u: goto label_2efb94;
            case 0x2EFC14u: goto label_2efc14;
            case 0x2EFC38u: goto label_2efc38;
            case 0x2EFC5Cu: goto label_2efc5c;
            case 0x2EFC80u: goto label_2efc80;
            case 0x2EFC98u: goto label_2efc98;
            case 0x2EFCB0u: goto label_2efcb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF678u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EF680u;
label_2ef680:
    // 0x2ef680: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2ef680u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2ef684: 0x92a80000  lbu         $t0, 0x0($s5)
    ctx->pc = 0x2ef684u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef688: 0x26301168  addiu       $s0, $s1, 0x1168
    ctx->pc = 0x2ef688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4456));
    // 0x2ef68c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef68cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef694: 0x24e712d8  addiu       $a3, $a3, 0x12D8
    ctx->pc = 0x2ef694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4824));
    // 0x2ef698: 0x24050a5a  addiu       $a1, $zero, 0xA5A
    ctx->pc = 0x2ef698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2650));
    // 0x2ef69c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF69Cu;
    SET_GPR_U32(ctx, 31, 0x2EF6A4u);
    ctx->pc = 0x2EF6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF69Cu;
    // 0x2ef6a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF69Cu, 0x2EF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6A4u;
label_2ef6a4:
    // 0x2ef6a4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ef6a8: 0x25e4eca8  addiu       $a0, $t7, -0x1358
    ctx->pc = 0x2ef6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef6ac: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x2ef6acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ef6b0: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2ef6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ef6b4: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF6B4u;
    {
        const bool branch_taken_0x2ef6b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B4u;
        // 0x2ef6b8: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6b4) {
            ctx->pc = 0x2EF6D4u;
            goto label_2ef6d4;
        }
    }
    ctx->pc = 0x2EF6BCu;
    // 0x2ef6bc: 0x92a80000  lbu         $t0, 0x0($s5)
    ctx->pc = 0x2ef6bcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c4: 0x24e712f0  addiu       $a3, $a3, 0x12F0
    ctx->pc = 0x2ef6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4848));
    // 0x2ef6c8: 0x24050a5d  addiu       $a1, $zero, 0xA5D
    ctx->pc = 0x2ef6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2653));
    // 0x2ef6cc: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x2EF6CCu;
    {
        const bool branch_taken_0x2ef6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6CCu;
        // 0x2ef6d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6cc) {
            ctx->pc = 0x2EF5DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef5dc;
        }
    }
    ctx->pc = 0x2EF6D4u;
label_2ef6d4:
    // 0x2ef6d4: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2ef6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2ef6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EF6DCu;
    SET_GPR_U32(ctx, 31, 0x2EF6E4u);
    ctx->pc = 0x2EF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6DCu;
    // 0x2ef6e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EF6DCu, 0x2EF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6E4u;
label_2ef6e4:
    // 0x2ef6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6e8: 0x24050a62  addiu       $a1, $zero, 0xA62
    ctx->pc = 0x2ef6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2658));
    // 0x2ef6ec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef6f0: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EF6F0u;
    SET_GPR_U32(ctx, 31, 0x2EF6F8u);
    ctx->pc = 0x2EF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6F0u;
    // 0x2ef6f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EF6F0u, 0x2EF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6F8u;
label_2ef6f8:
    // 0x2ef6f8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF6F8u;
    SET_GPR_U32(ctx, 31, 0x2EF700u);
    ctx->pc = 0x2EF6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6F8u;
    // 0x2ef6fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF6F8u, 0x2EF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF700u;
label_2ef700:
    // 0x2ef700: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF700u;
    {
        const bool branch_taken_0x2ef700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF700u;
        // 0x2ef704: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef700) {
            ctx->pc = 0x2EF730u;
            goto label_2ef730;
        }
    }
    ctx->pc = 0x2EF708u;
    // 0x2ef708: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2ef708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef70c:
    // 0x2ef70c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ef70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef710: 0x24050a65  addiu       $a1, $zero, 0xA65
    ctx->pc = 0x2ef710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2661));
    // 0x2ef714: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2ef714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef718: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF718u;
    SET_GPR_U32(ctx, 31, 0x2EF720u);
    ctx->pc = 0x2EF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF718u;
    // 0x2ef71c: 0x26041168  addiu       $a0, $s0, 0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EF718u, 0x2EF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF720u;
label_2ef720:
    // 0x2ef720: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF720u;
    SET_GPR_U32(ctx, 31, 0x2EF728u);
    ctx->pc = 0x2EF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF720u;
    // 0x2ef724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF720u, 0x2EF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF728u;
label_2ef728:
    // 0x2ef728: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EF728u;
    {
        const bool branch_taken_0x2ef728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF728u;
        // 0x2ef72c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef728) {
            ctx->pc = 0x2EF70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef70c;
        }
    }
    ctx->pc = 0x2EF730u;
label_2ef730:
    // 0x2ef730: 0xc0bb786  jal         func_2EDE18
    ctx->pc = 0x2EF730u;
    SET_GPR_U32(ctx, 31, 0x2EF738u);
    ctx->pc = 0x2EDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE18u, 0x2EF730u, 0x2EF738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF738u;
label_2ef738:
    // 0x2ef738: 0x1000ff39  b           . + 4 + (-0xC7 << 2)
    ctx->pc = 0x2EF738u;
    {
        const bool branch_taken_0x2ef738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF738u;
        // 0x2ef73c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef738) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF740u;
label_2ef740:
    // 0x2ef740: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef740u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef744: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2ef744u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2ef748: 0x26511168  addiu       $s1, $s2, 0x1168
    ctx->pc = 0x2ef748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4456));
    // 0x2ef74c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef74cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef750: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef754: 0x24e71310  addiu       $a3, $a3, 0x1310
    ctx->pc = 0x2ef754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4880));
    // 0x2ef758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef75c: 0x24050aa3  addiu       $a1, $zero, 0xAA3
    ctx->pc = 0x2ef75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2723));
    // 0x2ef760: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF760u;
    SET_GPR_U32(ctx, 31, 0x2EF768u);
    ctx->pc = 0x2EF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF760u;
    // 0x2ef764: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF760u, 0x2EF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF768u;
label_2ef768:
    // 0x2ef768: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ef768u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef76c: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2ef76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2ef770: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2ef770u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2ef774: 0xc0bc21a  jal         func_2F0868
    ctx->pc = 0x2EF774u;
    SET_GPR_U32(ctx, 31, 0x2EF77Cu);
    ctx->pc = 0x2EF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF774u;
    // 0x2ef778: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0868u, 0x2EF774u, 0x2EF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF77Cu;
label_2ef77c:
    // 0x2ef77c: 0x145e000a  bne         $v0, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF77Cu;
    {
        const bool branch_taken_0x2ef77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2EF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF77Cu;
        // 0x2ef780: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef77c) {
            ctx->pc = 0x2EF7A8u;
            goto label_2ef7a8;
        }
    }
    ctx->pc = 0x2EF784u;
    // 0x2ef784: 0x92890000  lbu         $t1, 0x0($s4)
    ctx->pc = 0x2ef784u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef788: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ef788u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ef78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef790: 0x25081328  addiu       $t0, $t0, 0x1328
    ctx->pc = 0x2ef790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4904));
    // 0x2ef794: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x2ef794u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x2ef798: 0x24050aa9  addiu       $a1, $zero, 0xAA9
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2729));
    // 0x2ef79c: 0x1000ff0a  b           . + 4 + (-0xF6 << 2)
    ctx->pc = 0x2EF79Cu;
    {
        const bool branch_taken_0x2ef79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF79Cu;
        // 0x2ef7a0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef79c) {
            ctx->pc = 0x2EF3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef3c8;
        }
    }
    ctx->pc = 0x2EF7A4u;
    // 0x2ef7a4: 0x0  nop
    ctx->pc = 0x2ef7a4u;
    // NOP
label_2ef7a8:
    // 0x2ef7a8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ef7ac: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ef7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef7b0: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x2ef7b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ef7b4: 0x8e0f0378  lw          $t7, 0x378($s0)
    ctx->pc = 0x2ef7b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x2ef7b8: 0x55cfff19  bnel        $t6, $t7, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2EF7B8u;
    {
        const bool branch_taken_0x2ef7b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ef7b8) {
            ctx->pc = 0x2EF7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF7B8u;
            // 0x2ef7bc: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF7C0u;
    // 0x2ef7c0: 0x8e0f038c  lw          $t7, 0x38C($s0)
    ctx->pc = 0x2ef7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x2ef7c4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EF7C4u;
    {
        const bool branch_taken_0x2ef7c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7C4u;
        // 0x2ef7c8: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7c4) {
            ctx->pc = 0x2EF824u;
            goto label_2ef824;
        }
    }
    ctx->pc = 0x2EF7CCu;
    // 0x2ef7cc: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF7CCu;
    SET_GPR_U32(ctx, 31, 0x2EF7D4u);
    ctx->pc = 0x2EF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7CCu;
    // 0x2ef7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF7CCu, 0x2EF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7D4u;
label_2ef7d4:
    // 0x2ef7d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF7D4u;
    {
        const bool branch_taken_0x2ef7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7D4u;
        // 0x2ef7d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7d4) {
            ctx->pc = 0x2EF804u;
            goto label_2ef804;
        }
    }
    ctx->pc = 0x2EF7DCu;
    // 0x2ef7dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2ef7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef7e0:
    // 0x2ef7e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ef7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7e4: 0x24050ab2  addiu       $a1, $zero, 0xAB2
    ctx->pc = 0x2ef7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2738));
    // 0x2ef7e8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2ef7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef7ec: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF7ECu;
    SET_GPR_U32(ctx, 31, 0x2EF7F4u);
    ctx->pc = 0x2EF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7ECu;
    // 0x2ef7f0: 0x26041168  addiu       $a0, $s0, 0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EF7ECu, 0x2EF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7F4u;
label_2ef7f4:
    // 0x2ef7f4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF7F4u;
    SET_GPR_U32(ctx, 31, 0x2EF7FCu);
    ctx->pc = 0x2EF7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7F4u;
    // 0x2ef7f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF7F4u, 0x2EF7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7FCu;
label_2ef7fc:
    // 0x2ef7fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EF7FCu;
    {
        const bool branch_taken_0x2ef7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7FCu;
        // 0x2ef800: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7fc) {
            ctx->pc = 0x2EF7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef7e0;
        }
    }
    ctx->pc = 0x2EF804u;
label_2ef804:
    // 0x2ef804: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef808: 0x24050ab5  addiu       $a1, $zero, 0xAB5
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2741));
    // 0x2ef80c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ef80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ef810: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef814: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EF814u;
    SET_GPR_U32(ctx, 31, 0x2EF81Cu);
    ctx->pc = 0x2EF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF814u;
    // 0x2ef818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EF814u, 0x2EF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF81Cu;
label_2ef81c:
    // 0x2ef81c: 0x1000ff00  b           . + 4 + (-0x100 << 2)
    ctx->pc = 0x2EF81Cu;
    {
        const bool branch_taken_0x2ef81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF81Cu;
        // 0x2ef820: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef81c) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF824u;
label_2ef824:
    // 0x2ef824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef828: 0x24050ab9  addiu       $a1, $zero, 0xAB9
    ctx->pc = 0x2ef828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2745));
    // 0x2ef82c: 0x24e71348  addiu       $a3, $a3, 0x1348
    ctx->pc = 0x2ef82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4936));
    // 0x2ef830: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef834: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF834u;
    SET_GPR_U32(ctx, 31, 0x2EF83Cu);
    ctx->pc = 0x2EF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF834u;
    // 0x2ef838: 0x26101458  addiu       $s0, $s0, 0x1458 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF834u, 0x2EF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF83Cu;
label_2ef83c:
    // 0x2ef83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef848: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EF848u;
    SET_GPR_U32(ctx, 31, 0x2EF850u);
    ctx->pc = 0x2EF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF848u;
    // 0x2ef84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EF848u, 0x2EF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF850u;
label_2ef850:
    // 0x2ef850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef854: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EF854u;
    SET_GPR_U32(ctx, 31, 0x2EF85Cu);
    ctx->pc = 0x2EF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF854u;
    // 0x2ef858: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EF854u, 0x2EF85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF85Cu;
label_2ef85c:
    // 0x2ef85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef860: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ef860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef864: 0x24050abe  addiu       $a1, $zero, 0xABE
    ctx->pc = 0x2ef864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2750));
    // 0x2ef868: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ef868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef86c:
    // 0x2ef86c: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF86Cu;
    SET_GPR_U32(ctx, 31, 0x2EF874u);
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EF86Cu, 0x2EF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF874u;
label_2ef874:
    // 0x2ef874: 0x1000feea  b           . + 4 + (-0x116 << 2)
    ctx->pc = 0x2EF874u;
    {
        const bool branch_taken_0x2ef874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF874u;
        // 0x2ef878: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef874) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF87Cu;
label_2ef87c:
    // 0x2ef87c: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef87cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef880: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2ef880u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2ef884: 0x26511168  addiu       $s1, $s2, 0x1168
    ctx->pc = 0x2ef884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4456));
    // 0x2ef888: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef888u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef88c: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef88cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef890: 0x24e71360  addiu       $a3, $a3, 0x1360
    ctx->pc = 0x2ef890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4960));
    // 0x2ef894: 0x24050ac6  addiu       $a1, $zero, 0xAC6
    ctx->pc = 0x2ef894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2758));
    // 0x2ef898: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef89c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF89Cu;
    SET_GPR_U32(ctx, 31, 0x2EF8A4u);
    ctx->pc = 0x2EF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF89Cu;
    // 0x2ef8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF89Cu, 0x2EF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8A4u;
label_2ef8a4:
    // 0x2ef8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8a8: 0x24050aca  addiu       $a1, $zero, 0xACA
    ctx->pc = 0x2ef8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2762));
    // 0x2ef8ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ef8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8b0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF8B0u;
    SET_GPR_U32(ctx, 31, 0x2EF8B8u);
    ctx->pc = 0x2EF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF8B0u;
    // 0x2ef8b4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EF8B0u, 0x2EF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8B8u;
label_2ef8b8:
    // 0x2ef8b8: 0xc0bb670  jal         func_2ED9C0
    ctx->pc = 0x2EF8B8u;
    SET_GPR_U32(ctx, 31, 0x2EF8C0u);
    ctx->pc = 0x2EF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF8B8u;
    // 0x2ef8bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9C0u, 0x2EF8B8u, 0x2EF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8C0u;
label_2ef8c0:
    // 0x2ef8c0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ef8c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ef8c4: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ef8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ef8c8: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x2ef8c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ef8cc: 0x544efed4  bnel        $v0, $t6, . + 4 + (-0x12C << 2)
    ctx->pc = 0x2EF8CCu;
    {
        const bool branch_taken_0x2ef8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x2ef8cc) {
            ctx->pc = 0x2EF8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF8CCu;
            // 0x2ef8d0: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF8D4u;
    // 0x2ef8d4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8dc: 0x24050ace  addiu       $a1, $zero, 0xACE
    ctx->pc = 0x2ef8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2766));
    // 0x2ef8e0: 0x24e71380  addiu       $a3, $a3, 0x1380
    ctx->pc = 0x2ef8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x2ef8e4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef8e8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF8E8u;
    SET_GPR_U32(ctx, 31, 0x2EF8F0u);
    ctx->pc = 0x2EF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF8E8u;
    // 0x2ef8ec: 0x26101458  addiu       $s0, $s0, 0x1458 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF8E8u, 0x2EF8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8F0u;
label_2ef8f0:
    // 0x2ef8f0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8f8: 0x24050ad1  addiu       $a1, $zero, 0xAD1
    ctx->pc = 0x2ef8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2769));
    // 0x2ef8fc: 0x24e71398  addiu       $a3, $a3, 0x1398
    ctx->pc = 0x2ef8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5016));
    // 0x2ef900: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF900u;
    SET_GPR_U32(ctx, 31, 0x2EF908u);
    ctx->pc = 0x2EF904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF900u;
    // 0x2ef904: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF900u, 0x2EF908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF908u;
label_2ef908:
    // 0x2ef908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef90c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef914: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EF914u;
    SET_GPR_U32(ctx, 31, 0x2EF91Cu);
    ctx->pc = 0x2EF918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF914u;
    // 0x2ef918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EF914u, 0x2EF91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF91Cu;
label_2ef91c:
    // 0x2ef91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef920: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EF920u;
    SET_GPR_U32(ctx, 31, 0x2EF928u);
    ctx->pc = 0x2EF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF920u;
    // 0x2ef924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EF920u, 0x2EF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF928u;
label_2ef928:
    // 0x2ef928: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF928u;
    SET_GPR_U32(ctx, 31, 0x2EF930u);
    ctx->pc = 0x2EF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF928u;
    // 0x2ef92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF928u, 0x2EF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF930u;
label_2ef930:
    // 0x2ef930: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF930u;
    {
        const bool branch_taken_0x2ef930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF930u;
        // 0x2ef934: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef930) {
            ctx->pc = 0x2EF964u;
            goto label_2ef964;
        }
    }
    ctx->pc = 0x2EF938u;
    // 0x2ef938: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2ef938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef93c:
    // 0x2ef93c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ef93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef940: 0x26041168  addiu       $a0, $s0, 0x1168
    ctx->pc = 0x2ef940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4456));
    // 0x2ef944: 0x24050ad7  addiu       $a1, $zero, 0xAD7
    ctx->pc = 0x2ef944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2775));
    // 0x2ef948: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF948u;
    SET_GPR_U32(ctx, 31, 0x2EF950u);
    ctx->pc = 0x2EF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF948u;
    // 0x2ef94c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EF948u, 0x2EF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF950u;
label_2ef950:
    // 0x2ef950: 0xa2a00024  sb          $zero, 0x24($s5)
    ctx->pc = 0x2ef950u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef954: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EF954u;
    SET_GPR_U32(ctx, 31, 0x2EF95Cu);
    ctx->pc = 0x2EF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF954u;
    // 0x2ef958: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EF954u, 0x2EF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF95Cu;
label_2ef95c:
    // 0x2ef95c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EF95Cu;
    {
        const bool branch_taken_0x2ef95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF95Cu;
        // 0x2ef960: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef95c) {
            ctx->pc = 0x2EF93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef93c;
        }
    }
    ctx->pc = 0x2EF964u;
label_2ef964:
    // 0x2ef964: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ef968: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ef968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef96c: 0x24050adb  addiu       $a1, $zero, 0xADB
    ctx->pc = 0x2ef96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2779));
    // 0x2ef970: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2ef970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2ef974: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x2EF974u;
    {
        const bool branch_taken_0x2ef974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef974) {
            ctx->pc = 0x2EF86Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef86c;
        }
    }
    ctx->pc = 0x2EF97Cu;
label_2ef97c:
    // 0x2ef97c: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef97cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef980: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ef980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ef984: 0x26101168  addiu       $s0, $s0, 0x1168
    ctx->pc = 0x2ef984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4456));
    // 0x2ef988: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef990: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef994: 0x24e713b0  addiu       $a3, $a3, 0x13B0
    ctx->pc = 0x2ef994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5040));
    // 0x2ef998: 0x24050ae1  addiu       $a1, $zero, 0xAE1
    ctx->pc = 0x2ef998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2785));
    // 0x2ef99c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF99Cu;
    SET_GPR_U32(ctx, 31, 0x2EF9A4u);
    ctx->pc = 0x2EF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF99Cu;
    // 0x2ef9a0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF99Cu, 0x2EF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9A4u;
label_2ef9a4:
    // 0x2ef9a4: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef9a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9ac: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef9b0: 0x24050ae5  addiu       $a1, $zero, 0xAE5
    ctx->pc = 0x2ef9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2789));
    // 0x2ef9b4: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef9b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2ef9b8: 0x24e713c8  addiu       $a3, $a3, 0x13C8
    ctx->pc = 0x2ef9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5064));
    // 0x2ef9bc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef9c0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF9C0u;
    SET_GPR_U32(ctx, 31, 0x2EF9C8u);
    ctx->pc = 0x2EF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9C0u;
    // 0x2ef9c4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EF9C0u, 0x2EF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9C8u;
label_2ef9c8:
    // 0x2ef9c8: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x2ef9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2ef9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d8: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EF9D8u;
    SET_GPR_U32(ctx, 31, 0x2EF9E0u);
    ctx->pc = 0x2EF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9D8u;
    // 0x2ef9dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EF9D8u, 0x2EF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9E0u;
label_2ef9e0:
    // 0x2ef9e0: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x2EF9E0u;
    {
        const bool branch_taken_0x2ef9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E0u;
        // 0x2ef9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9e0) {
            ctx->pc = 0x2EF414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef414;
        }
    }
    ctx->pc = 0x2EF9E8u;
label_2ef9e8:
    // 0x2ef9e8: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ef9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ef9ec: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ef9ecu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef9f0: 0x25f01168  addiu       $s0, $t7, 0x1168
    ctx->pc = 0x2ef9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4456));
    // 0x2ef9f4: 0x92a90024  lbu         $t1, 0x24($s5)
    ctx->pc = 0x2ef9f4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2ef9f8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef9fc: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2ef9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2efa00: 0x24e713e8  addiu       $a3, $a3, 0x13E8
    ctx->pc = 0x2efa00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5096));
    // 0x2efa04: 0x24050aed  addiu       $a1, $zero, 0xAED
    ctx->pc = 0x2efa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2797));
    // 0x2efa08: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2efa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2efa0c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EFA14u);
    ctx->pc = 0x2EFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA0Cu;
    // 0x2efa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFA0Cu, 0x2EFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA14u;
label_2efa14:
    // 0x2efa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa18: 0x24050af1  addiu       $a1, $zero, 0xAF1
    ctx->pc = 0x2efa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2801));
    // 0x2efa1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2efa1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa20: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EFA20u;
    SET_GPR_U32(ctx, 31, 0x2EFA28u);
    ctx->pc = 0x2EFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA20u;
    // 0x2efa24: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EFA20u, 0x2EFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA28u;
label_2efa28:
    // 0x2efa28: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2efa28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2efa2c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2efa2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2efa30: 0x8dcdeca8  lw          $t5, -0x1358($t6)
    ctx->pc = 0x2efa30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2efa34: 0x15affe79  bne         $t5, $t7, . + 4 + (-0x187 << 2)
    ctx->pc = 0x2EFA34u;
    {
        const bool branch_taken_0x2efa34 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA34u;
        // 0x2efa38: 0x25d1eca8  addiu       $s1, $t6, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa34) {
            ctx->pc = 0x2EF41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef41c;
        }
    }
    ctx->pc = 0x2EFA3Cu;
    // 0x2efa3c: 0xc0bb670  jal         func_2ED9C0
    ctx->pc = 0x2EFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2EFA44u);
    ctx->pc = 0x2EFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA3Cu;
    // 0x2efa40: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9C0u, 0x2EFA3Cu, 0x2EFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA44u;
label_2efa44:
    // 0x2efa44: 0x8e2f00b4  lw          $t7, 0xB4($s1)
    ctx->pc = 0x2efa44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2efa48: 0x544ffe75  bnel        $v0, $t7, . + 4 + (-0x18B << 2)
    ctx->pc = 0x2EFA48u;
    {
        const bool branch_taken_0x2efa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2efa48) {
            ctx->pc = 0x2EFA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA48u;
            // 0x2efa4c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EFA50u;
    // 0x2efa50: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efa50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2efa54:
    // 0x2efa54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa58: 0x24050af9  addiu       $a1, $zero, 0xAF9
    ctx->pc = 0x2efa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2809));
    // 0x2efa5c: 0x24e71410  addiu       $a3, $a3, 0x1410
    ctx->pc = 0x2efa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5136));
    // 0x2efa60: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFA60u;
    SET_GPR_U32(ctx, 31, 0x2EFA68u);
    ctx->pc = 0x2EFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA60u;
    // 0x2efa64: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFA60u, 0x2EFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA68u;
label_2efa68:
    // 0x2efa68: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2efa68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2efa6c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFA74u);
    ctx->pc = 0x2EFA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA6Cu;
    // 0x2efa70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EFA6Cu, 0x2EFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA74u;
label_2efa74:
    // 0x2efa74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFA74u;
    {
        const bool branch_taken_0x2efa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA74u;
        // 0x2efa78: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa74) {
            ctx->pc = 0x2EFAA4u;
            goto label_2efaa4;
        }
    }
    ctx->pc = 0x2EFA7Cu;
    // 0x2efa7c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2efa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa80:
    // 0x2efa80: 0x92ae0024  lbu         $t6, 0x24($s5)
    ctx->pc = 0x2efa80u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2efa84: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x2efa84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2efa88: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x2efa88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2efa8c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFA8Cu;
    {
        const bool branch_taken_0x2efa8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efa8c) {
            ctx->pc = 0x2EFA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA8Cu;
            // 0x2efa90: 0xae0e004c  sw          $t6, 0x4C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA94u;
            goto label_2efa94;
        }
    }
    ctx->pc = 0x2EFA94u;
label_2efa94:
    // 0x2efa94: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EFA94u;
    SET_GPR_U32(ctx, 31, 0x2EFA9Cu);
    ctx->pc = 0x2EFA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA94u;
    // 0x2efa98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EFA94u, 0x2EFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA9Cu;
label_2efa9c:
    // 0x2efa9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EFA9Cu;
    {
        const bool branch_taken_0x2efa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA9Cu;
        // 0x2efaa0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa9c) {
            ctx->pc = 0x2EFA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efa80;
        }
    }
    ctx->pc = 0x2EFAA4u;
label_2efaa4:
    // 0x2efaa4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2efaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2efaa8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2efaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2efaac: 0x2610eca8  addiu       $s0, $s0, -0x1358
    ctx->pc = 0x2efaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962344));
    // 0x2efab0: 0x26311168  addiu       $s1, $s1, 0x1168
    ctx->pc = 0x2efab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4456));
    // 0x2efab4: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x2efab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2efab8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2efabc: 0x26121458  addiu       $s2, $s0, 0x1458
    ctx->pc = 0x2efabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5208));
    // 0x2efac0: 0x24e71428  addiu       $a3, $a3, 0x1428
    ctx->pc = 0x2efac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5160));
    // 0x2efac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efac8: 0x24050b01  addiu       $a1, $zero, 0xB01
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2817));
    // 0x2efacc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2efad0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFAD0u;
    SET_GPR_U32(ctx, 31, 0x2EFAD8u);
    ctx->pc = 0x2EFAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAD0u;
    // 0x2efad4: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFAD0u, 0x2EFAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAD8u;
label_2efad8:
    // 0x2efad8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2efad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efadc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2efadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2efae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efae4: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EFAE4u;
    SET_GPR_U32(ctx, 31, 0x2EFAECu);
    ctx->pc = 0x2EFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAE4u;
    // 0x2efae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EFAE4u, 0x2EFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAECu;
label_2efaec:
    // 0x2efaec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efaf0: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EFAF0u;
    SET_GPR_U32(ctx, 31, 0x2EFAF8u);
    ctx->pc = 0x2EFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAF0u;
    // 0x2efaf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EFAF0u, 0x2EFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAF8u;
label_2efaf8:
    // 0x2efaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efafc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2efafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb00: 0x24050b06  addiu       $a1, $zero, 0xB06
    ctx->pc = 0x2efb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2822));
label_2efb04:
    // 0x2efb04: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2EFB04u;
    {
        const bool branch_taken_0x2efb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB04u;
        // 0x2efb08: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb04) {
            ctx->pc = 0x2EF86Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef86c;
        }
    }
    ctx->pc = 0x2EFB0Cu;
label_2efb0c:
    // 0x2efb0c: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2efb0cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2efb10: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2efb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2efb14: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EFB14u;
    SET_GPR_U32(ctx, 31, 0x2EFB1Cu);
    ctx->pc = 0x2EFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB14u;
    // 0x2efb18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2EFB14u, 0x2EFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB1Cu;
label_2efb1c:
    // 0x2efb1c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2efb1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2efb20: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2efb20u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2efb24: 0x25f01168  addiu       $s0, $t7, 0x1168
    ctx->pc = 0x2efb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4456));
    // 0x2efb28: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x2efb28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efb2c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2efb30: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2efb30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2efb34: 0x24e71448  addiu       $a3, $a3, 0x1448
    ctx->pc = 0x2efb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5192));
    // 0x2efb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb3c: 0x24050b10  addiu       $a1, $zero, 0xB10
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x2efb40: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFB40u;
    SET_GPR_U32(ctx, 31, 0x2EFB48u);
    ctx->pc = 0x2EFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB40u;
    // 0x2efb44: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFB40u, 0x2EFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB48u;
label_2efb48:
    // 0x2efb48: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2efb4c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x2efb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efb50: 0x25ceeca8  addiu       $t6, $t6, -0x1358
    ctx->pc = 0x2efb50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
    // 0x2efb54: 0x8dcf004c  lw          $t7, 0x4C($t6)
    ctx->pc = 0x2efb54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 76)));
    // 0x2efb58: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x2efb58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2efb5c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x2EFB5Cu;
    {
        const bool branch_taken_0x2efb5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB5Cu;
        // 0x2efb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb5c) {
            ctx->pc = 0x2EFB88u;
            goto label_2efb88;
        }
    }
    ctx->pc = 0x2EFB64u;
    // 0x2efb64: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2efb64u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2efb68: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2efb6c: 0xadc9004c  sw          $t1, 0x4C($t6)
    ctx->pc = 0x2efb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 76), GPR_U32(ctx, 9));
    // 0x2efb70: 0x24e71470  addiu       $a3, $a3, 0x1470
    ctx->pc = 0x2efb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5232));
    // 0x2efb74: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2efb74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2efb78: 0x24050b14  addiu       $a1, $zero, 0xB14
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2836));
    // 0x2efb7c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFB7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB84u);
    ctx->pc = 0x2EFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB7Cu;
    // 0x2efb80: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFB7Cu, 0x2EFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB84u;
label_2efb84:
    // 0x2efb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efb88:
    // 0x2efb88: 0x24050b19  addiu       $a1, $zero, 0xB19
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2841));
    // 0x2efb8c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2EFB8Cu;
    {
        const bool branch_taken_0x2efb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB8Cu;
        // 0x2efb90: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb8c) {
            ctx->pc = 0x2EFB04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efb04;
        }
    }
    ctx->pc = 0x2EFB94u;
label_2efb94:
    // 0x2efb94: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2efb94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2efb98: 0x92a80000  lbu         $t0, 0x0($s5)
    ctx->pc = 0x2efb98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2efb9c: 0x26101168  addiu       $s0, $s0, 0x1168
    ctx->pc = 0x2efb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4456));
    // 0x2efba0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2efba4: 0x24e71490  addiu       $a3, $a3, 0x1490
    ctx->pc = 0x2efba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5264));
    // 0x2efba8: 0x24050a88  addiu       $a1, $zero, 0xA88
    ctx->pc = 0x2efba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2696));
    // 0x2efbac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2efbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2efbb0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFBB0u;
    SET_GPR_U32(ctx, 31, 0x2EFBB8u);
    ctx->pc = 0x2EFBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBB0u;
    // 0x2efbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EFBB0u, 0x2EFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBB8u;
label_2efbb8:
    // 0x2efbb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbbc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2efbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbc0: 0x24050a89  addiu       $a1, $zero, 0xA89
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2697));
    // 0x2efbc4: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EFBC4u;
    SET_GPR_U32(ctx, 31, 0x2EFBCCu);
    ctx->pc = 0x2EFBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBC4u;
    // 0x2efbc8: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EFBC4u, 0x2EFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBCCu;
label_2efbcc:
    // 0x2efbcc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2efbccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2efbd0: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2efbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2efbd4: 0x8e2e005c  lw          $t6, 0x5C($s1)
    ctx->pc = 0x2efbd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2efbd8: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFBD8u;
    {
        const bool branch_taken_0x2efbd8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBD8u;
        // 0x2efbdc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbd8) {
            ctx->pc = 0x2EFC08u;
            goto label_2efc08;
        }
    }
    ctx->pc = 0x2EFBE0u;
    // 0x2efbe0: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2efbe0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2efbe4: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2efbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2efbe8: 0x8e300090  lw          $s0, 0x90($s1)
    ctx->pc = 0x2efbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2efbec: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x2EFBECu;
    SET_GPR_U32(ctx, 31, 0x2EFBF4u);
    ctx->pc = 0x2EFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBECu;
    // 0x2efbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x2EFBECu, 0x2EFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBF4u;
label_2efbf4:
    // 0x2efbf4: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x2efbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2efbf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2efbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbfc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EFBFCu;
    SET_GPR_U32(ctx, 31, 0x2EFC04u);
    ctx->pc = 0x2EFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBFCu;
    // 0x2efc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2EFBFCu, 0x2EFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC04u;
label_2efc04:
    // 0x2efc04: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2efc04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efc08:
    // 0x2efc08: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2efc08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efc0c: 0x1000fda0  b           . + 4 + (-0x260 << 2)
    ctx->pc = 0x2EFC0Cu;
    {
        const bool branch_taken_0x2efc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC0Cu;
        // 0x2efc10: 0xae2f0050  sw          $t7, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc0c) {
            ctx->pc = 0x2EF290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EFC14u;
label_2efc14:
    // 0x2efc14: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efc14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efc18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc20: 0x24c6eccc  addiu       $a2, $a2, -0x1334
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962380));
    // 0x2efc24: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2efc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2efc28:
    // 0x2efc28: 0xc0bba36  jal         func_2EE8D8
    ctx->pc = 0x2EFC28u;
    SET_GPR_U32(ctx, 31, 0x2EFC30u);
    ctx->pc = 0x2EE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8D8u, 0x2EFC28u, 0x2EFC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC30u;
label_2efc30:
    // 0x2efc30: 0x1000fdfb  b           . + 4 + (-0x205 << 2)
    ctx->pc = 0x2EFC30u;
    {
        const bool branch_taken_0x2efc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC30u;
        // 0x2efc34: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc30) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EFC38u;
label_2efc38:
    // 0x2efc38: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efc38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc44: 0x24c6eccc  addiu       $a2, $a2, -0x1334
    ctx->pc = 0x2efc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962380));
    // 0x2efc48: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2efc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2efc4c:
    // 0x2efc4c: 0xc0bbb24  jal         func_2EEC90
    ctx->pc = 0x2EFC4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC54u);
    ctx->pc = 0x2EEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC90u, 0x2EFC4Cu, 0x2EFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC54u;
label_2efc54:
    // 0x2efc54: 0x1000fdf2  b           . + 4 + (-0x20E << 2)
    ctx->pc = 0x2EFC54u;
    {
        const bool branch_taken_0x2efc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC54u;
        // 0x2efc58: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc54) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EFC5Cu;
label_2efc5c:
    // 0x2efc5c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc68: 0x24c6eccc  addiu       $a2, $a2, -0x1334
    ctx->pc = 0x2efc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962380));
    // 0x2efc6c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2efc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2efc70:
    // 0x2efc70: 0xc0bbbac  jal         func_2EEEB0
    ctx->pc = 0x2EFC70u;
    SET_GPR_U32(ctx, 31, 0x2EFC78u);
    ctx->pc = 0x2EEEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEEB0u, 0x2EFC70u, 0x2EFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC78u;
label_2efc78:
    // 0x2efc78: 0x1000fde9  b           . + 4 + (-0x217 << 2)
    ctx->pc = 0x2EFC78u;
    {
        const bool branch_taken_0x2efc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC78u;
        // 0x2efc7c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc78) {
            ctx->pc = 0x2EF420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EFC80u;
label_2efc80:
    // 0x2efc80: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efc80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc8c: 0x24c6ecd8  addiu       $a2, $a2, -0x1328
    ctx->pc = 0x2efc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962392));
    // 0x2efc90: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2EFC90u;
    {
        const bool branch_taken_0x2efc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC90u;
        // 0x2efc94: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc90) {
            ctx->pc = 0x2EFC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFC98u;
label_2efc98:
    // 0x2efc98: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efc98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efc9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efca0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efca4: 0x24c6ecd8  addiu       $a2, $a2, -0x1328
    ctx->pc = 0x2efca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962392));
    // 0x2efca8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EFCA8u;
    {
        const bool branch_taken_0x2efca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCA8u;
        // 0x2efcac: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efca8) {
            ctx->pc = 0x2EFC4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efc4c;
        }
    }
    ctx->pc = 0x2EFCB0u;
label_2efcb0:
    // 0x2efcb0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2efcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2efcb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2efcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2efcbc:
    // 0x2efcbc: 0x24c6ecd8  addiu       $a2, $a2, -0x1328
    ctx->pc = 0x2efcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962392));
    // 0x2efcc0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x2EFCC0u;
    {
        const bool branch_taken_0x2efcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCC0u;
        // 0x2efcc4: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcc0) {
            ctx->pc = 0x2EFC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efc70;
        }
    }
    ctx->pc = 0x2EFCC8u;
label_2efcc8:
    // 0x2efcc8: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2efcc8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2efccc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2efcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2efcd0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2efcd4:
    // 0x2efcd4: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2efcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2efcd8: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x2efcd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x2efcdc: 0x24e71298  addiu       $a3, $a3, 0x1298
    ctx->pc = 0x2efcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4760));
    // 0x2efce0: 0x1000fe3d  b           . + 4 + (-0x1C3 << 2)
    ctx->pc = 0x2EFCE0u;
    {
        const bool branch_taken_0x2efce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCE0u;
        // 0x2efce4: 0x24050b1f  addiu       $a1, $zero, 0xB1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efce0) {
            ctx->pc = 0x2EF5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef5d8;
        }
    }
    ctx->pc = 0x2EFCE8u;
}
